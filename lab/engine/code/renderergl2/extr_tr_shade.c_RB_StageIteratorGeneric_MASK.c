
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_28__ {TYPE_5__* shader; scalar_t__ fogNum; TYPE_4__** xstages; scalar_t__ dlightBits; scalar_t__ pshadowBits; scalar_t__ useInternalVao; int numIndexes; int numVertexes; } ;
typedef TYPE_6__ shaderCommands_t ;
typedef int qboolean ;
struct TYPE_30__ {int integer; } ;
struct TYPE_29__ {scalar_t__ lightallShader; } ;
struct TYPE_27__ {scalar_t__ cullType; scalar_t__ sort; int surfaceFlags; int numUnfoggedPasses; scalar_t__ polygonOffset; scalar_t__ fogPass; int name; } ;
struct TYPE_26__ {scalar_t__ glslShaderGroup; int glslShaderIndex; } ;
struct TYPE_25__ {int flags; scalar_t__ isMirror; } ;
struct TYPE_24__ {scalar_t__ mirrored; } ;
struct TYPE_23__ {int c_staticVaoDraws; } ;
struct TYPE_22__ {TYPE_3__ viewParms; scalar_t__ depthFill; TYPE_2__* currentEntity; TYPE_1__ pc; } ;
struct TYPE_21__ {scalar_t__ framebufferObject; } ;
struct TYPE_20__ {scalar_t__ integer; } ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {scalar_t__ integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (unsigned int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_14__ VAR_10 ;
 TYPE_13__ VAR_11 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 TYPE_12__* VAR_12 ;
 TYPE_11__* VAR_13 ;
 TYPE_10__* VAR_14 ;
 TYPE_9__* VAR_15 ;
 TYPE_6__ VAR_16 ;
 TYPE_7__ VAR_17 ;
 int FUNC_13 (char*,int ) ;

void FUNC_14( void )
{
 shaderCommands_t *VAR_18;
 unsigned int VAR_19 = 0;

 VAR_18 = &VAR_16;

 if (!VAR_18->numVertexes || !VAR_18->numIndexes)
 {
  return;
 }

 if (VAR_16.useInternalVao)
 {
  FUNC_6();
 }

 VAR_19 = FUNC_5( VAR_18 );

 if (VAR_16.useInternalVao)
 {
  FUNC_10(VAR_19);
 }
 else
 {
  VAR_10.pc.c_staticVaoDraws++;
 }




 if ( VAR_14->integer )
 {


  FUNC_2( FUNC_13("--- RB_StageIteratorGeneric( %s ) ---\n", VAR_16.shader->name) );
 }




 if (VAR_18->shader->cullType == VAR_2)
 {
  FUNC_1( VAR_2 );
 }
 else
 {
  qboolean VAR_20 = (VAR_18->shader->cullType == VAR_1);

  if ( VAR_10.viewParms.flags & VAR_8 )
   VAR_20 = !VAR_20;

  if ( VAR_10.viewParms.isMirror )
   VAR_20 = !VAR_20;

  if ( VAR_10.currentEntity && VAR_10.currentEntity->mirrored )
   VAR_20 = !VAR_20;

  if (VAR_20)
   FUNC_1( VAR_1 );
  else
   FUNC_1( VAR_0 );
 }


 if ( VAR_18->shader->polygonOffset )
 {
  FUNC_12( VAR_3 );
 }




 if (VAR_10.depthFill)
 {
  FUNC_8( VAR_18 );




  if ( VAR_18->shader->polygonOffset )
  {
   FUNC_11( VAR_3 );
  }

  return;
 }




 if (VAR_10.viewParms.flags & VAR_9)
 {
  if ( VAR_18->shader->sort == VAR_5 )
  {
   FUNC_9( VAR_18 );
  }



  if ( VAR_18->shader->polygonOffset )
  {
   FUNC_11( VAR_3 );
  }

  return;
 }





 FUNC_8( VAR_18 );




 if (VAR_11.framebufferObject && VAR_15->integer == 4 && VAR_16.pshadowBits
  && VAR_16.shader->sort <= VAR_5 && !(VAR_16.shader->surfaceFlags & (VAR_6 | VAR_7) ) ) {
  FUNC_4();
 }





 if ( VAR_16.dlightBits && VAR_16.shader->sort <= VAR_5 && VAR_13->integer == 0
  && !(VAR_16.shader->surfaceFlags & (VAR_6 | VAR_7) ) ) {
  if (VAR_16.shader->numUnfoggedPasses == 1 && VAR_16.xstages[0]->glslShaderGroup == VAR_17.lightallShader
   && (VAR_16.xstages[0]->glslShaderIndex & VAR_4) && VAR_12->integer)
  {
   FUNC_0();
  }
  else
  {
   FUNC_3();
  }
 }




 if ( VAR_16.fogNum && VAR_16.shader->fogPass ) {
  FUNC_7();
 }




 if ( VAR_18->shader->polygonOffset )
 {
  FUNC_11( VAR_3 );
 }
}
