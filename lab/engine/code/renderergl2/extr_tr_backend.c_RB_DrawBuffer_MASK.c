
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buffer; } ;
typedef TYPE_1__ drawBufferCommand_t ;
struct TYPE_8__ {scalar_t__ framebufferObject; } ;
struct TYPE_7__ {scalar_t__ integer; } ;
struct TYPE_6__ {scalar_t__ numIndexes; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,double,int) ;
 int FUNC_4 (int ) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;

const void *FUNC_5( const void *VAR_5 ) {
 const drawBufferCommand_t *VAR_6;

 VAR_6 = (const drawBufferCommand_t *)VAR_5;


 if(VAR_4.numIndexes)
  FUNC_1();

 if (VAR_2.framebufferObject)
  FUNC_0(((void*)0));

 FUNC_4( VAR_6->buffer );


 if ( VAR_3->integer ) {
  FUNC_3( 1, 0, 0.5, 1 );
  FUNC_2( VAR_0 | VAR_1 );
 }

 return (const void *)(VAR_6 + 1);
}
