
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hooks_t ;
struct TYPE_4__ {int in_use; int hooks; } ;
typedef TYPE_1__ hooks_internal_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (void*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,void*) ;

__attribute__((used)) static void *
FUNC_5(hooks_t *VAR_4) {
 hooks_internal_t VAR_5;
 for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  bool VAR_7 = FUNC_4(&VAR_5, &VAR_2[VAR_6]);

  FUNC_0(VAR_7);
  if (!VAR_5.in_use) {
   VAR_5.hooks = *VAR_4;
   VAR_5.in_use = 1;
   FUNC_3(&VAR_2[VAR_6], &VAR_5);
   FUNC_2(&VAR_3,
       FUNC_1(&VAR_3, VAR_0) + 1,
       VAR_0);
   return &VAR_2[VAR_6];
  }
 }
 return ((void*)0);
}
