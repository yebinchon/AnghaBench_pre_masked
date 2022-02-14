
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrfld_extcon_data {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct mrfld_extcon_data*,int ,unsigned int) ;
 int FUNC_2 (struct mrfld_extcon_data*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct mrfld_extcon_data *VAR_2, bool VAR_3)
{
 unsigned int VAR_4 = VAR_1;
 struct device *VAR_5 = VAR_2->dev;
 int VAR_6;

 if (VAR_3)
  VAR_6 = FUNC_2(VAR_2, VAR_0, VAR_4);
 else
  VAR_6 = FUNC_1(VAR_2, VAR_0, VAR_4);
 if (VAR_6)
  FUNC_0(VAR_5, "can't set SW control: %d\n", VAR_6);
 return VAR_6;
}
