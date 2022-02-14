
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffer; } ;
typedef TYPE_1__ drawBufferCommand_t ;
struct TYPE_4__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,double,int) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_2 ;

const void *FUNC_3( const void *VAR_3 ) {
 const drawBufferCommand_t *VAR_4;

 VAR_4 = (const drawBufferCommand_t *)VAR_3;

 FUNC_2( VAR_4->buffer );


 if ( VAR_2->integer ) {
  FUNC_1( 1, 0, 0.5, 1 );
  FUNC_0( VAR_0 | VAR_1 );
 }

 return (const void *)(VAR_4 + 1);
}
