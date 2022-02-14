
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrfld_extcon_data {int edev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct mrfld_extcon_data*) ;

__attribute__((used)) static int FUNC_2(struct mrfld_extcon_data *VAR_3)
{
 unsigned int VAR_4;
 bool VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4 = VAR_6;

 VAR_5 = (VAR_4 == VAR_1) || (VAR_4 == VAR_2);
 FUNC_0(VAR_3->edev, VAR_0, VAR_5);

 return 0;
}
