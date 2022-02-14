
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_dev {int dummy; } ;


 int FUNC_0 (struct rxe_dev*) ;
 int FUNC_1 (struct rxe_dev*,char const*) ;
 int FUNC_2 (struct rxe_dev*,unsigned int) ;

int FUNC_3(struct rxe_dev *VAR_0, unsigned int VAR_1, const char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_0, VAR_1);

 return FUNC_1(VAR_0, VAR_2);
}
