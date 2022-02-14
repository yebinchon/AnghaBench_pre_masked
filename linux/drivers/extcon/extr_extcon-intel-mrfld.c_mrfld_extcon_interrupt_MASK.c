
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrfld_extcon_data {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mrfld_extcon_data*) ;
 int FUNC_1 (struct mrfld_extcon_data*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct mrfld_extcon_data *VAR_6 = VAR_5;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6);

 FUNC_1(VAR_6, VAR_1, VAR_0);

 return VAR_7 ? VAR_3: VAR_2;
}
