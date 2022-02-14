
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct fsl_pcib_softc {scalar_t__ sc_busnr; int sc_pcie; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 struct fsl_pcib_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct fsl_pcib_softc*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static uint32_t
FUNC_3(device_t VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3,
    u_int VAR_4, int VAR_5)
{
 struct fsl_pcib_softc *VAR_6 = FUNC_1(VAR_0);
 u_int VAR_7;

 if (VAR_1 == VAR_6->sc_busnr && !VAR_6->sc_pcie && VAR_2 < 10)
  return (~0);
 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3);

 return (FUNC_2(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));
}
