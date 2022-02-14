
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_long ;
typedef int u_int ;
struct rman {int dummy; } ;
struct resource_list_entry {void* start; void* end; } ;
struct resource {int dummy; } ;
struct macio_softc {struct rman sc_mem_rman; } ;
struct macio_devinfo {int mdi_ninterrupts; int mdi_resources; void** mdi_interrupts; } ;
typedef void* rman_res_t ;
typedef int device_t ;


 struct resource* FUNC_0 (int ,int ,int,int*,void*,void*,void*,int) ;
 int VAR_0 ;



 scalar_t__ FUNC_1 (int ,int,int,struct resource*) ;
 struct macio_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct macio_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,void*,...) ;
 int FUNC_7 (int *,int const,int,void*,void*,int) ;
 struct resource* FUNC_8 (int *,int ,int ,int,int*,void*,void*,void*,int) ;
 struct resource_list_entry* FUNC_9 (int *,int const,int) ;
 int FUNC_10 (struct resource*) ;
 struct resource* FUNC_11 (struct rman*,void*,void*,void*,int,int ) ;
 int FUNC_12 (struct resource*,int) ;

__attribute__((used)) static struct resource *
FUNC_13(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
       rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7,
       u_int VAR_8)
{
 struct macio_softc *VAR_9;
 int VAR_10;
 struct resource *VAR_11;
 struct rman *VAR_12;
 u_long VAR_13, VAR_14, VAR_15;
 struct macio_devinfo *VAR_16;
 struct resource_list_entry *VAR_17;

 VAR_9 = FUNC_5(VAR_1);
 VAR_16 = FUNC_2(VAR_2);

 VAR_10 = VAR_8 & VAR_0;
 VAR_8 &= ~VAR_0;

 switch (VAR_3) {
 case 128:
 case 130:
  VAR_17 = FUNC_9(&VAR_16->mdi_resources, 128,
      *VAR_4);
  if (VAR_17 == ((void*)0)) {
   FUNC_6(VAR_1, "no rle for %s memory %d\n",
       FUNC_3(VAR_2), *VAR_4);
   return (((void*)0));
  }

  if (VAR_5 < VAR_17->start)
   VAR_13 = VAR_17->start;
  else if (VAR_5 > VAR_17->end)
   VAR_13 = VAR_17->end;
  else
   VAR_13 = VAR_5;

  if (VAR_6 < VAR_17->start)
   VAR_14 = VAR_17->start;
  else if (VAR_6 > VAR_17->end)
   VAR_14 = VAR_17->end;
  else
   VAR_14 = VAR_6;

  VAR_15 = VAR_14 - VAR_13;

  VAR_12 = &VAR_9->sc_mem_rman;
  break;

 case 129:

  if (FUNC_4(VAR_2) != VAR_1)
   return FUNC_0(FUNC_4(VAR_1), VAR_2,
       VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

  VAR_17 = FUNC_9(&VAR_16->mdi_resources, 129,
      *VAR_4);
  if (VAR_17 == ((void*)0)) {
   if (VAR_16->mdi_ninterrupts >= 6) {
    FUNC_6(VAR_1,
        "%s has more than 6 interrupts\n",
        FUNC_3(VAR_2));
    return (((void*)0));
   }
   FUNC_7(&VAR_16->mdi_resources, 129,
       VAR_16->mdi_ninterrupts, VAR_5, VAR_5, 1);

   VAR_16->mdi_interrupts[VAR_16->mdi_ninterrupts] = VAR_5;
   VAR_16->mdi_ninterrupts++;
  }

  return (FUNC_8(&VAR_16->mdi_resources, VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));

 default:
  FUNC_6(VAR_1, "unknown resource request from %s\n",
         FUNC_3(VAR_2));
  return (((void*)0));
 }

 VAR_11 = FUNC_11(VAR_12, VAR_13, VAR_14, VAR_15, VAR_8,
     VAR_2);
 if (VAR_11 == ((void*)0)) {
  FUNC_6(VAR_1,
      "failed to reserve resource %#lx - %#lx (%#lx) for %s\n",
      VAR_13, VAR_14, VAR_15, FUNC_3(VAR_2));
  return (((void*)0));
 }

 FUNC_12(VAR_11, *VAR_4);

 if (VAR_10) {
  if (FUNC_1(VAR_2, VAR_3, *VAR_4, VAR_11) != 0) {
                        FUNC_6(VAR_1,
          "failed to activate resource for %s\n",
          FUNC_3(VAR_2));
   FUNC_10(VAR_11);
   return (((void*)0));
                }
        }

 return (VAR_11);
}
