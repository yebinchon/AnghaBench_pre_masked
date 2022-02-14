
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {TYPE_2__** crtcs; } ;
struct radeon_device {unsigned int num_crtc; TYPE_3__ mode_info; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_4__ {int hwmode; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct drm_device*,unsigned int,int ,int*,int*,int *,int *,int *) ;
 scalar_t__ FUNC_3 (struct radeon_device*,unsigned int) ;

u32 FUNC_4(struct drm_device *VAR_4, unsigned int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u32 VAR_9;
 struct radeon_device *VAR_10 = VAR_4->dev_private;

 if (VAR_5 >= VAR_10->num_crtc) {
  FUNC_1("Invalid crtc %u\n", VAR_5);
  return -VAR_2;
 }
 if (VAR_10->mode_info.crtcs[VAR_5]) {



  do {
   VAR_9 = FUNC_3(VAR_10, VAR_5);




   VAR_8 = FUNC_2(
    VAR_4, VAR_5, VAR_3,
    &VAR_6, &VAR_7, ((void*)0), ((void*)0),
    &VAR_10->mode_info.crtcs[VAR_5]->base.hwmode);
  } while (VAR_9 != FUNC_3(VAR_10, VAR_5));

  if (((VAR_8 & (VAR_1 | VAR_0)) !=
      (VAR_1 | VAR_0))) {
   FUNC_0("Query failed! stat %d\n", VAR_8);
  }
  else {
   FUNC_0("crtc %u: dist from vblank start %d\n",
          VAR_5, VAR_6);





   if (VAR_6 >= 0)
    VAR_9++;
  }
 }
 else {

     VAR_9 = FUNC_3(VAR_10, VAR_5);
     FUNC_0("NULL mode info! Returned count may be wrong.\n");
 }

 return VAR_9;
}
