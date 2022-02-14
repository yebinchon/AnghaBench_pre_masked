
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int s_fd; } ;
typedef int state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,int*,int) ;

int FUNC_2(struct nl_sock *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_4->s_fd == -1)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_4->s_fd, VAR_2, VAR_0,
    &VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0)
  return -FUNC_0(VAR_3);

 return 0;
}
