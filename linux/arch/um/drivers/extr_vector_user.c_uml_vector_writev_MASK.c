
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,struct iovec*,int) ;

int FUNC_2(int VAR_3, void *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_6 = FUNC_1(VAR_3, (struct iovec *) VAR_4, VAR_5));
 if ((VAR_6 < 0) && ((VAR_2 == VAR_0) || (VAR_2 == VAR_1)))
  return 0;
 if (VAR_6 >= 0)
  return VAR_6;
 else
  return -VAR_2;
}
