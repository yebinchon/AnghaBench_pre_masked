
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_obj_desc {int type; } ;
struct fsl_mc_device {int dummy; } ;
struct fsl_mc_child_objs {int child_count; struct fsl_mc_obj_desc* child_array; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct fsl_mc_device*,struct fsl_mc_obj_desc*) ;
 int FUNC_1 (struct fsl_mc_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct fsl_mc_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct fsl_mc_child_objs *VAR_3;
 struct fsl_mc_device *VAR_4;

 VAR_4 = FUNC_3(VAR_0);
 VAR_3 = VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_3->child_count; VAR_2++) {
  struct fsl_mc_obj_desc *VAR_5 = &VAR_3->child_array[VAR_2];

  if (FUNC_2(VAR_5->type) != 0 &&
      FUNC_0(VAR_4, VAR_5))
   break;
 }

 if (VAR_2 == VAR_3->child_count)
  FUNC_1(VAR_4);

 return 0;
}
