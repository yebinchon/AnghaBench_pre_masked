
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int src_x; int src_y; int visible; } ;
struct intel_plane_state {TYPE_1__* color_plane; TYPE_2__ base; } ;
struct TYPE_3__ {int offset; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*,struct intel_plane_state*,int ) ;
 int FUNC_2 (int*,int*,struct intel_plane_state*,int ) ;
 int FUNC_3 (struct intel_plane_state*) ;

__attribute__((used)) static int FUNC_4(struct intel_plane_state *VAR_1)
{
 int VAR_2, VAR_3;
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1);
 if (VAR_5)
  return VAR_5;

 if (!VAR_1->base.visible)
  return 0;

 VAR_2 = VAR_1->base.src_x >> 16;
 VAR_3 = VAR_1->base.src_y >> 16;

 FUNC_1(&VAR_2, &VAR_3, VAR_1, 0);
 VAR_4 = FUNC_2(&VAR_2, &VAR_3,
          VAR_1, 0);

 if (VAR_2 != 0 || VAR_3 != 0) {
  FUNC_0("Arbitrary cursor panning not supported\n");
  return -VAR_0;
 }

 VAR_1->color_plane[0].offset = VAR_4;

 return 0;
}
