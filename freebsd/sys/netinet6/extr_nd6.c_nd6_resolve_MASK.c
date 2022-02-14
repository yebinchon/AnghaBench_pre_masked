
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int m_flags; } ;
struct llentry {int r_flags; scalar_t__ r_skip_req; int lle_hittime; int r_hdrlen; int r_linkdata; } ;
struct ifnet {int if_type; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;



 int FUNC_1 (struct llentry*) ;
 int VAR_2 ;
 int FUNC_2 (struct llentry*) ;
 int FUNC_3 (struct llentry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct llentry*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_5 (struct ifnet*) ;
 int FUNC_6 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (struct mbuf*) ;
 struct llentry* FUNC_9 (int *,int ,struct ifnet*) ;
 int FUNC_10 (struct ifnet*,int ,struct mbuf*,struct sockaddr_in6 const*,int *,int*,struct llentry**) ;
 int VAR_9 ;

int
FUNC_11(struct ifnet *VAR_10, int VAR_11, struct mbuf *VAR_12,
    const struct sockaddr *VAR_13, u_char *VAR_14, uint32_t *VAR_15,
    struct llentry **VAR_16)
{
 struct llentry *VAR_17 = ((void*)0);
 const struct sockaddr_in6 *VAR_18;

 FUNC_6();

 if (VAR_15 != ((void*)0))
  *VAR_15 = 0;

 VAR_18 = (const struct sockaddr_in6 *)VAR_13;


 if ((FUNC_5(VAR_10)->flags & VAR_6)) {
  FUNC_8(VAR_12);
  return (VAR_1);
 }

 if (VAR_12 != ((void*)0) && VAR_12->m_flags & VAR_5) {
  switch (VAR_10->if_type) {
  case 129:
  case 128:
  case 130:
   FUNC_0(&VAR_18->sin6_addr,
       VAR_14);
   return (0);
  default:
   FUNC_8(VAR_12);
   return (VAR_0);
  }
 }

 VAR_17 = FUNC_9(&VAR_18->sin6_addr, VAR_16 ? VAR_2 : VAR_3,
     VAR_10);
 if (VAR_17 != ((void*)0) && (VAR_17->r_flags & VAR_8) != 0) {

  FUNC_7(VAR_17->r_linkdata, VAR_14, VAR_17->r_hdrlen);
  if (VAR_15 != ((void*)0))
   *VAR_15 = VAR_4 | (VAR_17->r_flags & VAR_7);

  if (VAR_17->r_skip_req != 0) {
   FUNC_2(VAR_17);
   VAR_17->r_skip_req = 0;
   VAR_17->lle_hittime = VAR_9;
   FUNC_3(VAR_17);
  }
  if (VAR_16) {
   FUNC_1(VAR_17);
   *VAR_16 = VAR_17;
   FUNC_4(VAR_17);
  }
  return (0);
 } else if (VAR_16 && VAR_17)
  FUNC_4(VAR_17);

 return (FUNC_10(VAR_10, 0, VAR_12, VAR_18, VAR_14, VAR_15, VAR_16));
}
