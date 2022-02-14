
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,int,void*) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;

int FUNC_2(struct sk_buff *VAR_1, struct nlmsghdr *VAR_2,
    int VAR_3, void *VAR_4, int VAR_5)
{
 if (FUNC_0(VAR_1, VAR_5, VAR_3, VAR_4)) {
  FUNC_1(VAR_1, VAR_2);
  return -VAR_0;
 }
 return 0;
}
