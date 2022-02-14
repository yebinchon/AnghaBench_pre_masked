
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; scalar_t__ tag; struct TYPE_6__* next; struct TYPE_6__* prev; } ;
typedef TYPE_1__ memblock_t ;
typedef int byte ;
struct TYPE_10__ {int mark; int permanent; int temp; int tempHighwater; } ;
struct TYPE_9__ {int mark; int permanent; int temp; int tempHighwater; } ;
struct TYPE_8__ {TYPE_1__ blocklist; } ;
struct TYPE_7__ {TYPE_1__ blocklist; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;

void FUNC_2( void ) {
 memblock_t *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 VAR_9 = 0;
 VAR_12 = 0;
 VAR_13 = 0;
 VAR_10 = 0;
 for (VAR_8 = VAR_4->blocklist.next ; ; VAR_8 = VAR_8->next) {
  if ( FUNC_0() != 1 ) {
   FUNC_1 ("block:%p    size:%7i    tag:%3i\n",
    (void *)VAR_8, VAR_8->size, VAR_8->tag);
  }
  if ( VAR_8->tag ) {
   VAR_9 += VAR_8->size;
   VAR_10++;
   if ( VAR_8->tag == VAR_0 ) {
    VAR_12 += VAR_8->size;
   } else if ( VAR_8->tag == VAR_1 ) {
    VAR_13 += VAR_8->size;
   }
  }

  if (VAR_8->next == &VAR_4->blocklist) {
   break;
  }
  if ( (byte *)VAR_8 + VAR_8->size != (byte *)VAR_8->next) {
   FUNC_1 ("ERROR: block size does not touch the next block\n");
  }
  if ( VAR_8->next->prev != VAR_8) {
   FUNC_1 ("ERROR: next block doesn't have proper back link\n");
  }
  if ( !VAR_8->tag && !VAR_8->next->tag ) {
   FUNC_1 ("ERROR: two consecutive free blocks\n");
  }
 }

 VAR_11 = 0;
 for (VAR_8 = VAR_7->blocklist.next ; ; VAR_8 = VAR_8->next) {
  if ( VAR_8->tag ) {
   VAR_11 += VAR_8->size;
  }

  if (VAR_8->next == &VAR_7->blocklist) {
   break;
  }
 }

 FUNC_1( "%8i bytes total hunk\n", VAR_5 );
 FUNC_1( "%8i bytes total zone\n", VAR_6 );
 FUNC_1( "\n" );
 FUNC_1( "%8i low mark\n", VAR_3.mark );
 FUNC_1( "%8i low permanent\n", VAR_3.permanent );
 if ( VAR_3.temp != VAR_3.permanent ) {
  FUNC_1( "%8i low temp\n", VAR_3.temp );
 }
 FUNC_1( "%8i low tempHighwater\n", VAR_3.tempHighwater );
 FUNC_1( "\n" );
 FUNC_1( "%8i high mark\n", VAR_2.mark );
 FUNC_1( "%8i high permanent\n", VAR_2.permanent );
 if ( VAR_2.temp != VAR_2.permanent ) {
  FUNC_1( "%8i high temp\n", VAR_2.temp );
 }
 FUNC_1( "%8i high tempHighwater\n", VAR_2.tempHighwater );
 FUNC_1( "\n" );
 FUNC_1( "%8i total hunk in use\n", VAR_3.permanent + VAR_2.permanent );
 VAR_14 = 0;
 if ( VAR_3.tempHighwater > VAR_3.permanent ) {
  VAR_14 += VAR_3.tempHighwater - VAR_3.permanent;
 }
 if ( VAR_2.tempHighwater > VAR_2.permanent ) {
  VAR_14 += VAR_2.tempHighwater - VAR_2.permanent;
 }
 FUNC_1( "%8i unused highwater\n", VAR_14 );
 FUNC_1( "\n" );
 FUNC_1( "%8i bytes in %i zone blocks\n", VAR_9, VAR_10 );
 FUNC_1( "        %8i bytes in dynamic botlib\n", VAR_12 );
 FUNC_1( "        %8i bytes in dynamic renderer\n", VAR_13 );
 FUNC_1( "        %8i bytes in dynamic other\n", VAR_9 - ( VAR_12 + VAR_13 ) );
 FUNC_1( "        %8i bytes in small Zone memory\n", VAR_11 );
}
