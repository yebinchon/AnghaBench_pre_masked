
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct isa_ranges {scalar_t__ size; } ;
struct ebus_softc {int sc_nrange; scalar_t__ sc_range; struct ebus_rinfo* sc_rinfo; int sc_flags; } ;
struct TYPE_3__ {char* rm_descr; int rm_type; } ;
struct ebus_rinfo {struct resource* eri_res; int eri_rtype; TYPE_1__ eri_rman; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct isa_ranges*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct resource* FUNC_4 (int ,int ,int*,int ) ;
 int FUNC_5 (int ,int ,int,struct resource*) ;
 struct ebus_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,struct ebus_softc*,int ) ;
 int FUNC_9 (struct ebus_rinfo*,int ) ;
 struct ebus_rinfo* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct isa_ranges*) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int ,int,int) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (struct resource*) ;
 scalar_t__ FUNC_17 (struct resource*) ;
 scalar_t__ FUNC_18 (TYPE_1__*,struct resource*) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_14)
{
 struct ebus_softc *VAR_15;
 struct ebus_rinfo *VAR_16;
 struct resource *VAR_17;
 struct isa_ranges *VAR_18;
 phandle_t VAR_19;
 int VAR_20, VAR_21, VAR_22;

 VAR_15 = FUNC_6(VAR_14);
 VAR_15->sc_flags |= VAR_0;

 FUNC_14(VAR_14, VAR_10,
     FUNC_13(VAR_14, VAR_10, 2) | VAR_8 |
     VAR_7 | VAR_5 | VAR_6, 2);
 FUNC_14(VAR_14, VAR_9, 16 , 1);
 FUNC_14(VAR_14, VAR_11, 64 , 1);

 VAR_19 = FUNC_11(VAR_14);
 VAR_15->sc_nrange = FUNC_1(VAR_19, "ranges",
     sizeof(struct isa_ranges), &VAR_15->sc_range);
 if (VAR_15->sc_nrange == -1) {
  FUNC_7(VAR_14, "could not get ranges property\n");
  return (VAR_1);
 }

 VAR_15->sc_rinfo = FUNC_10(sizeof(*VAR_15->sc_rinfo) * VAR_15->sc_nrange, VAR_2,
     VAR_3 | VAR_4);


 for (VAR_21 = 0; VAR_21 < VAR_15->sc_nrange; VAR_21++) {
  VAR_16 = &VAR_15->sc_rinfo[VAR_21];
  VAR_18 = &((struct isa_ranges *)VAR_15->sc_range)[VAR_21];
  VAR_16->eri_rtype = FUNC_12(VAR_18);
  VAR_22 = FUNC_3(VAR_21);
  VAR_17 = FUNC_4(VAR_14, VAR_16->eri_rtype, &VAR_22,
      VAR_12);
  if (VAR_17 == ((void*)0)) {
   FUNC_7(VAR_14,
       "could not allocate range resource %d\n", VAR_21);
   goto fail;
  }
  if (FUNC_17(VAR_17) != FUNC_0(VAR_18)) {
   FUNC_7(VAR_14,
       "mismatch in start of range %d (0x%lx/0x%lx)\n",
       VAR_21, FUNC_17(VAR_17), FUNC_0(VAR_18));
   goto fail;
  }
  if (FUNC_16(VAR_17) != VAR_18->size) {
   FUNC_7(VAR_14,
       "mismatch in size of range %d (0x%lx/0x%x)\n",
       VAR_21, FUNC_16(VAR_17), VAR_18->size);
   goto fail;
  }
  VAR_16->eri_res = VAR_17;
  VAR_16->eri_rman.rm_type = VAR_13;
  VAR_16->eri_rman.rm_descr = "EBus range";
  if (FUNC_18(&VAR_16->eri_rman, VAR_17) != 0) {
   FUNC_7(VAR_14,
       "could not initialize rman for range %d", VAR_21);
   goto fail;
  }
 }
 return (FUNC_8(VAR_14, VAR_15, VAR_19));

 fail:
 for (VAR_20 = VAR_21; VAR_20 >= 0; VAR_20--) {
  VAR_16 = &VAR_15->sc_rinfo[VAR_20];
  if (VAR_20 < VAR_21)
   FUNC_15(&VAR_16->eri_rman);
  if (VAR_16->eri_res != ((void*)0)) {
   FUNC_5(VAR_14, VAR_16->eri_rtype,
       FUNC_3(VAR_21), VAR_16->eri_res);
  }
 }
 FUNC_9(VAR_15->sc_rinfo, VAR_2);
 FUNC_2(VAR_15->sc_range);
 return (VAR_1);
}
