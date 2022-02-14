
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int tag; struct TYPE_3__* next; struct TYPE_3__* prev; } ;
typedef TYPE_1__ memblock_t ;
typedef int byte ;
struct TYPE_4__ {TYPE_1__ blocklist; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_1( void ) {
 memblock_t *VAR_2;

 for (VAR_2 = VAR_1->blocklist.next ; ; VAR_2 = VAR_2->next) {
  if (VAR_2->next == &VAR_1->blocklist) {
   break;
  }
  if ( (byte *)VAR_2 + VAR_2->size != (byte *)VAR_2->next)
   FUNC_0( VAR_0, "Z_CheckHeap: block size does not touch the next block" );
  if ( VAR_2->next->prev != VAR_2) {
   FUNC_0( VAR_0, "Z_CheckHeap: next block doesn't have proper back link" );
  }
  if ( !VAR_2->tag && !VAR_2->next->tag ) {
   FUNC_0( VAR_0, "Z_CheckHeap: two consecutive free blocks" );
  }
 }
}
