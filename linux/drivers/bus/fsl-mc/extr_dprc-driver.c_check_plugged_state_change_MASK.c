
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsl_mc_obj_desc {int state; } ;
struct TYPE_2__ {int state; } ;
struct fsl_mc_device {int dev; TYPE_1__ obj_desc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fsl_mc_device *VAR_1,
           struct fsl_mc_obj_desc *VAR_2)
{
 int VAR_3;
 u32 VAR_4 =
   VAR_2->state & VAR_0;

 if (VAR_4 !=
     (VAR_1->obj_desc.state & VAR_0)) {
  if (VAR_4) {
   VAR_1->obj_desc.state |= VAR_0;
   VAR_3 = FUNC_1(&VAR_1->dev);
   if (VAR_3 < 0) {
    FUNC_0(&VAR_1->dev,
     "device_attach() failed: %d\n",
     VAR_3);
   }
  } else {
   VAR_1->obj_desc.state &= ~VAR_0;
   FUNC_2(&VAR_1->dev);
  }
 }
}
