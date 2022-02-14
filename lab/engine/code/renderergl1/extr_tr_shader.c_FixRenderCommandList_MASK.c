
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int swapBuffersCommand_t ;
typedef int stretchPicCommand_t ;
typedef int shader_t ;
typedef int setColorCommand_t ;
struct TYPE_5__ {void* cmds; } ;
typedef TYPE_1__ renderCommandList_t ;
struct TYPE_6__ {int numDrawSurfs; TYPE_3__* drawSurfs; } ;
typedef TYPE_2__ drawSurfsCommand_t ;
struct TYPE_7__ {int sort; } ;
typedef TYPE_3__ drawSurf_t ;
typedef int drawBufferCommand_t ;
struct TYPE_8__ {TYPE_1__ commands; } ;


 int VAR_0 ;
 void* FUNC_0 (void const*,int) ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_1 (int,int*,int **,int*,int*) ;
 TYPE_4__* VAR_3 ;

__attribute__((used)) static void FUNC_2( int VAR_4 ) {
 renderCommandList_t *VAR_5 = &VAR_3->commands;

 if( VAR_5 ) {
  const void *VAR_6 = VAR_5->cmds;

  while ( 1 ) {
   VAR_6 = FUNC_0(VAR_6, sizeof(void *));

   switch ( *(const int *)VAR_6 ) {
   case 130:
    {
    const setColorCommand_t *VAR_7 = (const setColorCommand_t *)VAR_6;
    VAR_6 = (const void *)(VAR_7 + 1);
    break;
    }
   case 129:
    {
    const stretchPicCommand_t *VAR_8 = (const stretchPicCommand_t *)VAR_6;
    VAR_6 = (const void *)(VAR_8 + 1);
    break;
    }
   case 132:
    {
    int VAR_9;
    drawSurf_t *VAR_10;
    shader_t *VAR_11;
    int VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    const drawSurfsCommand_t *VAR_16 = (const drawSurfsCommand_t *)VAR_6;

    for( VAR_9 = 0, VAR_10 = VAR_16->drawSurfs; VAR_9 < VAR_16->numDrawSurfs; VAR_9++, VAR_10++ ) {
     FUNC_1( VAR_10->sort, &VAR_13, &VAR_11, &VAR_12, &VAR_14 );
                    VAR_15 = (( VAR_10->sort >> VAR_2 ) & (VAR_0-1));
     if( VAR_15 >= VAR_4 ) {
      VAR_15++;
      VAR_10->sort = (VAR_15 << VAR_2) | VAR_13 | ( VAR_12 << VAR_1 ) | (int)VAR_14;
     }
    }
    VAR_6 = (const void *)(VAR_16 + 1);
    break;
    }
   case 133:
    {
    const drawBufferCommand_t *VAR_17 = (const drawBufferCommand_t *)VAR_6;
    VAR_6 = (const void *)(VAR_17 + 1);
    break;
    }
   case 128:
    {
    const swapBuffersCommand_t *VAR_18 = (const swapBuffersCommand_t *)VAR_6;
    VAR_6 = (const void *)(VAR_18 + 1);
    break;
    }
   case 131:
   default:
    return;
   }
  }
 }
}
