
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* blocks; } ;
typedef TYPE_1__ base_t ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_2__ base_block_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static size_t
FUNC_1(base_t *VAR_0, bool VAR_1) {
 base_block_t *VAR_2 = VAR_0->blocks;
 FUNC_0(VAR_2 != ((void*)0));

 size_t VAR_3 = VAR_1 ? 2 : 1;
 while (VAR_2->next != ((void*)0)) {
  VAR_3++;
  VAR_2 = VAR_2->next;
 }

 return VAR_3;
}
