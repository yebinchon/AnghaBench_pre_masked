
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct xive_softc {int dummy; } ;
struct xive_cpu {int queue; } ;
struct trapframe {int dummy; } ;
typedef int device_t ;


 struct xive_cpu* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 struct xive_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (scalar_t__,struct trapframe*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct xive_softc*,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct xive_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_6, struct trapframe *VAR_7)
{
 struct xive_softc *VAR_8;
 struct xive_cpu *VAR_9;
 uint32_t VAR_10;
 uint16_t VAR_11;
 uint8_t VAR_12, VAR_13;

 VAR_8 = FUNC_1(VAR_6);

 for (;;) {
  VAR_11 = FUNC_4(VAR_8, VAR_3);
  VAR_12 = (VAR_11 & 0xff);

  VAR_13 = VAR_11 >> VAR_1;

  if (VAR_13 == 130)
   break;
  switch (VAR_13) {
  case 130:
   goto end;
  case 128:
  case 131:
   FUNC_2(VAR_6,
       "Unexpected interrupt he type: %d\n", VAR_13);
   goto end;
  case 129:
   break;
  }

  VAR_9 = FUNC_0(VAR_4);
  FUNC_6(VAR_8, VAR_2, VAR_12);

  for (;;) {
   VAR_10 = FUNC_5(&VAR_9->queue);

   if (VAR_10 == 0)
    break;

   if (VAR_10 == VAR_0)
    VAR_10 = VAR_5;

   FUNC_3(VAR_10, VAR_7);
  }
 }
end:
 FUNC_6(VAR_8, VAR_2, 0xff);
}
