
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct resource {int dummy; } ;
struct TYPE_5__ {int begin_transaction; } ;
struct ata_channel {int flags; TYPE_2__ hw; scalar_t__ unit; TYPE_1__* r_io; } ;
struct TYPE_6__ {int dbdma_rid; struct ata_channel sc_ch; void* dbdma_regs; } ;
struct ata_macio_softc {int rev; int* udmaconf; int* wdmaconf; int* pioconf; TYPE_3__ sc_ch; int * sc_mem; } ;
typedef int driver_intr_t ;
typedef int device_t ;
struct TYPE_4__ {int offset; int * res; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,struct resource*,int ,int *,int *,struct ata_macio_softc*,void**) ;
 struct ata_macio_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_16)
{
 struct ata_macio_softc *VAR_17 = FUNC_7(VAR_16);
 uint32_t VAR_18;
 struct ata_channel *VAR_19;
 int VAR_20, VAR_21;





 VAR_20 = 0;
 VAR_19 = &VAR_17->sc_ch.sc_ch;
 VAR_17->sc_mem = FUNC_4(VAR_16, VAR_13, &VAR_20,
     VAR_10);
 if (VAR_17->sc_mem == ((void*)0)) {
  FUNC_8(VAR_16, "could not allocate memory\n");
  return (VAR_9);
 }




 for (VAR_21 = VAR_2; VAR_21 <= VAR_0; VAR_21++) {
  VAR_19->r_io[VAR_21].res = VAR_17->sc_mem;
  VAR_19->r_io[VAR_21].offset = VAR_21 * VAR_5;
 }
 VAR_19->r_io[VAR_1].res = VAR_17->sc_mem;
 VAR_19->r_io[VAR_1].offset = VAR_4;
 FUNC_2(VAR_16);

 VAR_19->unit = 0;
 VAR_19->flags |= VAR_8 | VAR_7;
 FUNC_3(VAR_16);
 VAR_17->sc_ch.dbdma_rid = 1;
 VAR_17->sc_ch.dbdma_regs = FUNC_4(VAR_16, VAR_13,
     &VAR_17->sc_ch.dbdma_rid, VAR_10);

 FUNC_1(VAR_16);


 VAR_18 = FUNC_5(VAR_17->sc_mem, VAR_6);
 if (VAR_17->rev == 4) {
  VAR_17->udmaconf[0] = VAR_17->udmaconf[1] = VAR_18 & 0x1ff00000;
  VAR_17->wdmaconf[0] = VAR_17->wdmaconf[1] = VAR_18 & 0x001ffc00;
  VAR_17->pioconf[0] = VAR_17->pioconf[1] = VAR_18 & 0x000003ff;
 } else {
  VAR_17->udmaconf[0] = VAR_17->udmaconf[1] = 0;
  VAR_17->wdmaconf[0] = VAR_17->wdmaconf[1] = VAR_18 & 0xfffff800;
  VAR_17->pioconf[0] = VAR_17->pioconf[1] = VAR_18 & 0x000007ff;
 }
 VAR_17->sc_ch.sc_ch.hw.begin_transaction = VAR_15;

 return FUNC_0(VAR_16);
}
