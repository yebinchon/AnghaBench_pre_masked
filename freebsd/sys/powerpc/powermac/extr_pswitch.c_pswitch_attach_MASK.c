
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_int ;
struct pswitch_softc {int * sc_irq; scalar_t__ sc_irqrid; int sc_ih; } ;
typedef scalar_t__ phandle_t ;
typedef int irq ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int ,int ,scalar_t__*,char,char,int,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ,int *,int ,int *) ;
 struct pswitch_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_5)
{
 struct pswitch_softc *VAR_6;
 phandle_t VAR_7, VAR_8;
 char VAR_9[32];
 u_int VAR_10[2];

 VAR_6 = FUNC_6(VAR_5);
 VAR_7 = FUNC_8(VAR_5);

 for (VAR_8 = FUNC_0(VAR_7); VAR_8 != 0; VAR_8 = FUNC_2(VAR_8)) {
  if (FUNC_1(VAR_8, "device_type", VAR_9, 32) == -1)
   continue;

  if (FUNC_9(VAR_9, "programmer-switch") == 0)
   break;
 }

 if (VAR_8 == 0) {
  FUNC_7(VAR_5, "could not find correct node\n");
  return (VAR_0);
 }

 if (FUNC_1(VAR_8, "interrupts", VAR_10, sizeof(VAR_10)) == -1) {
  FUNC_7(VAR_5, "could not get interrupt\n");
  return (VAR_0);
 }

 VAR_6->sc_irqrid = 0;
 VAR_6->sc_irq = FUNC_3(VAR_5, VAR_3, &VAR_6->sc_irqrid,
     VAR_10[0], VAR_10[0], 1, VAR_2);
 if (VAR_6->sc_irq == ((void*)0)) {
  FUNC_7(VAR_5, "could not allocate interrupt\n");
  return (VAR_0);
 }

 if (FUNC_5(VAR_5, VAR_6->sc_irq, VAR_1,
     VAR_4, ((void*)0), VAR_5, &VAR_6->sc_ih) != 0) {
  FUNC_7(VAR_5, "could not setup interrupt\n");
  FUNC_4(VAR_5, VAR_3, VAR_6->sc_irqrid,
      VAR_6->sc_irq);
  return (VAR_0);
 }

 return (0);
}
