
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct sockaddr {int dummy; } ;
struct mbuf {int m_flags; } ;
struct llentry {int r_flags; int r_hdrlen; int r_linkdata; } ;
struct ifnet {int if_addrlen; int if_broadcastaddr; } ;
struct TYPE_2__ {int sin_addr; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct llentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct llentry*) ;
 int FUNC_3 (struct ifnet*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_5 (struct sockaddr const*) ;
 int FUNC_6 (struct ifnet*,int,int ,struct mbuf*,struct sockaddr const*,int *,int*,struct llentry**) ;
 int FUNC_7 (int ,int *,int ) ;
 struct llentry* FUNC_8 (int ,int ,struct sockaddr const*) ;
 int FUNC_9 (struct llentry*) ;
 int FUNC_10 (int *,int ,int ) ;

int
FUNC_11(struct ifnet *VAR_8, int VAR_9, struct mbuf *VAR_10,
 const struct sockaddr *VAR_11, u_char *VAR_12, uint32_t *VAR_13,
 struct llentry **VAR_14)
{
 struct llentry *VAR_15 = ((void*)0);

 FUNC_4();

 if (VAR_13 != ((void*)0))
  *VAR_13 = 0;
 if (VAR_14 != ((void*)0))
  *VAR_14 = ((void*)0);

 if (VAR_10 != ((void*)0)) {
  if (VAR_10->m_flags & VAR_4) {

   (void)FUNC_10(VAR_12,
       VAR_8->if_broadcastaddr, VAR_8->if_addrlen);
   return (0);
  }
  if (VAR_10->m_flags & VAR_5) {

   FUNC_0(&FUNC_5(VAR_11)->sin_addr, VAR_12);
   return (0);
  }
 }

 VAR_15 = FUNC_8(FUNC_3(VAR_8), VAR_14 ? VAR_1 : VAR_2, VAR_11);
 if (VAR_15 != ((void*)0) && (VAR_15->r_flags & VAR_7) != 0) {

  FUNC_7(VAR_15->r_linkdata, VAR_12, VAR_15->r_hdrlen);
  if (VAR_13 != ((void*)0))
   *VAR_13 = VAR_3 | (VAR_15->r_flags & VAR_6);

  FUNC_9(VAR_15);
  if (VAR_14) {
   FUNC_1(VAR_15);
   *VAR_14 = VAR_15;
   FUNC_2(VAR_15);
  }
  return (0);
 }
 if (VAR_14 && VAR_15)
  FUNC_2(VAR_15);

 return (FUNC_6(VAR_8, VAR_9, VAR_15 == ((void*)0) ? VAR_0 : 0, VAR_10, VAR_11,
     VAR_12, VAR_13, VAR_14));
}
