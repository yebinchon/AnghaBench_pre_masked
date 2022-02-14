
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct nl_sock {int s_peer; int s_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,size_t,int ,struct sockaddr*,int) ;

int FUNC_2(struct nl_sock *VAR_1, void *VAR_2, size_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->s_fd, VAR_2, VAR_3, 0, (struct sockaddr *)
       &VAR_1->s_peer, sizeof(VAR_1->s_peer));
 if (VAR_4 < 0)
  return -FUNC_0(VAR_0);

 return VAR_4;
}
