
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rman {int dummy; } ;
struct resource_list_entry {scalar_t__ start; scalar_t__ end; int count; } ;
struct resource {int dummy; } ;
struct ps3bus_softc {struct rman sc_intr_rman; struct rman sc_mem_rman; } ;
struct ps3bus_devinfo {int resources; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int ,int,int,struct resource*) ;
 struct ps3bus_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ps3bus_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,...) ;
 struct resource_list_entry* FUNC_5 (int *,int const,int) ;
 int FUNC_6 (struct resource*) ;
 struct resource* FUNC_7 (struct rman*,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_8 (struct resource*,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;

__attribute__((used)) static struct resource *
FUNC_10(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{
 struct ps3bus_devinfo *VAR_9;
 struct ps3bus_softc *VAR_10;
 int VAR_11;
        struct resource *VAR_12;
        struct rman *VAR_13;
        rman_res_t VAR_14, VAR_15, VAR_16;
        struct resource_list_entry *VAR_17;

 VAR_10 = FUNC_3(VAR_1);
 VAR_9 = FUNC_1(VAR_2);
 VAR_11 = VAR_8 & VAR_0;
 VAR_8 &= ~VAR_0;

 switch (VAR_3) {
 case 128:
  VAR_17 = FUNC_5(&VAR_9->resources, 128,
      *VAR_4);
  if (VAR_17 == ((void*)0)) {
   FUNC_4(VAR_1, "no rle for %s memory %d\n",
          FUNC_2(VAR_2), *VAR_4);
   return (((void*)0));
  }

  if (VAR_5 < VAR_17->start)
   VAR_14 = VAR_17->start;
  else if (VAR_5 > VAR_17->end)
   VAR_14 = VAR_17->end;
  else
   VAR_14 = VAR_5;

  if (VAR_6 < VAR_17->start)
   VAR_15 = VAR_17->start;
  else if (VAR_6 > VAR_17->end)
   VAR_15 = VAR_17->end;
  else
   VAR_15 = VAR_6;

  VAR_16 = VAR_15 - VAR_14;

  VAR_13 = &VAR_10->sc_mem_rman;
  break;
 case 129:
  VAR_17 = FUNC_5(&VAR_9->resources, 129,
      *VAR_4);
  VAR_13 = &VAR_10->sc_intr_rman;
  VAR_14 = VAR_17->start;
  VAR_16 = FUNC_9(VAR_7, VAR_17->count);
  VAR_15 = FUNC_9(VAR_17->end, VAR_17->start + VAR_16 - 1);
  break;
 default:
  FUNC_4(VAR_1, "unknown resource request from %s\n",
         FUNC_2(VAR_2));
  return (((void*)0));
        }

 VAR_12 = FUNC_7(VAR_13, VAR_14, VAR_15, VAR_16, VAR_8,
     VAR_2);
 if (VAR_12 == ((void*)0)) {
  FUNC_4(VAR_1,
   "failed to reserve resource %#lx - %#lx (%#lx)"
   " for %s\n", VAR_14, VAR_15, VAR_16,
   FUNC_2(VAR_2));
  return (((void*)0));
 }

 FUNC_8(VAR_12, *VAR_4);

 if (VAR_11) {
  if (FUNC_0(VAR_2, VAR_3, *VAR_4, VAR_12) != 0) {
   FUNC_4(VAR_1,
    "failed to activate resource for %s\n",
    FUNC_2(VAR_2));
    FUNC_6(VAR_12);
   return (((void*)0));
  }
 }

 return (VAR_12);
}
