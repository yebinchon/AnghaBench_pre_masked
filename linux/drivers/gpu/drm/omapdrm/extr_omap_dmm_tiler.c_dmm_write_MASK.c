
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dmm {scalar_t__ base; int wa_lock; scalar_t__ dmm_workaround; } ;


 int FUNC_0 (struct dmm*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct dmm *VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (VAR_0->dmm_workaround) {
  unsigned long VAR_3;

  FUNC_1(&VAR_0->wa_lock, VAR_3);
  FUNC_0(VAR_0, VAR_1, VAR_2);
  FUNC_2(&VAR_0->wa_lock, VAR_3);
 } else {
  FUNC_3(VAR_1, VAR_0->base + VAR_2);
 }
}
