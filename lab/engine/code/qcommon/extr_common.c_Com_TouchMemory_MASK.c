
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; struct TYPE_5__* next; scalar_t__ tag; } ;
typedef TYPE_1__ memblock_t ;
struct TYPE_8__ {int permanent; } ;
struct TYPE_7__ {int permanent; } ;
struct TYPE_6__ {TYPE_1__ blocklist; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_3( void ) {
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;
 unsigned VAR_9;
 memblock_t *VAR_10;

 FUNC_2();

 VAR_5 = FUNC_1();

 VAR_9 = 0;

 VAR_8 = VAR_1.permanent >> 2;
 for ( VAR_7 = 0 ; VAR_7 < VAR_8 ; VAR_7+=64 ) {
  VAR_9 += ((int *)VAR_3)[VAR_7];
 }

 VAR_7 = ( VAR_4 - VAR_0.permanent ) >> 2;
 VAR_8 = VAR_0.permanent >> 2;
 for ( ; VAR_7 < VAR_8 ; VAR_7+=64 ) {
  VAR_9 += ((int *)VAR_3)[VAR_7];
 }

 for (VAR_10 = VAR_2->blocklist.next ; ; VAR_10 = VAR_10->next) {
  if ( VAR_10->tag ) {
   VAR_8 = VAR_10->size >> 2;
   for ( VAR_7 = 0 ; VAR_7 < VAR_8 ; VAR_7+=64 ) {
    VAR_9 += ((int *)VAR_10)[VAR_7];
   }
  }
  if ( VAR_10->next == &VAR_2->blocklist ) {
   break;
  }
 }

 VAR_6 = FUNC_1();

 FUNC_0( "Com_TouchMemory: %i msec\n", VAR_6 - VAR_5 );
}
