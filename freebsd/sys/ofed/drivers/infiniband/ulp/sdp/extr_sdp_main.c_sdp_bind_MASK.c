
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct socket {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_len; } ;
struct sdp_sock {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sdp_sock*,struct sockaddr*,int ) ;
 struct sdp_sock* FUNC_5 (struct socket*) ;

__attribute__((used)) static int
FUNC_6(struct socket *VAR_5, struct sockaddr *VAR_6, struct thread *VAR_7)
{
 int VAR_8 = 0;
 struct sdp_sock *VAR_9;
 struct sockaddr_in *VAR_10;

 VAR_10 = (struct sockaddr_in *)VAR_6;
 if (VAR_6->sa_len != sizeof (*VAR_10))
  return (VAR_2);
 if (VAR_10->sin_family != VAR_0)
  return (VAR_2);
 if (FUNC_0(FUNC_3(VAR_10->sin_addr.s_addr)))
  return (VAR_1);

 VAR_9 = FUNC_5(VAR_5);
 FUNC_1(VAR_9);
 if (VAR_9->flags & (VAR_4 | VAR_3)) {
  VAR_8 = VAR_2;
  goto out;
 }
 VAR_8 = FUNC_4(VAR_9, VAR_6, VAR_7->td_ucred);
out:
 FUNC_2(VAR_9);

 return (VAR_8);
}
