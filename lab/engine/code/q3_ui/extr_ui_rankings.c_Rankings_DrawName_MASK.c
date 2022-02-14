
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buffer; int cursor; } ;
struct TYPE_5__ {TYPE_1__ field; } ;
typedef TYPE_2__ menufield_s ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;

void FUNC_4( void* VAR_0 )
{
 menufield_s *VAR_1;
 int VAR_2;
 char* VAR_3;

 VAR_1 = (menufield_s*)VAR_0;


 for( VAR_3 = VAR_1->field.buffer; *VAR_3 != '\0'; VAR_3++ )
 {

  if( !( ( (*VAR_3) >= '0' && (*VAR_3) <= '9') || FUNC_1(*VAR_3)) )
  {
   *VAR_3 = '\0';
  }
 }


 FUNC_0( VAR_1->field.buffer );
 VAR_2 = FUNC_3( VAR_1->field.buffer );
 if( VAR_1->field.cursor > VAR_2 )
 {
  VAR_1->field.cursor = VAR_2;
 }

 FUNC_2( VAR_1 );
}
