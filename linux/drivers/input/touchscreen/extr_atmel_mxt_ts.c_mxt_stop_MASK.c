
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxt_data {int suspend_mode; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mxt_data*,int ) ;
 int FUNC_1 (struct mxt_data*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mxt_data *VAR_3)
{
 switch (VAR_3->suspend_mode) {
 case 128:

  FUNC_1(VAR_3,
    VAR_2, VAR_1, 0);
  break;

 case 129:
 default:
  FUNC_0(VAR_3, VAR_0);
  break;
 }
}
