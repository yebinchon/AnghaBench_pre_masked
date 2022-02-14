
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rcar_du_crtc {TYPE_4__* vsp; } ;
typedef enum vsp1_du_crc_source { ____Placeholder_vsp1_du_crc_source } vsp1_du_crc_source ;
struct TYPE_8__ {unsigned int num_planes; TYPE_3__* planes; } ;
struct TYPE_5__ {unsigned int id; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct TYPE_7__ {TYPE_2__ plane; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int,unsigned int*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(struct rcar_du_crtc *VAR_4,
      const char *VAR_5,
      enum vsp1_du_crc_source *VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;







 if (!VAR_5) {
  *VAR_6 = VAR_1;
  return 0;
 } else if (!FUNC_1(VAR_5, "auto")) {
  *VAR_6 = VAR_2;
  return 0;
 } else if (FUNC_3(VAR_5, "plane")) {
  unsigned int VAR_9;

  *VAR_6 = VAR_3;

  VAR_8 = FUNC_0(VAR_5 + FUNC_2("plane"), 10, &VAR_7);
  if (VAR_8 < 0)
   return VAR_8;

  for (VAR_9 = 0; VAR_9 < VAR_4->vsp->num_planes; ++VAR_9) {
   if (VAR_7 == VAR_4->vsp->planes[VAR_9].plane.base.id)
    return VAR_9;
  }
 }

 return -VAR_0;
}
