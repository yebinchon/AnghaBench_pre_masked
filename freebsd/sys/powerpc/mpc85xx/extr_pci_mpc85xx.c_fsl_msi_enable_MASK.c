
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct fsl_msi_softc {struct fsl_msi_irq* sc_msi_irq; } ;
struct fsl_msi_irq {size_t* vectors; } ;
typedef int device_t ;


 size_t VAR_0 ;
 struct fsl_msi_softc* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_1, u_int VAR_2, u_int VAR_3, void **VAR_4)
{
 struct fsl_msi_softc *VAR_5;
 struct fsl_msi_irq *VAR_6;

 VAR_5 = FUNC_0(VAR_1);

 VAR_6 = &VAR_5->sc_msi_irq[VAR_2 / VAR_0];
 VAR_6->vectors[VAR_2 % VAR_0] = VAR_3;
}
