
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct isa_regs {scalar_t__ size; } ;
struct ebus_softc {int sc_flags; int sc_ign; int sc_iinfo; } ;
struct TYPE_2__ {int obd_name; } ;
struct ebus_devinfo {int edi_rl; TYPE_1__ edi_obdinfo; } ;
typedef int rintr ;
typedef int reg ;
typedef int phandle_t ;
typedef struct isa_regs ofw_isa_intr_t ;
typedef int intr ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct isa_regs*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int,void**) ;
 int FUNC_3 (struct isa_regs*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (struct ebus_devinfo*) ;
 int FUNC_6 (struct ebus_devinfo*,int ) ;
 struct ebus_devinfo* FUNC_7 (int,int ,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ,int *,struct isa_regs*,int,struct isa_regs*,int,scalar_t__*,int,int *) ;
 scalar_t__ FUNC_10 (int ,int ,int *,struct isa_regs) ;
 int FUNC_11 (int *,int ,int,scalar_t__,scalar_t__,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct ebus_devinfo *
FUNC_13(device_t VAR_7, struct ebus_softc *VAR_8, phandle_t VAR_9)
{
 struct isa_regs VAR_10, *VAR_11;
 ofw_isa_intr_t VAR_12, *VAR_13;
 struct ebus_devinfo *VAR_14;
 uint64_t VAR_15;
 uint32_t VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_14 = FUNC_7(sizeof(*VAR_14), VAR_1, VAR_3 | VAR_2);
 if (FUNC_8(&VAR_14->edi_obdinfo, VAR_9) != 0) {
  FUNC_6(VAR_14, VAR_1);
  return (((void*)0));
 }
 FUNC_12(&VAR_14->edi_rl);
 VAR_19 = FUNC_2(VAR_9, "reg", sizeof(*VAR_11), (void **)&VAR_11);
 if (VAR_19 == -1) {
  FUNC_4(VAR_7, "<%s>: incomplete\n",
      VAR_14->edi_obdinfo.obd_name);
  FUNC_5(VAR_14);
  return (((void*)0));
 }
 for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {
  VAR_15 = FUNC_1(VAR_11 + VAR_17);
  (void)FUNC_11(&VAR_14->edi_rl, VAR_6, VAR_17,
      VAR_15, VAR_15 + VAR_11[VAR_17].size - 1, VAR_11[VAR_17].size);
 }
 FUNC_3(VAR_11);

 VAR_18 = FUNC_2(VAR_9, "interrupts", sizeof(*VAR_13),
     (void **)&VAR_13);
 if (VAR_18 == -1)
  return (VAR_14);
 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
  VAR_20 = 0;
  if ((VAR_8->sc_flags & VAR_0) != 0) {
   VAR_16 = FUNC_10(VAR_7, VAR_9, &VAR_8->sc_iinfo,
       VAR_13[VAR_17]);
  } else {
   VAR_12 = VAR_13[VAR_17];
   VAR_20 = FUNC_9(VAR_9, &VAR_8->sc_iinfo, &VAR_10,
       sizeof(VAR_10), &VAR_12, sizeof(VAR_12), &VAR_16,
       sizeof(VAR_16), ((void*)0));

   if (VAR_20 != 0)
    VAR_16 = FUNC_0(VAR_8->sc_ign, VAR_16);

  }
  if ((VAR_8->sc_flags & VAR_0) == 0 ? VAR_20 == 0 :
      VAR_16 == VAR_4) {
   FUNC_4(VAR_7,
       "<%s>: could not map EBus interrupt %d\n",
       VAR_14->edi_obdinfo.obd_name, VAR_13[VAR_17]);
   continue;
  }
  (void)FUNC_11(&VAR_14->edi_rl, VAR_5, VAR_17, VAR_16,
      VAR_16, 1);
 }
 FUNC_3(VAR_13);
 return (VAR_14);
}
