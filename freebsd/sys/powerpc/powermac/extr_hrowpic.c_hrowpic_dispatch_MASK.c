
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef size_t u_int ;
struct trapframe {int dummy; } ;
struct hrowpic_softc {int * sc_vector; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct hrowpic_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct hrowpic_softc*,int ,int ) ;
 int FUNC_2 (int ,struct trapframe*) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_4, struct trapframe *VAR_5)
{
 struct hrowpic_softc *VAR_6;
 uint64_t VAR_7;
 uint32_t VAR_8;
 u_int VAR_9;

 VAR_6 = FUNC_0(VAR_4);
 while (1) {
  VAR_7 = FUNC_1(VAR_6, VAR_2, VAR_1);
  VAR_8 = FUNC_1(VAR_6, VAR_2, VAR_0);
  VAR_7 = (VAR_7 << 32) | VAR_8;
  if (VAR_7 == 0)
   break;

  VAR_9 = 0;
  while (VAR_9 < VAR_3) {
   if (VAR_7 & 1)
    FUNC_2(VAR_6->sc_vector[VAR_9], VAR_5);
   VAR_7 >>= 1;
   VAR_9++;
  }
 }
}
