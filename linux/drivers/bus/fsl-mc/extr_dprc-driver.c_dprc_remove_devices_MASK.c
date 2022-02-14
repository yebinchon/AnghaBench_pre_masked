
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_obj_desc {int dummy; } ;
struct fsl_mc_device {int dev; } ;
struct fsl_mc_child_objs {int child_count; struct fsl_mc_obj_desc* child_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct fsl_mc_child_objs*,int ) ;

__attribute__((used)) static void FUNC_1(struct fsl_mc_device *VAR_2,
    struct fsl_mc_obj_desc *VAR_3,
    int VAR_4)
{
 if (VAR_4 != 0) {




  struct fsl_mc_child_objs VAR_5;

  VAR_5.child_count = VAR_4;
  VAR_5.child_array = VAR_3;
  FUNC_0(&VAR_2->dev, &VAR_5,
          VAR_1);
 } else {




  FUNC_0(&VAR_2->dev, ((void*)0),
          VAR_0);
 }
}
