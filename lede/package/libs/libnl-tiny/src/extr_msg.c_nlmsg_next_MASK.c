
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int nlmsg_len; } ;


 int FUNC_0 (int ) ;

struct nlmsghdr *FUNC_1(struct nlmsghdr *VAR_0, int *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->nlmsg_len);

 *VAR_1 -= VAR_2;

 return (struct nlmsghdr *) ((unsigned char *) VAR_0 + VAR_2);
}
