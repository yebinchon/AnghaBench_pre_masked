
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tag; scalar_t__ size; scalar_t__ id; TYPE_3__* prev; TYPE_3__* next; } ;
struct TYPE_6__ {int size; TYPE_1__ blocklist; scalar_t__ used; TYPE_3__* rover; } ;
typedef TYPE_2__ memzone_t ;
struct TYPE_7__ {int size; int id; scalar_t__ tag; TYPE_1__* next; TYPE_1__* prev; } ;
typedef TYPE_3__ memblock_t ;
typedef int byte ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( memzone_t *VAR_1, int VAR_2 ) {
 memblock_t *VAR_3;



 VAR_1->blocklist.next = VAR_1->blocklist.prev = VAR_3 =
  (memblock_t *)( (byte *)VAR_1 + sizeof(memzone_t) );
 VAR_1->blocklist.tag = 1;
 VAR_1->blocklist.id = 0;
 VAR_1->blocklist.size = 0;
 VAR_1->rover = VAR_3;
 VAR_1->size = VAR_2;
 VAR_1->used = 0;

 VAR_3->prev = VAR_3->next = &VAR_1->blocklist;
 VAR_3->tag = 0;
 VAR_3->id = VAR_0;
 VAR_3->size = VAR_2 - sizeof(memzone_t);
}
