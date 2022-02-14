
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int swapBuffersCommand_t ;
struct TYPE_24__ {int finishCalled; } ;
struct TYPE_23__ {int integer; } ;
struct TYPE_22__ {scalar_t__ integer; } ;
struct TYPE_21__ {scalar_t__ integer; } ;
struct TYPE_20__ {scalar_t__ integer; } ;
struct TYPE_19__ {unsigned char* (* Hunk_AllocateTempMemory ) (int) ;int (* Hunk_FreeTempMemory ) (unsigned char*) ;} ;
struct TYPE_18__ {scalar_t__ numIndexes; } ;
struct TYPE_17__ {int * renderFbo; int * msaaResolveFbo; } ;
struct TYPE_16__ {long c_overDraw; } ;
struct TYPE_15__ {void* projection2D; void* framePostProcessed; TYPE_1__ pc; } ;
struct TYPE_14__ {int vidWidth; int vidHeight; } ;
struct TYPE_13__ {scalar_t__ framebufferObject; } ;


 int FUNC_0 (int *,int *,int *,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_12__ VAR_4 ;
 TYPE_11__ VAR_5 ;
 TYPE_10__ VAR_6 ;
 TYPE_9__ VAR_7 ;
 void* VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int,int,int ,int ,unsigned char*) ;
 TYPE_8__* VAR_9 ;
 TYPE_7__* VAR_10 ;
 TYPE_6__* VAR_11 ;
 TYPE_5__* VAR_12 ;
 TYPE_4__ VAR_13 ;
 unsigned char* FUNC_7 (int) ;
 int FUNC_8 (unsigned char*) ;
 TYPE_3__ VAR_14 ;
 TYPE_2__ VAR_15 ;

const void *FUNC_9( const void *VAR_16 ) {
 const swapBuffersCommand_t *VAR_17;


 if ( VAR_14.numIndexes ) {
  FUNC_3();
 }


 if ( VAR_12->integer ) {
  FUNC_4();
 }

 VAR_17 = (const swapBuffersCommand_t *)VAR_16;



 if ( VAR_11->integer ) {
  int VAR_18;
  long VAR_19 = 0;
  unsigned char *VAR_20;

  VAR_20 = VAR_13.Hunk_AllocateTempMemory( VAR_5.vidWidth * VAR_5.vidHeight );
  FUNC_6( 0, 0, VAR_5.vidWidth, VAR_5.vidHeight, VAR_2, VAR_3, VAR_20 );

  for ( VAR_18 = 0; VAR_18 < VAR_5.vidWidth * VAR_5.vidHeight; VAR_18++ ) {
   VAR_19 += VAR_20[VAR_18];
  }

  VAR_4.pc.c_overDraw += VAR_19;
  VAR_13.Hunk_FreeTempMemory( VAR_20 );
 }

 if (VAR_6.framebufferObject)
 {
  if (!VAR_4.framePostProcessed)
  {
   if (VAR_15.msaaResolveFbo && VAR_10->integer)
   {

    FUNC_0(VAR_15.renderFbo, ((void*)0), VAR_15.msaaResolveFbo, ((void*)0), VAR_0, VAR_1);
    FUNC_0(VAR_15.msaaResolveFbo, ((void*)0), ((void*)0), ((void*)0), VAR_0, VAR_1);
   }
   else if (VAR_15.renderFbo)
   {
    FUNC_0(VAR_15.renderFbo, ((void*)0), ((void*)0), ((void*)0), VAR_0, VAR_1);
   }
  }
 }

 if ( VAR_9->integer == 1 && !VAR_7.finishCalled ) {
  FUNC_5();
 }

 FUNC_2( "***************** RB_SwapBuffers *****************\n\n\n" );

 FUNC_1();

 VAR_4.framePostProcessed = VAR_8;
 VAR_4.projection2D = VAR_8;

 return (const void *)(VAR_17 + 1);
}
