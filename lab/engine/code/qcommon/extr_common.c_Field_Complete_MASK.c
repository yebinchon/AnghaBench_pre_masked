
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int * buffer; void* cursor; } ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int ,int) ;
 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 (int *) ;

__attribute__((used)) static qboolean FUNC_4( void )
{
 int VAR_6;

 if( VAR_2 == 0 )
  return VAR_4;

 VAR_6 = FUNC_3( VAR_0->buffer ) - FUNC_3( VAR_1 );

 FUNC_2( &VAR_0->buffer[ VAR_6 ], VAR_5,
  sizeof( VAR_0->buffer ) - VAR_6 );

 VAR_0->cursor = FUNC_3( VAR_0->buffer );

 if( VAR_2 == 1 )
 {
  FUNC_1( VAR_0->buffer, sizeof( VAR_0->buffer ), " " );
  VAR_0->cursor++;
  return VAR_4;
 }

 FUNC_0( "]%s\n", VAR_0->buffer );

 return VAR_3;
}
