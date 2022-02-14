
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct trapframe {int dummy; } ;
struct atpic_softc {int * sc_vector; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atpic_softc*,int ,int ) ;
 int FUNC_1 (struct atpic_softc*,int ,int ,int) ;
 struct atpic_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct trapframe*) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_5, struct trapframe *VAR_6)
{
 struct atpic_softc *VAR_7;
 uint8_t VAR_8;

 VAR_7 = FUNC_2(VAR_5);
 FUNC_1(VAR_7, VAR_0, 0, VAR_4 | VAR_2);
 VAR_8 = FUNC_0(VAR_7, VAR_0, 0);
 FUNC_1(VAR_7, VAR_0, 0, VAR_4 | VAR_3);
 if ((VAR_8 & 0x80) == 0)
  return;

 if (VAR_8 == 0x82) {
  FUNC_1(VAR_7, VAR_1, 0, VAR_4 | VAR_2);
  VAR_8 = FUNC_0(VAR_7, VAR_1, 0) + 8;
  FUNC_1(VAR_7, VAR_1, 0, VAR_4 | VAR_3);
  if ((VAR_8 & 0x80) == 0)
   return;
 }

 FUNC_3(VAR_7->sc_vector[VAR_8 & 0x0f], VAR_6);
}
