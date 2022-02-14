
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct ip6ctlparam {struct sockaddr_in6* ip6c_src; void* ip6c_cmdarg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct sockaddr*,int ,struct sockaddr const*,int ,int,void*,struct inpcb* (*) (struct inpcb*,int)) ;
 struct inpcb* FUNC_2 (struct inpcb*,int) ;
 scalar_t__* VAR_4 ;
 struct sockaddr_in6 VAR_5 ;

void
FUNC_3(int VAR_6, struct sockaddr *VAR_7, void *VAR_8)
{
 struct ip6ctlparam *VAR_9 = ((void*)0);
 const struct sockaddr_in6 *VAR_10 = ((void*)0);
 void *VAR_11;
 struct inpcb *(*VAR_12)(struct inpcb *, int) = FUNC_2;

 if (VAR_7->sa_family != VAR_0 ||
     VAR_7->sa_len != sizeof(struct sockaddr_in6))
  return;

 if ((unsigned)VAR_6 >= VAR_2)
  return;
 if (FUNC_0(VAR_6))
  VAR_12 = FUNC_2, VAR_8 = ((void*)0);
 else if (VAR_6 == VAR_1)
  VAR_8 = ((void*)0);
 else if (VAR_4[VAR_6] == 0)
  return;




 if (VAR_8 != ((void*)0)) {
  VAR_9 = (struct ip6ctlparam *)VAR_8;
  VAR_11 = VAR_9->ip6c_cmdarg;
  VAR_10 = VAR_9->ip6c_src;
 } else {
  VAR_11 = ((void*)0);
  VAR_10 = &VAR_5;
 }

 (void) FUNC_1(&VAR_3, VAR_7, 0,
     (const struct sockaddr *)VAR_10, 0, VAR_6, VAR_11, VAR_12);
}
