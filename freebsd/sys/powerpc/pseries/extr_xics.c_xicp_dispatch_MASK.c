
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct xicp_softc {int ipi_vec; int nintvecs; TYPE_1__* intvecs; scalar_t__ xics_emu; } ;
struct trapframe {int dummy; } ;
struct resource {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int irq; int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct resource*,int) ;
 int FUNC_3 (struct resource*,int,int) ;
 int* VAR_7 ;
 int VAR_8 ;
 struct xicp_softc* FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,...) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int*,int*,int*) ;
 int FUNC_9 (int ,struct trapframe*) ;
 struct resource* FUNC_10 (size_t) ;

__attribute__((used)) static void
FUNC_11(device_t VAR_10, struct trapframe *VAR_11)
{
 struct xicp_softc *VAR_12;
 struct resource *VAR_13 = ((void*)0);
 uint64_t VAR_14, VAR_15;
 int VAR_16;

 VAR_12 = FUNC_4(VAR_10);
 for (;;) {

  if (VAR_13) {
   VAR_14 = FUNC_2(VAR_13, 4);






  } else {

   FUNC_8(VAR_1, 0, 0, 0, 0, &VAR_14, &VAR_15, &VAR_15);
  }
  VAR_14 &= 0x00ffffff;

  if (VAR_14 == 0)
   break;

  if (VAR_14 == VAR_6) {
   VAR_14 = VAR_2;


   if (VAR_13)
    FUNC_3(VAR_13, 12, 0xff);





   else
    FUNC_7(VAR_0, (uint64_t)(FUNC_1(VAR_9)),
        0xff);
   VAR_16 = VAR_12->ipi_vec;
  } else {


   for (VAR_16 = 0; VAR_16 < VAR_12->nintvecs; VAR_16++) {
    if (VAR_12->intvecs[VAR_16].irq == VAR_14)
     break;
   }
   FUNC_0(VAR_16 < VAR_12->nintvecs, ("Unmapped XIRR"));
  }

  FUNC_9(VAR_12->intvecs[VAR_16].vector, VAR_11);
 }
}
