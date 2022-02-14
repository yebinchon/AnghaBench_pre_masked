
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmsghdr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,struct mmsghdr*,unsigned int,unsigned int,int ) ;

int FUNC_2(
 int VAR_2,
 void *VAR_3,
 unsigned int VAR_4,
 unsigned int VAR_5)
{
 int VAR_6;

 FUNC_0(
  VAR_6 = FUNC_1(VAR_2, (struct mmsghdr *) VAR_3, VAR_4, VAR_5, 0));
 if ((VAR_6 < 0) && (VAR_1 == VAR_0))
  return 0;
 if (VAR_6 >= 0)
  return VAR_6;
 else
  return -VAR_1;
}
