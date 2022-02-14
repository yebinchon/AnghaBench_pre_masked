
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
struct trapframe {int dummy; } ;
struct ps3pic_softc {unsigned long* mask_thread0; unsigned long* mask_thread1; int * sc_vector; int * bitmap_thread1; int * bitmap_thread0; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned long FUNC_1 (int *) ;
 int VAR_0 ;
 struct ps3pic_softc* FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,struct trapframe*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(device_t VAR_1, struct trapframe *VAR_2)
{
 uint64_t VAR_3, VAR_4;
 int VAR_5;
 struct ps3pic_softc *VAR_6;

 VAR_6 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_0) == 0) {
  VAR_3 = FUNC_1(&VAR_6->bitmap_thread0[0]);
  VAR_4 = VAR_6->mask_thread0[0];
 } else {
  VAR_3 = FUNC_1(&VAR_6->bitmap_thread1[0]);
  VAR_4 = VAR_6->mask_thread1[0];
 }
 FUNC_5();

 while ((VAR_5 = FUNC_3(VAR_3 & VAR_4) - 1) != -1) {
  VAR_3 &= ~(1UL << VAR_5);
  FUNC_4(VAR_6->sc_vector[63 - VAR_5], VAR_2);
 }
}
