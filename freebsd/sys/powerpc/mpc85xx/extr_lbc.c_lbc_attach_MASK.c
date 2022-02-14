
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int uintmax_t ;
struct rman {char* rm_descr; int rm_end; int rm_start; int rm_type; } ;
struct lbc_softc {int sc_addr_cells; int sc_size_cells; int * sc_mres; scalar_t__ sc_mrid; TYPE_1__* sc_banks; struct rman sc_rman; int sc_ltesr; int * sc_ires; scalar_t__ sc_irid; int sc_icookie; int sc_bsh; int sc_bst; int * sc_dev; } ;
struct TYPE_5__ {int obd_name; } ;
struct lbc_devinfo {TYPE_2__ di_ofw; int di_res; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int * device_t ;
struct TYPE_4__ {int addr; int size; int width; scalar_t__ wp; int atom; int decc; int msel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,void**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_6 (int *,int ,scalar_t__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,scalar_t__,int *) ;
 int FUNC_9 (int *,int *,int,int *,int ,struct lbc_softc*,int *) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (char*,int,int,...) ;
 int * FUNC_12 (int *,int *,int) ;
 struct lbc_softc* FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,...) ;
 int FUNC_15 (int *,struct lbc_devinfo*) ;
 scalar_t__ FUNC_16 (int ,int*,int*) ;
 int FUNC_17 (void*,int) ;
 int FUNC_18 (int ,struct lbc_softc*,struct lbc_devinfo*) ;
 scalar_t__ FUNC_19 (int ,struct lbc_softc*,struct lbc_devinfo*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct lbc_devinfo*,int ) ;
 int FUNC_22 (struct lbc_softc*) ;
 int FUNC_23 (struct lbc_softc*) ;
 int VAR_21 ;
 struct lbc_devinfo* FUNC_24 (int,int ,int) ;
 int FUNC_25 (TYPE_2__*) ;
 scalar_t__ FUNC_26 (TYPE_2__*,int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (struct rman*) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (struct rman*) ;
 int FUNC_34 (struct rman*,int ,int ) ;

__attribute__((used)) static int
FUNC_35(device_t VAR_22)
{
 struct lbc_softc *VAR_23;
 struct lbc_devinfo *VAR_24;
 struct rman *VAR_25;
 uintmax_t VAR_26, VAR_27;
 vm_paddr_t VAR_28;
 device_t VAR_29;
 phandle_t VAR_30, VAR_31;
 pcell_t *VAR_32, *VAR_33;
 int VAR_34, VAR_35;
 int VAR_36;
 int VAR_37, VAR_38, VAR_39, VAR_40;

 VAR_23 = FUNC_13(VAR_22);
 VAR_23->sc_dev = VAR_22;

 VAR_23->sc_mrid = 0;
 VAR_23->sc_mres = FUNC_6(VAR_22, VAR_20, &VAR_23->sc_mrid,
     VAR_16);
 if (VAR_23->sc_mres == ((void*)0))
  return (VAR_0);

 VAR_23->sc_bst = FUNC_32(VAR_23->sc_mres);
 VAR_23->sc_bsh = FUNC_31(VAR_23->sc_mres);

 for (VAR_37 = 0; VAR_37 < VAR_12; VAR_37++) {
  FUNC_10(VAR_23->sc_bst, VAR_23->sc_bsh, FUNC_0(VAR_37), 0);
  FUNC_10(VAR_23->sc_bst, VAR_23->sc_bsh, FUNC_1(VAR_37), 0);
 }
 FUNC_10(VAR_23->sc_bst, VAR_23->sc_bsh, VAR_4, 0);







 FUNC_10(VAR_23->sc_bst, VAR_23->sc_bsh, VAR_5, 0x00030008);

 FUNC_10(VAR_23->sc_bst, VAR_23->sc_bsh, VAR_6, 0);
 FUNC_10(VAR_23->sc_bst, VAR_23->sc_bsh, VAR_8, ~0);
 FUNC_10(VAR_23->sc_bst, VAR_23->sc_bsh, VAR_7, 0x64080001);

 VAR_23->sc_irid = 0;
 VAR_23->sc_ires = FUNC_6(VAR_22, VAR_19, &VAR_23->sc_irid,
     VAR_16 | VAR_17);
 if (VAR_23->sc_ires != ((void*)0)) {
  VAR_38 = FUNC_9(VAR_22, VAR_23->sc_ires,
      VAR_3 | VAR_2, ((void*)0), VAR_21, VAR_23,
      &VAR_23->sc_icookie);
  if (VAR_38) {
   FUNC_14(VAR_22, "could not activate interrupt\n");
   FUNC_8(VAR_22, VAR_19, VAR_23->sc_irid,
       VAR_23->sc_ires);
   VAR_23->sc_ires = ((void*)0);
  }
 }

 VAR_23->sc_ltesr = ~0;

 VAR_33 = ((void*)0);

 VAR_25 = &VAR_23->sc_rman;
 VAR_25->rm_type = VAR_18;
 VAR_25->rm_descr = "Local Bus Space";
 VAR_38 = FUNC_33(VAR_25);
 if (VAR_38)
  goto fail;

 VAR_38 = FUNC_34(VAR_25, VAR_25->rm_start, VAR_25->rm_end);
 if (VAR_38) {
  FUNC_30(VAR_25);
  goto fail;
 }




 VAR_30 = FUNC_27(VAR_22);
 if ((FUNC_16(VAR_30, &VAR_23->sc_addr_cells,
     &VAR_23->sc_size_cells)) != 0) {
  VAR_38 = VAR_0;
  goto fail;
 }

 VAR_36 = FUNC_20(VAR_30);
 if (VAR_36 > 2) {
  FUNC_14(VAR_22, "unsupported parent #addr-cells\n");
  VAR_38 = VAR_1;
  goto fail;
 }
 VAR_34 = sizeof(pcell_t) * (VAR_23->sc_addr_cells + VAR_36 +
     VAR_23->sc_size_cells);

 VAR_35 = FUNC_3(VAR_30, "ranges", VAR_34,
     (void **)&VAR_32);
 if (VAR_35 < 0) {
  FUNC_14(VAR_22, "could not retrieve 'ranges' property\n");
  VAR_38 = VAR_0;
  goto fail;
 }
 VAR_33 = VAR_32;

 FUNC_11("par addr_cells = %d, addr_cells = %d, size_cells = %d, "
     "tuple_size = %d, tuples = %d\n", VAR_36,
     VAR_23->sc_addr_cells, VAR_23->sc_size_cells, VAR_34, VAR_35);

 VAR_28 = 0;
 VAR_27 = 0;
 for (VAR_39 = 0; VAR_39 < VAR_35; VAR_39++) {


  VAR_37 = FUNC_17(VAR_32, 1);
  if (VAR_37 < 0 || VAR_37 > VAR_12) {
   FUNC_14(VAR_22, "bank out of range: %d\n", VAR_37);
   VAR_38 = VAR_1;
   goto fail;
  }
  VAR_32 += 1;





  VAR_26 = 0;
  for (VAR_40 = 0; VAR_40 < VAR_23->sc_addr_cells - 1; VAR_40++) {
   VAR_26 <<= sizeof(pcell_t) * 8;
   VAR_26 |= *VAR_32;
   VAR_32++;
  }


  VAR_28 = 0;
  for (VAR_40 = 0; VAR_40 < VAR_36; VAR_40++) {
   VAR_28 <<= sizeof(pcell_t) * 8;
   VAR_28 |= *VAR_32;
   VAR_32++;
  }

  VAR_27 = FUNC_17((void *)VAR_32, VAR_23->sc_size_cells);
  VAR_32 += VAR_23->sc_size_cells;
  FUNC_11("bank = %d, start = %jx, size = %jx\n", VAR_37,
      (uintmax_t)VAR_28, VAR_27);

  VAR_23->sc_banks[VAR_37].addr = VAR_28 + VAR_26;
  VAR_23->sc_banks[VAR_37].size = VAR_27;







  VAR_23->sc_banks[VAR_37].width = 16;
  VAR_23->sc_banks[VAR_37].msel = VAR_11;
  VAR_23->sc_banks[VAR_37].decc = VAR_10;
  VAR_23->sc_banks[VAR_37].atom = VAR_9;
  VAR_23->sc_banks[VAR_37].wp = 0;
 }




 VAR_38 = FUNC_23(VAR_23);
 if (VAR_38)
  goto fail;




 for (VAR_31 = FUNC_2(VAR_30); VAR_31 != 0; VAR_31 = FUNC_4(VAR_31)) {

  VAR_24 = FUNC_24(sizeof(*VAR_24), VAR_13, VAR_14 | VAR_15);

  if (FUNC_26(&VAR_24->di_ofw, VAR_31) != 0) {
   FUNC_21(VAR_24, VAR_13);
   FUNC_14(VAR_22, "could not set up devinfo\n");
   continue;
  }

  FUNC_29(&VAR_24->di_res);

  if (FUNC_19(VAR_31, VAR_23, VAR_24)) {
   FUNC_14(VAR_22, "could not process 'reg' "
       "property\n");
   FUNC_25(&VAR_24->di_ofw);
   FUNC_21(VAR_24, VAR_13);
   continue;
  }

  FUNC_18(VAR_31, VAR_23, VAR_24);


  VAR_29 = FUNC_12(VAR_22, ((void*)0), -1);
  if (VAR_29 == ((void*)0)) {
   FUNC_14(VAR_22, "could not add child: %s\n",
       VAR_24->di_ofw.obd_name);
   FUNC_28(&VAR_24->di_res);
   FUNC_25(&VAR_24->di_ofw);
   FUNC_21(VAR_24, VAR_13);
   continue;
  }
  FUNC_11("added child name='%s', node=%x\n", VAR_24->di_ofw.obd_name,
      VAR_31);
  FUNC_15(VAR_29, VAR_24);
 }




 FUNC_22(VAR_23);

 FUNC_5(VAR_33);
 return (FUNC_7(VAR_22));

fail:
 FUNC_5(VAR_33);
 FUNC_8(VAR_22, VAR_20, VAR_23->sc_mrid, VAR_23->sc_mres);
 return (VAR_38);
}
