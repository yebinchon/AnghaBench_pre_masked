
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int dummy; } ;
struct genlmsghdr {int cmd; int version; } ;
typedef int hdr ;


 int FUNC_0 (struct nl_sock*,int,int,struct genlmsghdr*,int) ;

int FUNC_1(struct nl_sock *VAR_0, int VAR_1, int VAR_2,
       int VAR_3, int VAR_4)
{
 struct genlmsghdr VAR_5 = {
  .cmd = VAR_2,
  .version = VAR_3,
 };

 return FUNC_0(VAR_0, VAR_1, VAR_4, &VAR_5, sizeof(VAR_5));
}
