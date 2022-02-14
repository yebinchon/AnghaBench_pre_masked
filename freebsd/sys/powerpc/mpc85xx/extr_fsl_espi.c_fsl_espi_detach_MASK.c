
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_espi_softc {scalar_t__ sc_mem_res; scalar_t__ sc_irq_res; scalar_t__ sc_intrhand; int sc_mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct fsl_espi_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 struct fsl_espi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct fsl_espi_softc *VAR_4;

 FUNC_1(VAR_3);

 VAR_4 = FUNC_4(VAR_3);
 FUNC_0(VAR_4, VAR_0, 0);

 VAR_4 = FUNC_4(VAR_3);
 FUNC_5(&VAR_4->sc_mtx);
 if (VAR_4->sc_intrhand)
  FUNC_3(VAR_3, VAR_4->sc_irq_res, VAR_4->sc_intrhand);
 if (VAR_4->sc_irq_res)
  FUNC_2(VAR_3, VAR_1, 0, VAR_4->sc_irq_res);
 if (VAR_4->sc_mem_res)
  FUNC_2(VAR_3, VAR_2, 0, VAR_4->sc_mem_res);

 return (0);
}
