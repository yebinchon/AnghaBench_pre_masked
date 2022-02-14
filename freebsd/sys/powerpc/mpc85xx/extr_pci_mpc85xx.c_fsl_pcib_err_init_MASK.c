
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef void* uint16_t ;
struct fsl_pcib_softc {scalar_t__ sc_pcie_capreg; int sc_bsh; int sc_bst; scalar_t__ sc_pcie; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct fsl_pcib_softc* FUNC_1 (int ) ;
 void* FUNC_2 (struct fsl_pcib_softc*,int ,int ,int ,scalar_t__,int) ;
 int FUNC_3 (struct fsl_pcib_softc*,int ,int ,int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_10)
{
 struct fsl_pcib_softc *VAR_11;
 uint16_t VAR_12, VAR_13;
 uint32_t VAR_14, VAR_15;

 VAR_11 = FUNC_1(VAR_10);

 VAR_12 = FUNC_2(VAR_11, 0, 0, 0, VAR_5, 2);
 if (VAR_12)
  FUNC_3(VAR_11, 0, 0, 0, VAR_5, 0xffff, 2);
 if (VAR_11->sc_pcie) {

  FUNC_0(VAR_11->sc_bst, VAR_11->sc_bsh, VAR_9,
      0xffffffff);
  FUNC_0(VAR_11->sc_bst, VAR_11->sc_bsh, VAR_8,
      0xffffffff);
  FUNC_0(VAR_11->sc_bst, VAR_11->sc_bsh, VAR_6,
      0xffffffff);

  VAR_13 = FUNC_2(VAR_11, 0, 0, 0,
      VAR_11->sc_pcie_capreg + VAR_4, 2);
  if (VAR_13)
   FUNC_3(VAR_11, 0, 0, 0,
       VAR_11->sc_pcie_capreg + VAR_4,
       0xffff, 2);


  VAR_15 = 0x00bfff00;
  FUNC_0(VAR_11->sc_bst, VAR_11->sc_bsh, VAR_7,
      VAR_15);


  VAR_14 = FUNC_2(VAR_11, 0, 0, 0,
      VAR_11->sc_pcie_capreg + VAR_3, 4);
  VAR_14 |= VAR_2 | VAR_0 |
      VAR_1;
  FUNC_3(VAR_11, 0, 0, 0,
      VAR_11->sc_pcie_capreg + VAR_3, VAR_14, 4);
 }
}
