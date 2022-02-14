
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxt_data {scalar_t__ T44_address; int object_table; int bl_completion; scalar_t__ in_bootloader; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mxt_data*) ;
 int FUNC_2 (struct mxt_data*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct mxt_data *VAR_3 = VAR_2;

 if (VAR_3->in_bootloader) {

  FUNC_0(&VAR_3->bl_completion);
  return VAR_0;
 }

 if (!VAR_3->object_table)
  return VAR_0;

 if (VAR_3->T44_address) {
  return FUNC_2(VAR_3);
 } else {
  return FUNC_1(VAR_3);
 }
}
