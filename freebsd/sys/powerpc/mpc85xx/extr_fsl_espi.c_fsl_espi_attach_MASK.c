
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_espi_softc {int sc_num_cs; int sc_mtx; void* sc_mem_res; void* sc_irq_res; int sc_intrhand; int sc_dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fsl_espi_softc*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,char*,int*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,void*) ;
 scalar_t__ FUNC_5 (int ,void*,int,int *,int ,struct fsl_espi_softc*,int *) ;
 int FUNC_6 (int ,char*,int) ;
 struct fsl_espi_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_12 ;
 int FUNC_9 (int *,char*,int *,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_13)
{
 struct fsl_espi_softc *VAR_14;
 int VAR_15;
 phandle_t VAR_16;

 VAR_14 = FUNC_7(VAR_13);
 VAR_14->sc_dev = VAR_13;
 VAR_16 = FUNC_10(VAR_13);

 VAR_15 = 0;
 VAR_14->sc_mem_res = FUNC_2(VAR_13, VAR_11, &VAR_15,
     VAR_9);
 if (!VAR_14->sc_mem_res) {
  FUNC_8(VAR_13, "cannot allocate memory resource\n");
  return (VAR_0);
 }

 VAR_15 = 0;
 VAR_14->sc_irq_res = FUNC_2(VAR_13, VAR_10, &VAR_15,
     VAR_9);
 if (!VAR_14->sc_irq_res) {
  FUNC_4(VAR_13, VAR_11, 0, VAR_14->sc_mem_res);
  FUNC_8(VAR_13, "cannot allocate interrupt\n");
  return (VAR_0);
 }


 if (FUNC_5(VAR_13, VAR_14->sc_irq_res, VAR_7 | VAR_6,
     ((void*)0), VAR_12, VAR_14, &VAR_14->sc_intrhand)) {
  FUNC_4(VAR_13, VAR_10, 0, VAR_14->sc_irq_res);
  FUNC_4(VAR_13, VAR_11, 0, VAR_14->sc_mem_res);
  FUNC_8(VAR_13, "cannot setup the interrupt handler\n");
  return (VAR_0);
 }
 if (FUNC_1(VAR_16, "fsl,espi-num-chipselects",
     &VAR_14->sc_num_cs, sizeof(VAR_14->sc_num_cs)) < 0 )
  VAR_14->sc_num_cs = 4;

 FUNC_9(&VAR_14->sc_mtx, "fsl_espi", ((void*)0), VAR_8);


 FUNC_0(VAR_14, VAR_2, VAR_3 |
     (16 << VAR_5) | (15 << VAR_4));


 FUNC_0(VAR_14, VAR_1, 0);

 FUNC_6(VAR_13, "spibus", -1);

 return (FUNC_3(VAR_13));
}
