
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fxas21002c_data*,int) ;
 int FUNC_1 (struct fxas21002c_data*,int*) ;
 int FUNC_2 (struct fxas21002c_data*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct fxas21002c_data *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;





 VAR_6 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_6 < 0)
  return -VAR_0;

 if ((VAR_5 == 25 && VAR_4 > 0x01) || (VAR_5 == 12 && VAR_4 > 0))
  return -VAR_0;

 return FUNC_2(VAR_2, VAR_1, VAR_4);
}
