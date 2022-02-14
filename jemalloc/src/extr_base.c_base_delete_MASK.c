
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_hooks_t ;
struct TYPE_7__ {TYPE_2__* blocks; } ;
typedef TYPE_1__ base_t ;
struct TYPE_8__ {int size; struct TYPE_8__* next; } ;
typedef TYPE_2__ base_block_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int ,TYPE_2__*,int ) ;

void
FUNC_3(tsdn_t *VAR_0, base_t *VAR_1) {
 extent_hooks_t *VAR_2 = FUNC_0(VAR_1);
 base_block_t *VAR_3 = VAR_1->blocks;
 do {
  base_block_t *VAR_4 = VAR_3;
  VAR_3 = VAR_4->next;
  FUNC_2(VAR_0, VAR_2, FUNC_1(VAR_1), VAR_4,
      VAR_4->size);
 } while (VAR_3 != ((void*)0));
}
