
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int* buffer; int* curpos; int len; } ;


 scalar_t__ FUNC_0 (char) ;
 TYPE_1__ VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static int FUNC_1( qboolean VAR_2 ){
 int VAR_3 = 0;

 if ( VAR_0.buffer == 0 ) {
  return 0;
 }

 if ( ( VAR_0.curpos - VAR_0.buffer ) == VAR_0.len ) {
  return 0;
 }


 while ( ( ( VAR_0.curpos - VAR_0.buffer ) < VAR_0.len ) &&
   ( *VAR_0.curpos <= 32 ) )
 {
  VAR_0.curpos++;
 }

 while ( ( VAR_0.curpos - VAR_0.buffer ) < VAR_0.len )
 {
  VAR_1[VAR_3] = *VAR_0.curpos;

  VAR_0.curpos++;
  VAR_3++;

  if ( ( FUNC_0( VAR_1[VAR_3 - 1] ) && !VAR_2 ) ||
    ( ( VAR_1[VAR_3 - 1] == '\n' ) || ( VAR_1[VAR_3 - 1] == '\r' ) ) ) {
   VAR_1[VAR_3 - 1] = 0;
   break;
  }
 }

 VAR_1[VAR_3] = 0;

 return 1;
}
