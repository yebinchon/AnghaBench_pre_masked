
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct fsl_pcib_softc {scalar_t__ sc_busnr; int sc_pcie; } ;
typedef int device_t ;


 struct fsl_pcib_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct fsl_pcib_softc*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
    u_int VAR_4, uint32_t VAR_5, int VAR_6)
{
 struct fsl_pcib_softc *VAR_7 = FUNC_0(VAR_0);

 if (VAR_1 == VAR_7->sc_busnr && !VAR_7->sc_pcie && VAR_2 < 10)
  return;
 FUNC_1(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
