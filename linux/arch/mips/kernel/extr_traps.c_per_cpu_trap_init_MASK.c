
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ asid_cache; } ;
struct TYPE_4__ {int mm; int * active_mm; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 () ;
 TYPE_3__* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int VAR_15 ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 unsigned int FUNC_10 () ;
 int FUNC_11 () ;

void FUNC_12(bool VAR_16)
{
 unsigned int VAR_17 = FUNC_10();

 FUNC_5();
 FUNC_4();

 FUNC_3();
 if (VAR_12) {
  VAR_8 = VAR_1 - VAR_0;
  VAR_7 = (FUNC_9() >> VAR_6) & 7;
  VAR_10 = (FUNC_9() >> VAR_5) & 7;
  VAR_9 = (FUNC_9() >> VAR_4) & 7;
  if (!VAR_9)
   VAR_9 = -1;

 } else {
  VAR_7 = VAR_2;
  VAR_8 = VAR_3;
  VAR_10 = -1;
  VAR_9 = -1;
 }

 if (VAR_13)
  VAR_11[VAR_17].asid_cache = 0;
 else if (!VAR_11[VAR_17].asid_cache)
  VAR_11[VAR_17].asid_cache = FUNC_2(VAR_17);

 FUNC_8(&VAR_15);
 VAR_14->active_mm = &VAR_15;
 FUNC_0(VAR_14->mm);
 FUNC_7(&VAR_15, VAR_14);


 if (!VAR_16)
  FUNC_6();
 FUNC_11();
 FUNC_1();
}
