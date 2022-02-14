
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct ucred {int dummy; } ;
struct socket {int so_type; TYPE_2__* so_proto; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct label {int dummy; } ;
struct inpcb {int inp_flags; } ;
struct TYPE_4__ {TYPE_1__* pr_domain; } ;
struct TYPE_3__ {int dom_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct ucred*,int,int,scalar_t__) ;
 struct inpcb* FUNC_2 (struct socket*) ;

__attribute__((used)) static int
FUNC_3(struct ucred *VAR_10, struct socket *VAR_11,
    struct label *VAR_12, struct sockaddr *VAR_13)
{
 struct sockaddr_in *VAR_14;
 struct inpcb *VAR_15;
 int VAR_16, VAR_17;
 u_int16_t VAR_18;


 if (VAR_9 == 0)
  return (0);


 if (VAR_11->so_proto->pr_domain->dom_family != VAR_4 &&
     VAR_11->so_proto->pr_domain->dom_family != VAR_5)
  return (0);


 if (VAR_11->so_type != VAR_6 &&
     VAR_11->so_type != VAR_7)
  return (0);


 if (VAR_13->sa_family != VAR_0 && VAR_13->sa_family != VAR_1)
  return (VAR_2);

 VAR_16 = VAR_11->so_proto->pr_domain->dom_family;
 VAR_17 = VAR_11->so_type;
 VAR_14 = (struct sockaddr_in *) VAR_13;
 VAR_18 = FUNC_0(VAR_14->sin_port);
 if (VAR_8 && VAR_18 == 0) {
  VAR_15 = FUNC_2(VAR_11);
  if ((VAR_15->inp_flags & VAR_3) == 0)
   return (0);
 }

 return (FUNC_1(VAR_10, VAR_16, VAR_17, VAR_18));
}
