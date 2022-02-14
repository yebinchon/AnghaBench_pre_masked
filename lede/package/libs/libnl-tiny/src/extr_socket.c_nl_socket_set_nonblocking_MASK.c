
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int s_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct nl_sock *VAR_4)
{
 if (VAR_4->s_fd == -1)
  return -VAR_1;

 if (FUNC_0(VAR_4->s_fd, VAR_0, VAR_2) < 0)
  return -FUNC_1(VAR_3);

 return 0;
}
