
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxt_data {int suspend_mode; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mxt_data*,int ) ;
 int FUNC_1 (struct mxt_data*) ;
 int FUNC_2 (struct mxt_data*,int ,int,int) ;
 int FUNC_3 (struct mxt_data*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct mxt_data *VAR_4)
{
 switch (VAR_4->suspend_mode) {
 case 128:
  FUNC_1(VAR_4);



  FUNC_3(VAR_4,
    VAR_3, VAR_2, 0x83);
  break;

 case 129:
 default:
  FUNC_0(VAR_4, VAR_1);


  FUNC_2(VAR_4, VAR_0, 1, 0);
  break;
 }
}
