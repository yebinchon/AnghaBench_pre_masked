
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; TYPE_1__* pack; } ;
typedef TYPE_2__ searchpath_t ;
struct TYPE_4__ {scalar_t__ checksum; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0( void )
{
 searchpath_t *VAR_6;
 int VAR_7;
 searchpath_t **VAR_8,
  **VAR_9;

 VAR_1 = VAR_4;


 if ( !VAR_0 )
  return;

 VAR_8 = &VAR_2;
 for ( VAR_7 = 0 ; VAR_7 < VAR_0 ; VAR_7++ ) {
  VAR_9 = VAR_8;
  for (VAR_6 = *VAR_8; VAR_6; VAR_6 = VAR_6->next) {

   if (VAR_6->pack && VAR_3[VAR_7] == VAR_6->pack->checksum) {
    VAR_1 = VAR_5;

    *VAR_9 = VAR_6->next;
    VAR_6->next = *VAR_8;
    *VAR_8 = VAR_6;

    VAR_8 = &VAR_6->next;
    break;
   }
   VAR_9 = &VAR_6->next;
  }
 }
}
