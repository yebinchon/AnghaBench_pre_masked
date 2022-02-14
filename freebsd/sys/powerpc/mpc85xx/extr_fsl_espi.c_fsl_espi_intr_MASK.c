
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fsl_espi_softc {int sc_flags; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fsl_espi_softc*) ;
 int FUNC_1 (struct fsl_espi_softc*,int ) ;
 int FUNC_2 (struct fsl_espi_softc*) ;
 int FUNC_3 (struct fsl_espi_softc*,int ,int) ;
 int FUNC_4 (struct fsl_espi_softc*) ;
 int FUNC_5 (struct fsl_espi_softc*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 struct fsl_espi_softc *VAR_4;
 uint32_t VAR_5;

 VAR_4 = (struct fsl_espi_softc *)VAR_3;
 FUNC_0(VAR_4);


 if ((VAR_4->sc_flags & VAR_2) == 0) {
  FUNC_2(VAR_4);
  return;
 }
 VAR_5 = FUNC_1(VAR_4, VAR_0);
 FUNC_3(VAR_4, VAR_0, VAR_5);


 FUNC_5(VAR_4);


 FUNC_4(VAR_4);


 if (VAR_5 & VAR_1)
  FUNC_6(VAR_4->sc_dev);

 FUNC_2(VAR_4);
}
