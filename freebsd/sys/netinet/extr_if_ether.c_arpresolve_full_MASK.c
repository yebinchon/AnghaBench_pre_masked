
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct sockaddr {int dummy; } ;
struct mbuf {struct mbuf* m_nextpkt; } ;
struct llentry {int la_flags; scalar_t__ la_expire; char* ll_addr; char* r_linkdata; int r_hdrlen; scalar_t__ la_asked; scalar_t__ la_numheld; int lle_timer; struct mbuf* la_hold; } ;
struct ifnet {int if_flags; int if_addrlen; } ;
struct TYPE_2__ {int sin_addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int VAR_6 ;
 int FUNC_3 (struct llentry*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct llentry*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct llentry*) ;
 int FUNC_6 (struct llentry*) ;
 int FUNC_7 (struct ifnet*) ;
 int VAR_13 ;
 int FUNC_8 () ;
 TYPE_1__* FUNC_9 (struct sockaddr const*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (struct ifnet*,int *,int *,int *) ;
 int VAR_17 ;
 int FUNC_11 (char*,int *,int) ;
 int FUNC_12 (int *,int,int ,struct llentry*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (int ,char*) ;
 struct llentry* FUNC_15 (int ,int ,struct sockaddr const*) ;
 int FUNC_16 (struct llentry*) ;
 struct llentry* FUNC_17 (int ,int ,struct sockaddr const*) ;
 int FUNC_18 (int ,struct llentry*) ;
 int FUNC_19 (int ,struct llentry*) ;
 int FUNC_20 (int ,char*,int ,int ) ;
 int FUNC_21 (struct mbuf*) ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static int
FUNC_22(struct ifnet *VAR_21, int VAR_22, int VAR_23, struct mbuf *VAR_24,
 const struct sockaddr *VAR_25, u_char *VAR_26, uint32_t *VAR_27,
 struct llentry **VAR_28)
{
 struct llentry *VAR_29 = ((void*)0), *VAR_30;
 struct mbuf *VAR_31 = ((void*)0);
 struct mbuf *VAR_32 = ((void*)0);
 int VAR_33, VAR_34;
 char *VAR_35;
 int VAR_36;

 FUNC_8();

 if (VAR_27 != ((void*)0))
  *VAR_27 = 0;
 if (VAR_28 != ((void*)0))
  *VAR_28 = ((void*)0);

 if ((VAR_23 & VAR_8) == 0)
  VAR_29 = FUNC_15(FUNC_7(VAR_21), VAR_9, VAR_25);
 if (VAR_29 == ((void*)0) && (VAR_21->if_flags & (VAR_4 | VAR_5)) == 0) {
  VAR_29 = FUNC_17(FUNC_7(VAR_21), 0, VAR_25);
  if (VAR_29 == ((void*)0)) {
   char VAR_37[VAR_6];

   FUNC_20(VAR_13,
       "arpresolve: can't allocate llinfo for %s on %s\n",
       FUNC_14(FUNC_9(VAR_25)->sin_addr, VAR_37),
       FUNC_13(VAR_21));
   FUNC_21(VAR_24);
   return (VAR_2);
  }

  FUNC_1(VAR_21);
  FUNC_5(VAR_29);
  VAR_30 = FUNC_15(FUNC_7(VAR_21), VAR_9, VAR_25);

  if (VAR_30 == ((void*)0))
   FUNC_19(FUNC_7(VAR_21), VAR_29);
  FUNC_2(VAR_21);
  if (VAR_30 != ((void*)0)) {
   FUNC_18(FUNC_7(VAR_21), VAR_29);
   VAR_29 = VAR_30;
  }
 }
 if (VAR_29 == ((void*)0)) {
  FUNC_21(VAR_24);
  return (VAR_2);
 }

 if ((VAR_29->la_flags & VAR_12) &&
     ((VAR_29->la_flags & VAR_11) || VAR_29->la_expire > VAR_20)) {
  if (VAR_23 & VAR_7) {
   VAR_35 = VAR_29->ll_addr;
   VAR_36 = VAR_21->if_addrlen;
  } else {
   VAR_35 = VAR_29->r_linkdata;
   VAR_36 = VAR_29->r_hdrlen;
  }
  FUNC_11(VAR_35, VAR_26, VAR_36);


  FUNC_16(VAR_29);
  if (VAR_27 != ((void*)0))
   *VAR_27 = VAR_29->la_flags & (VAR_12|VAR_10);
  if (VAR_28) {
   FUNC_3(VAR_29);
   *VAR_28 = VAR_29;
  }
  FUNC_6(VAR_29);
  return (0);
 }

 VAR_34 = (VAR_29->la_asked == 0 || VAR_29->la_expire != VAR_20);






 if (VAR_24 != ((void*)0)) {
  if (VAR_29->la_numheld >= VAR_14) {
   if (VAR_29->la_hold != ((void*)0)) {
    VAR_32 = VAR_29->la_hold->m_nextpkt;
    FUNC_21(VAR_29->la_hold);
    VAR_29->la_hold = VAR_32;
    VAR_29->la_numheld--;
    FUNC_0(VAR_18);
   }
  }
  if (VAR_29->la_hold != ((void*)0)) {
   VAR_31 = VAR_29->la_hold;
   while (VAR_31->m_nextpkt != ((void*)0))
    VAR_31 = VAR_31->m_nextpkt;
   VAR_31->m_nextpkt = VAR_24;
  } else
   VAR_29->la_hold = VAR_24;
  VAR_29->la_numheld++;
 }






 if (VAR_29->la_asked < VAR_15)
  VAR_33 = VAR_3;
 else
  VAR_33 = VAR_22 != 0 ? VAR_1 : VAR_0;

 if (VAR_34) {
  int VAR_38, VAR_39;

  FUNC_3(VAR_29);
  VAR_29->la_expire = VAR_20;
  VAR_38 = FUNC_12(&VAR_29->lle_timer, VAR_19 * VAR_16,
      VAR_17, VAR_29);
  if (VAR_38)
   FUNC_4(VAR_29);
  VAR_29->la_asked++;
  FUNC_6(VAR_29);
  VAR_39 = FUNC_10(VAR_21, ((void*)0), &FUNC_9(VAR_25)->sin_addr, ((void*)0));




  if (VAR_39 != 0)
   return (VAR_39);
  return (VAR_33);
 }

 FUNC_6(VAR_29);
 return (VAR_33);
}
