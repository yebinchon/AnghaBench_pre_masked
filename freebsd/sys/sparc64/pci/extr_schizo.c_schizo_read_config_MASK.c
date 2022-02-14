
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ sc_pci_secbus; } ;
struct schizo_softc {scalar_t__ sc_mode; TYPE_1__ sc_ops; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct schizo_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static uint32_t
FUNC_3(device_t VAR_4, u_int VAR_5, u_int VAR_6, u_int VAR_7, u_int VAR_8,
    int VAR_9)
{
 struct schizo_softc *VAR_10;

 VAR_10 = FUNC_1(VAR_4);



 if (VAR_10->sc_mode == VAR_1 &&
     VAR_5 == VAR_10->sc_ops.sc_pci_secbus && VAR_6 == VAR_2 &&
     VAR_7 == VAR_3 && VAR_8 + VAR_9 > 0x80)
  return (0);

 return (FUNC_2(VAR_4, VAR_0, FUNC_0(VAR_5,
     VAR_6, VAR_7, VAR_8), VAR_5, VAR_6, VAR_7, VAR_8, VAR_9));
}
