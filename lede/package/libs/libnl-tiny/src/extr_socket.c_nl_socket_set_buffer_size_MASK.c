
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int txbuf ;
struct nl_sock {int s_fd; int s_flags; } ;
typedef int rxbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,int*,int) ;

int FUNC_2(struct nl_sock *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;

 if (VAR_7 <= 0)
  VAR_7 = 32768;

 if (VAR_8 <= 0)
  VAR_8 = 32768;

 if (VAR_6->s_fd == -1)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_6->s_fd, VAR_2, VAR_4,
    &VAR_8, sizeof(VAR_8));
 if (VAR_9 < 0)
  return -FUNC_0(VAR_5);

 VAR_9 = FUNC_1(VAR_6->s_fd, VAR_2, VAR_3,
    &VAR_7, sizeof(VAR_7));
 if (VAR_9 < 0)
  return -FUNC_0(VAR_5);

 VAR_6->s_flags |= VAR_1;

 return 0;
}
