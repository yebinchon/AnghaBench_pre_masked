
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int s_fd; int s_flags; } ;
typedef int state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,int*,int) ;

int FUNC_2(struct nl_sock *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5->s_fd == -1)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5->s_fd, VAR_2, VAR_3,
    &VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0)
  return -FUNC_0(VAR_4);

 if (VAR_6)
  VAR_5->s_flags |= VAR_1;
 else
  VAR_5->s_flags &= ~VAR_1;

 return 0;
}
