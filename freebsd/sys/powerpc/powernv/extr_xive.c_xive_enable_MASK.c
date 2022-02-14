
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct xive_irq {scalar_t__ lirq; } ;
typedef int device_t ;
typedef scalar_t__ cell_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (int ,scalar_t__,void*) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_6, u_int VAR_7, u_int VAR_8, void **VAR_9)
{
 struct xive_irq *VAR_10;
 cell_t VAR_11, VAR_12;

 if (VAR_7 == VAR_0) {
  if (VAR_5 == -1)
   VAR_5 = VAR_8;
  return;
 }
 if (*VAR_9 == ((void*)0))
  *VAR_9 = FUNC_4(VAR_7);

 VAR_10 = *VAR_9;


 VAR_12 = FUNC_1(VAR_4);
 VAR_10->lirq = VAR_8;

 for (;;) {
  VAR_11 = FUNC_2(VAR_2, VAR_7, VAR_12,
      VAR_3, VAR_8);
  if (VAR_11 != VAR_1)
   break;
  FUNC_0(10);
 }

 if (VAR_11 != 0)
  FUNC_3("OPAL_SET_XIVE IRQ %d -> cpu %d failed: %d", VAR_7,
      VAR_12, VAR_11);

 FUNC_5(VAR_6, VAR_7, *VAR_9);
}
