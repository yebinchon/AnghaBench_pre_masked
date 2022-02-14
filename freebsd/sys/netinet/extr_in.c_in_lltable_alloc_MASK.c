
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct lltable {struct ifnet* llt_ifp; } ;
struct llentry {int la_flags; int r_flags; int lle_epoch_ctx; } ;
struct ifnet {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_7 ;
 struct llentry* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct ifnet*,int,struct sockaddr const*) ;
 scalar_t__ FUNC_5 (struct ifnet*,scalar_t__,int ,char*,size_t*,int*) ;
 int FUNC_6 (struct ifnet*,struct llentry*,char*,size_t,int) ;
 int FUNC_7 (int ,char*) ;
 int VAR_8 ;

__attribute__((used)) static struct llentry *
FUNC_8(struct lltable *VAR_9, u_int VAR_10, const struct sockaddr *VAR_11)
{
 const struct sockaddr_in *VAR_12 = (const struct sockaddr_in *)VAR_11;
 struct ifnet *VAR_13 = VAR_9->llt_ifp;
 struct llentry *VAR_14;
 char VAR_15[VAR_2];
 size_t VAR_16;
 int VAR_17;

 FUNC_1(VAR_11->sa_family == VAR_0,
     ("sin_family %d", VAR_11->sa_family));






 if (!(VAR_10 & VAR_1) &&
     FUNC_4(VAR_13, VAR_10, VAR_11) != 0)
  return (((void*)0));

 VAR_14 = FUNC_3(VAR_12->sin_addr, VAR_10);
 if (VAR_14 == ((void*)0)) {
  FUNC_7(VAR_4, "lla_lookup: new lle malloc failed\n");
  return (((void*)0));
 }
 VAR_14->la_flags = VAR_10;
 if (VAR_10 & VAR_3)
  VAR_14->r_flags |= VAR_6;
 if ((VAR_10 & VAR_1) == VAR_1) {
  VAR_16 = VAR_2;
  if (FUNC_5(VAR_13, VAR_0, FUNC_0(VAR_13),
      VAR_15, &VAR_16, &VAR_17) != 0) {
   FUNC_2(VAR_8, &VAR_14->lle_epoch_ctx, VAR_7);
   return (((void*)0));
  }
  FUNC_6(VAR_13, VAR_14, VAR_15, VAR_16,
      VAR_17);
  VAR_14->la_flags |= VAR_3;
  VAR_14->r_flags |= (VAR_6 | VAR_5);
 }

 return (VAR_14);
}
