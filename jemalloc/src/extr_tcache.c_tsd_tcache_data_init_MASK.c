
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_9__ {int * arena; } ;
typedef TYPE_2__ tcache_t ;
typedef int arena_t ;
struct TYPE_8__ {int * ptr; } ;
struct TYPE_10__ {TYPE_1__ cur_ptr; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ,size_t,size_t,int,int *,int,int *) ;
 int FUNC_4 () ;
 size_t FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ,TYPE_2__*,int *) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (int *,TYPE_2__*,void*) ;
 TYPE_4__* FUNC_9 (TYPE_2__*,int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

bool
FUNC_12(tsd_t *VAR_2) {
 tcache_t *VAR_3 = FUNC_10(VAR_2);
 FUNC_2(FUNC_9(VAR_3, 0)->cur_ptr.ptr == ((void*)0));
 size_t VAR_4 = FUNC_7(VAR_1);
 size_t VAR_5 = FUNC_5(VAR_1, VAR_4);

 void *VAR_6 = FUNC_3(FUNC_11(VAR_2), VAR_5, VAR_4, 1,
     ((void*)0), 1, FUNC_1(VAR_0, 0, 1));
 if (VAR_6 == ((void*)0)) {
  return 1;
 }

 FUNC_8(VAR_2, VAR_3, VAR_6);
 VAR_3->arena = ((void*)0);
 arena_t *VAR_7;
 if (!FUNC_4()) {

  VAR_7 = FUNC_1(FUNC_11(VAR_2), 0, 0);
  FUNC_6(FUNC_11(VAR_2), VAR_3, VAR_7);
 } else {
  VAR_7 = FUNC_0(VAR_2, ((void*)0));

  if (VAR_3->arena == ((void*)0)) {
   FUNC_6(FUNC_11(VAR_2), VAR_3, VAR_7);
  }
 }
 FUNC_2(VAR_7 == VAR_3->arena);

 return 0;
}
