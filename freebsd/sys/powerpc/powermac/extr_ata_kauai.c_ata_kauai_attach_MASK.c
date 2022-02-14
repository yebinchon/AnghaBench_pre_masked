
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_5__ {int begin_transaction; } ;
struct ata_channel {TYPE_2__ hw; int flags; scalar_t__ unit; TYPE_1__* r_io; } ;
struct TYPE_6__ {int dbdma_rid; struct ata_channel sc_ch; int dbdma_offset; int * dbdma_regs; } ;
struct ata_kauai_softc {int* pioconf; TYPE_3__ sc_ch; int * sc_memr; scalar_t__* wdmaconf; scalar_t__* udmaconf; } ;
typedef int driver_intr_t ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ offset; int * res; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,struct resource*,int ,int *,int *,struct ata_kauai_softc*,void**) ;
 int FUNC_7 (int *,int ,int) ;
 struct ata_kauai_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_19)
{
 struct ata_kauai_softc *VAR_20 = FUNC_8(VAR_19);
 struct ata_channel *VAR_21;
 int VAR_22, VAR_23;






 VAR_21 = &VAR_20->sc_ch.sc_ch;

        VAR_23 = VAR_11;
 VAR_20->sc_memr = FUNC_4(VAR_19, VAR_16, &VAR_23,
     VAR_13);
        if (VAR_20->sc_memr == ((void*)0)) {
                FUNC_9(VAR_19, "could not allocate memory\n");
                return (VAR_10);
        }




        for (VAR_22 = VAR_2; VAR_22 <= VAR_0; VAR_22++) {
                VAR_21->r_io[VAR_22].res = VAR_20->sc_memr;
                VAR_21->r_io[VAR_22].offset = VAR_22*VAR_6 + VAR_7;
        }
        VAR_21->r_io[VAR_1].res = VAR_20->sc_memr;
        VAR_21->r_io[VAR_1].offset = VAR_4;
 FUNC_2(VAR_19);

 VAR_21->unit = 0;
 VAR_21->flags |= VAR_9;


 VAR_21->flags |= VAR_8;
 FUNC_3(VAR_19);

 FUNC_10(VAR_19);



 VAR_20->sc_ch.dbdma_rid = 1;
 VAR_20->sc_ch.dbdma_regs = VAR_20->sc_memr;
 VAR_20->sc_ch.dbdma_offset = VAR_5;

 FUNC_1(VAR_19);
 VAR_20->pioconf[0] = VAR_20->pioconf[1] =
     FUNC_5(VAR_20->sc_memr, VAR_12) & 0x0f000fff;

 VAR_20->udmaconf[0] = VAR_20->udmaconf[1] = 0;
 VAR_20->wdmaconf[0] = VAR_20->wdmaconf[1] = 0;


 FUNC_7(VAR_20->sc_memr, 0, 0x00000007);


 VAR_20->sc_ch.sc_ch.hw.begin_transaction = VAR_17;

 return FUNC_0(VAR_19);
}
