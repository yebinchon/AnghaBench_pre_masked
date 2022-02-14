
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ seamlessCubeMap; scalar_t__ vertexArrayObject; scalar_t__ framebufferObject; } ;
struct TYPE_9__ {int glStateBits; scalar_t__ vertexAttribsEnabled; int * currentVao; int faceCullFront; int faceCulling; scalar_t__ storedGlState; } ;
struct TYPE_8__ {int value; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 TYPE_5__ VAR_15 ;
 TYPE_4__ VAR_16 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (float,float,float,float) ;
 int FUNC_7 (float) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 TYPE_3__* VAR_17 ;
 TYPE_2__* VAR_18 ;
 TYPE_1__* VAR_19 ;

void FUNC_15( void )
{
 FUNC_7( 1.0f );

 FUNC_8(VAR_9);

 FUNC_2();

 if (VAR_15.framebufferObject)
  FUNC_0();

 FUNC_3( VAR_19->string );


 FUNC_9( VAR_11 );




 VAR_16.glStateBits = VAR_2 | VAR_1;
 VAR_16.storedGlState = 0;
 VAR_16.faceCulling = VAR_0;
 VAR_16.faceCullFront = VAR_9;

 FUNC_1();

 if (VAR_15.vertexArrayObject)
  FUNC_5(0);

 FUNC_4(VAR_3, 0);
 FUNC_4(VAR_7, 0);
 VAR_16.currentVao = ((void*)0);
 VAR_16.vertexAttribsEnabled = 0;

 FUNC_13 (VAR_10, VAR_8);
 FUNC_10( VAR_14 );
 FUNC_11( VAR_6 );
 FUNC_12( VAR_12 );
 FUNC_11( VAR_5 );
 FUNC_11( VAR_4 );

 if (VAR_15.seamlessCubeMap)
  FUNC_12(VAR_13);


 FUNC_14( VAR_17->value, VAR_18->value );

 FUNC_6( 0.0f, 0.0f, 0.0f, 1.0f );
}
