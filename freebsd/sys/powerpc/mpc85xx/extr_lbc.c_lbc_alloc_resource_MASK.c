
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource_list_entry {scalar_t__ count; scalar_t__ start; } ;
struct resource {int dummy; } ;
struct lbc_softc {struct rman sc_rman; } ;
struct lbc_devinfo {int di_bank; int di_res; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int,int,struct resource*) ;
 struct resource* FUNC_2 (int ,int,int*,scalar_t__,scalar_t__,scalar_t__,int) ;
 struct lbc_devinfo* FUNC_3 (int ) ;
 struct lbc_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 struct resource_list_entry* FUNC_6 (int *,int,int) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (struct resource*) ;
 struct resource* FUNC_9 (struct rman*,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_10 (struct resource*,int ) ;
 int FUNC_11 (struct resource*,int *) ;
 int FUNC_12 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_13(device_t VAR_5, device_t VAR_6, int VAR_7, int *VAR_8,
    rman_res_t VAR_9, rman_res_t VAR_10, rman_res_t VAR_11, u_int VAR_12)
{
 struct lbc_softc *VAR_13;
 struct lbc_devinfo *VAR_14;
 struct resource_list_entry *VAR_15;
 struct resource *VAR_16;
 struct rman *VAR_17;
 int VAR_18;


 if (!FUNC_0(VAR_9, VAR_10))
  return (((void*)0));

 VAR_13 = FUNC_4(VAR_5);
 if (VAR_7 == VAR_2)
  return (FUNC_2(VAR_5, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
      VAR_12));





 if ((VAR_14 = FUNC_3(VAR_6)) == ((void*)0))
  return (((void*)0));

 if (VAR_7 == VAR_1)
  VAR_7 = VAR_3;

 VAR_8 = &VAR_14->di_bank;

 VAR_15 = FUNC_6(&VAR_14->di_res, VAR_7, *VAR_8);
 if (VAR_15 == ((void*)0)) {
  FUNC_5(VAR_5, "no default resources for "
      "rid = %d, type = %d\n", *VAR_8, VAR_7);
  return (((void*)0));
 }
 VAR_9 = VAR_15->start;
 VAR_11 = VAR_15->count;
 VAR_10 = VAR_9 + VAR_11 - 1;

 VAR_13 = FUNC_4(VAR_5);

 VAR_18 = VAR_12 & VAR_0;
 VAR_12 &= ~VAR_0;

 VAR_17 = &VAR_13->sc_rman;

 VAR_16 = FUNC_9(VAR_17, VAR_9, VAR_10, VAR_11, VAR_12, VAR_6);
 if (VAR_16 == ((void*)0)) {
  FUNC_5(VAR_5, "failed to reserve resource %#jx - %#jx "
      "(%#jx)\n", VAR_9, VAR_10, VAR_11);
  return (((void*)0));
 }

 FUNC_12(VAR_16, *VAR_8);
 FUNC_11(VAR_16, &VAR_4);
 FUNC_10(VAR_16, FUNC_7(VAR_16));

 if (VAR_18)
  if (FUNC_1(VAR_6, VAR_7, *VAR_8, VAR_16)) {
   FUNC_5(VAR_6, "resource activation failed\n");
   FUNC_8(VAR_16);
   return (((void*)0));
  }

 return (VAR_16);
}
