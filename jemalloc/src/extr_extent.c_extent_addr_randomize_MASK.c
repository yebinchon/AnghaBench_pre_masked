
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int tsdn_t ;
typedef int tsd_t ;
struct TYPE_5__ {void* e_addr; } ;
typedef TYPE_1__ extent_t ;
typedef int arena_t ;


 void* FUNC_0 (void*,size_t) ;
 int FUNC_1 (size_t) ;
 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 unsigned int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,unsigned int) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(tsdn_t *VAR_2, arena_t *VAR_3, extent_t *VAR_4,
    size_t VAR_5) {
 FUNC_2(FUNC_4(VAR_4) == FUNC_3(VAR_4));

 if (VAR_5 < VAR_1) {
  unsigned VAR_6 = VAR_0 -
      FUNC_5(FUNC_1(VAR_5));
  size_t VAR_7;
  if (!FUNC_8(VAR_2)) {
   tsd_t *VAR_8 = FUNC_9(VAR_2);
   VAR_7 = (size_t)FUNC_6(
       FUNC_7(VAR_8), VAR_6);
  } else {
   uint64_t VAR_9 = (uint64_t)(uintptr_t)&VAR_7;
   VAR_7 = (size_t)FUNC_6(&VAR_9, VAR_6);
  }
  uintptr_t VAR_10 = ((uintptr_t)VAR_7) << (VAR_0 -
      VAR_6);
  VAR_4->e_addr = (void *)((uintptr_t)VAR_4->e_addr +
      VAR_10);
  FUNC_2(FUNC_0(VAR_4->e_addr, VAR_5) ==
      VAR_4->e_addr);
 }
}
