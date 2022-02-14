
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_2__ {size_t nregs; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 size_t FUNC_1 (int const*) ;
 size_t FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 size_t FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;
 int * FUNC_6 (int *,void const*) ;
 scalar_t__ FUNC_7 (int ) ;

void
FUNC_8(tsdn_t *VAR_1, const void *VAR_2,
    size_t *VAR_3, size_t *VAR_4, size_t *VAR_5) {
 FUNC_0(VAR_2 != ((void*)0) && VAR_3 != ((void*)0) && VAR_4 != ((void*)0) && VAR_5 != ((void*)0));

 const extent_t *VAR_6 = FUNC_6(VAR_1, VAR_2);
 if (FUNC_7(VAR_6 == ((void*)0))) {
  *VAR_3 = *VAR_4 = *VAR_5 = 0;
  return;
 }

 *VAR_5 = FUNC_2(VAR_6);
 if (!FUNC_3(VAR_6)) {
  *VAR_3 = 0;
  *VAR_4 = 1;
 } else {
  *VAR_3 = FUNC_1(VAR_6);
  *VAR_4 = VAR_0[FUNC_4(VAR_6)].nregs;
  FUNC_0(*VAR_3 <= *VAR_4);
  FUNC_0(*VAR_3 * FUNC_5(VAR_6) <= *VAR_5);
 }
}
