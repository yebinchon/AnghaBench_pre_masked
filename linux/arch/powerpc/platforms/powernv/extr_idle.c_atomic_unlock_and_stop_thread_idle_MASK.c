
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct TYPE_2__ {unsigned long idle_state; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_3 (int) ;
 unsigned long FUNC_4 (int) ;
 TYPE_1__** VAR_1 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline void FUNC_7(void)
{
 int VAR_2 = FUNC_5();
 int VAR_3 = FUNC_3(VAR_2);
 unsigned long VAR_4 = 1UL << FUNC_4(VAR_2);
 unsigned long *VAR_5 = &VAR_1[VAR_3]->idle_state;
 u64 VAR_6 = FUNC_1(*VAR_5);
 u64 VAR_7, VAR_8;

 FUNC_0(!(VAR_6 & VAR_0));
 FUNC_0(VAR_6 & VAR_4);

again:
 VAR_7 = (VAR_6 | VAR_4) & ~VAR_0;
 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (FUNC_6(VAR_8 != VAR_6)) {
  VAR_6 = VAR_8;
  goto again;
 }
}
