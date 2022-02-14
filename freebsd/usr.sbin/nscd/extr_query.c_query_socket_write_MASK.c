
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_state {int socket_failed; int sockfd; } ;
typedef int ssize_t ;


 int FUNC_0 (int (*) (struct query_state*,void const*,size_t)) ;
 int FUNC_1 (int (*) (struct query_state*,void const*,size_t)) ;
 int FUNC_2 (int ,void const*,size_t) ;

ssize_t
FUNC_3(struct query_state *VAR_0, const void *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3;

 FUNC_0(FUNC_3);
 if (VAR_0->socket_failed != 0) {
  FUNC_1(FUNC_3);
  return (-1);
 }

 VAR_3 = FUNC_2(VAR_0->sockfd, VAR_1, VAR_2);
 if (VAR_3 < 0 || (size_t)VAR_3 < VAR_2)
  VAR_0->socket_failed = 1;

 FUNC_1(FUNC_3);
 return (VAR_3);
}
