
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct ps3pic_softc {int sc_ipi_virq; int * mask_thread1; int * mask_thread0; } ;
typedef int device_t ;


 int FUNC_0 (int *,unsigned long) ;
 struct ps3pic_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, u_int VAR_1, void *VAR_2)
{
 struct ps3pic_softc *VAR_3;
 uint64_t VAR_4;

 VAR_3 = FUNC_1(VAR_0);


 if (VAR_1 == VAR_3->sc_ipi_virq)
  return;

 FUNC_0(&VAR_3->mask_thread0[0], 1UL << (63 - VAR_1));
 FUNC_0(&VAR_3->mask_thread1[0], 1UL << (63 - VAR_1));

 FUNC_3(&VAR_4);
 FUNC_2(VAR_4, 0);
 FUNC_2(VAR_4, 1);
}
