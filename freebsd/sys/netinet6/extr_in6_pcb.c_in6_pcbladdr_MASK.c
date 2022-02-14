
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {scalar_t__ sin6_family; scalar_t__ sin6_port; scalar_t__ sin6_scope_id; int sin6_addr; } ;
struct sockaddr {int sa_len; } ;
struct inpcb {int inp_cred; int in6p_outputopts; int inp_pcbinfo; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inpcb*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct sockaddr_in6*,int ,struct inpcb*,int ,int,struct in6_addr*,int *) ;
 int VAR_6 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct sockaddr_in6*,int ) ;

__attribute__((used)) static int
FUNC_7(struct inpcb *VAR_7, struct sockaddr *VAR_8,
    struct in6_addr *VAR_9)
{
 struct sockaddr_in6 *VAR_10 = (struct sockaddr_in6 *)VAR_8;
 int VAR_11 = 0;
 int VAR_12 = 0;
 struct in6_addr VAR_13;

 FUNC_3(VAR_7);
 FUNC_2(VAR_7->inp_pcbinfo);

 if (VAR_8->sa_len != sizeof (*VAR_10))
  return (VAR_3);
 if (VAR_10->sin6_family != VAR_0)
  return (VAR_2);
 if (VAR_10->sin6_port == 0)
  return (VAR_1);

 if (VAR_10->sin6_scope_id == 0 && !VAR_5)
  VAR_12 = 1;
 if ((VAR_11 = FUNC_6(VAR_10, VAR_5)) != 0)
  return(VAR_11);

 if (!FUNC_0(&VAR_4)) {




  if (FUNC_1(&VAR_10->sin6_addr))
   VAR_10->sin6_addr = VAR_6;
 }
 if ((VAR_11 = FUNC_5(VAR_7->inp_cred, &VAR_10->sin6_addr)) != 0)
  return (VAR_11);

 VAR_11 = FUNC_4(VAR_10, VAR_7->in6p_outputopts,
     VAR_7, VAR_7->inp_cred, VAR_12, &VAR_13, ((void*)0));
 if (VAR_11)
  return (VAR_11);
 *VAR_9 = VAR_13;







 return (0);
}
