
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
typedef int tcache_t ;
struct TYPE_3__ {int * ptr; } ;
struct TYPE_4__ {TYPE_1__ cur_ptr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

void
FUNC_6(tsd_t *VAR_1) {
 tcache_t *VAR_2 = FUNC_5(VAR_1);
 if (!FUNC_1(VAR_1)) {
  FUNC_0(FUNC_4(VAR_1) == 0);
  if (VAR_0) {
   FUNC_0(FUNC_3(VAR_2, 0)->cur_ptr.ptr
       == ((void*)0));
  }
  return;
 }
 FUNC_0(FUNC_4(VAR_1));
 FUNC_0(FUNC_3(VAR_2, 0)->cur_ptr.ptr != ((void*)0));

 FUNC_2(VAR_1, VAR_2, 1);
 if (VAR_0) {
  FUNC_3(VAR_2, 0)->cur_ptr.ptr = ((void*)0);
 }
}
