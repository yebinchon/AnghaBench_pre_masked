
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int swapBuffersCommand_t ;
struct TYPE_10__ {long c_overDraw; } ;
struct TYPE_18__ {int projection2D; TYPE_1__ pc; } ;
struct TYPE_17__ {int vidWidth; int vidHeight; } ;
struct TYPE_16__ {int finishCalled; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {unsigned char* (* Hunk_AllocateTempMemory ) (int) ;int (* Hunk_FreeTempMemory ) (unsigned char*) ;} ;
struct TYPE_11__ {scalar_t__ numIndexes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_9__ VAR_2 ;
 TYPE_8__ VAR_3 ;
 TYPE_7__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int,int,int ,int ,unsigned char*) ;
 TYPE_6__* VAR_6 ;
 TYPE_5__* VAR_7 ;
 TYPE_4__* VAR_8 ;
 TYPE_3__ VAR_9 ;
 unsigned char* FUNC_6 (int) ;
 int FUNC_7 (unsigned char*) ;
 TYPE_2__ VAR_10 ;

const void *FUNC_8( const void *VAR_11 ) {
 const swapBuffersCommand_t *VAR_12;


 if ( VAR_10.numIndexes ) {
  FUNC_2();
 }


 if ( VAR_8->integer ) {
  FUNC_3();
 }

 VAR_12 = (const swapBuffersCommand_t *)VAR_11;



 if ( VAR_7->integer ) {
  int VAR_13;
  long VAR_14 = 0;
  unsigned char *VAR_15;

  VAR_15 = VAR_9.Hunk_AllocateTempMemory( VAR_3.vidWidth * VAR_3.vidHeight );
  FUNC_5( 0, 0, VAR_3.vidWidth, VAR_3.vidHeight, VAR_0, VAR_1, VAR_15 );

  for ( VAR_13 = 0; VAR_13 < VAR_3.vidWidth * VAR_3.vidHeight; VAR_13++ ) {
   VAR_14 += VAR_15[VAR_13];
  }

  VAR_2.pc.c_overDraw += VAR_14;
  VAR_9.Hunk_FreeTempMemory( VAR_15 );
 }


 if ( VAR_6->integer == 1 && !VAR_4.finishCalled ) {
  FUNC_4();
 }

 FUNC_1( "***************** RB_SwapBuffers *****************\n\n\n" );

 FUNC_0();

 VAR_2.projection2D = VAR_5;

 return (const void *)(VAR_12 + 1);
}
