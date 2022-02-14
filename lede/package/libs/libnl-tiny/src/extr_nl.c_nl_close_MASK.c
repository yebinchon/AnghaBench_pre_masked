
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int s_fd; scalar_t__ s_proto; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct nl_sock *VAR_0)
{
 if (VAR_0->s_fd >= 0) {
  FUNC_0(VAR_0->s_fd);
  VAR_0->s_fd = -1;
 }

 VAR_0->s_proto = 0;
}
