
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmsghdr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,struct mmsghdr*,unsigned int,unsigned int) ;

int FUNC_2(
 int VAR_3,
 void *VAR_4,
 unsigned int VAR_5,
 unsigned int VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_7 = FUNC_1(VAR_3, (struct mmsghdr *) VAR_4, VAR_5, VAR_6));
 if ((VAR_7 < 0) && ((VAR_2 == VAR_0) || (VAR_2 == VAR_1)))
  return 0;
 if (VAR_7 >= 0)
  return VAR_7;
 else
  return -VAR_2;
}
