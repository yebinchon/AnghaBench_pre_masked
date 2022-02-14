
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_file {scalar_t__ bin_bo_used; } ;
struct vc4_dev {int v3d; } ;


 int VAR_0 ;
 int FUNC_0 (struct vc4_dev*,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct vc4_dev *VAR_1, struct vc4_file *VAR_2)
{
 int VAR_3;

 if (!VAR_1->v3d)
  return -VAR_0;

 if (VAR_2->bin_bo_used)
  return 0;

 VAR_3 = FUNC_0(VAR_1, &VAR_2->bin_bo_used);
 if (VAR_3)
  return VAR_3;

 return 0;
}
