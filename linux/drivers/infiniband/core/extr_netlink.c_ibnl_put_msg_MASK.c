
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;


 int FUNC_0 (int,int) ;
 void* FUNC_1 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*,int ,int,int ,int,int) ;

void *FUNC_3(struct sk_buff *VAR_0, struct nlmsghdr **VAR_1, int VAR_2,
     int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 *VAR_1 = FUNC_2(VAR_0, 0, VAR_2, FUNC_0(VAR_4, VAR_5), VAR_3, VAR_6);
 if (!*VAR_1)
  return ((void*)0);
 return FUNC_1(*VAR_1);
}
