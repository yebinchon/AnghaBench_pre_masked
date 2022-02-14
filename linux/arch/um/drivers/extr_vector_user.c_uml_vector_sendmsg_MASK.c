
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,struct msghdr*,int) ;

int FUNC_2(int VAR_2, void *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_5 = FUNC_1(VAR_2, (struct msghdr *) VAR_3, VAR_4));
 if ((VAR_5 < 0) && (VAR_1 == VAR_0))
  return 0;
 if (VAR_5 >= 0)
  return VAR_5;
 else
  return -VAR_1;
}
