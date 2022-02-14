
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mif6ctl {scalar_t__ mif6c_mifi; scalar_t__ mif6c_pifi; int mif6c_flags; } ;
struct mif6 {int m6_flags; scalar_t__ m6_bytes_out; scalar_t__ m6_bytes_in; scalar_t__ m6_pkt_out; scalar_t__ m6_pkt_in; struct ifnet* m6_ifp; } ;
struct ifnet {int if_flags; scalar_t__ if_index; } ;
typedef scalar_t__ mifi_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_9 ;
 int FUNC_2 (int ,char*,scalar_t__,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct ifnet*,int) ;
 struct ifnet* FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*,char*,int ) ;
 int FUNC_7 (struct ifnet*) ;
 struct ifnet* FUNC_8 (scalar_t__) ;
 struct mif6* VAR_11 ;
 struct ifnet* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static int
FUNC_9(struct mif6ctl *VAR_15)
{
 struct mif6 *VAR_16;
 struct ifnet *VAR_17;
 int VAR_18;

 FUNC_0();

 if (VAR_15->mif6c_mifi >= VAR_8) {
  FUNC_1();
  return (VAR_2);
 }
 VAR_16 = VAR_11 + VAR_15->mif6c_mifi;
 if (VAR_16->m6_ifp != ((void*)0)) {
  FUNC_1();
  return (VAR_1);
 }
 if (VAR_15->mif6c_pifi == 0 || VAR_15->mif6c_pifi > VAR_10) {
  FUNC_1();
  return (VAR_3);
 }

 VAR_17 = FUNC_8(VAR_15->mif6c_pifi);

 if (VAR_15->mif6c_flags & VAR_9) {
  if (VAR_14 == (mifi_t)-1) {
   VAR_17 = FUNC_4(VAR_7);

   FUNC_6(VAR_17, "register_mif", 0);
   VAR_17->if_flags |= VAR_5;
   FUNC_5(VAR_17);
   VAR_12 = VAR_17;
   VAR_14 = VAR_15->mif6c_mifi;





   VAR_15->mif6c_pifi = VAR_17->if_index;
  } else {
   VAR_17 = VAR_12;
  }
 } else {

  if ((VAR_17->if_flags & VAR_6) == 0) {
   FUNC_1();
   return (VAR_4);
  }

  VAR_18 = FUNC_3(VAR_17, 1);
  if (VAR_18) {
   FUNC_1();
   return (VAR_18);
  }
 }

 VAR_16->m6_flags = VAR_15->mif6c_flags;
 VAR_16->m6_ifp = VAR_17;


 VAR_16->m6_pkt_in = 0;
 VAR_16->m6_pkt_out = 0;
 VAR_16->m6_bytes_in = 0;
 VAR_16->m6_bytes_out = 0;


 if (VAR_13 <= VAR_15->mif6c_mifi)
  VAR_13 = VAR_15->mif6c_mifi + 1;

 FUNC_1();
 FUNC_2(VAR_0, "mif #%d, phyint %s", VAR_15->mif6c_mifi,
     FUNC_7(VAR_17));

 return (0);
}
