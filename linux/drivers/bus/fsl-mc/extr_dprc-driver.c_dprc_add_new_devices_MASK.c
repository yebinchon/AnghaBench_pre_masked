
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_obj_desc {int type; } ;
struct fsl_mc_device {int dev; } ;


 int FUNC_0 (struct fsl_mc_device*,struct fsl_mc_obj_desc*) ;
 int FUNC_1 (struct fsl_mc_obj_desc*,int *,int *,struct fsl_mc_device**) ;
 struct fsl_mc_device* FUNC_2 (struct fsl_mc_obj_desc*,struct fsl_mc_device*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct fsl_mc_device *VAR_0,
     struct fsl_mc_obj_desc *VAR_1,
     int VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct fsl_mc_device *VAR_5;
  struct fsl_mc_obj_desc *VAR_6 = &VAR_1[VAR_4];

  if (FUNC_4(VAR_6->type) == 0)
   continue;




  VAR_5 = FUNC_2(VAR_6, VAR_0);
  if (VAR_5) {
   FUNC_0(VAR_5, VAR_6);
   FUNC_3(&VAR_5->dev);
   continue;
  }

  VAR_3 = FUNC_1(VAR_6, ((void*)0), &VAR_0->dev,
       &VAR_5);
  if (VAR_3 < 0)
   continue;
 }
}
