
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmap {int guest_table_lock; } ;
typedef int pmd_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct gmap *VAR_0, pmd_t *VAR_1)
{
 if (FUNC_0(*VAR_1))
  FUNC_1(&VAR_0->guest_table_lock);
}
