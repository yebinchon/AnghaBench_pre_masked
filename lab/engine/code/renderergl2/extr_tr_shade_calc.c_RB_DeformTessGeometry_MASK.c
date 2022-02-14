
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int deformation; } ;
typedef TYPE_2__ deformStage_t ;
struct TYPE_14__ {int numDeforms; TYPE_2__* deforms; } ;
struct TYPE_10__ {int * text; } ;
struct TYPE_13__ {TYPE_1__ refdef; } ;
struct TYPE_12__ {TYPE_5__* shader; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_5__*) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;

void FUNC_9( void ) {
 int VAR_2;
 deformStage_t *VAR_3;

 if(!FUNC_8(VAR_1.shader))
 {

  return;
 }

 for ( VAR_2 = 0 ; VAR_2 < VAR_1.shader->numDeforms ; VAR_2++ ) {
  VAR_3 = &VAR_1.shader->deforms[ VAR_2 ];

  switch ( VAR_3->deformation ) {
        case 139:
            break;
  case 138:
   FUNC_4( VAR_3 );
   break;
  case 128:
   FUNC_5( VAR_3 );
   break;
  case 141:
   FUNC_3( VAR_3 );
   break;
  case 140:
   FUNC_6( VAR_3 );
   break;
  case 137:
   FUNC_7();
   break;
  case 143:
   FUNC_1();
   break;
  case 142:
   FUNC_0();
   break;
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
   FUNC_2( VAR_0.refdef.text[VAR_3->deformation - 136] );
   break;
  }
 }
}
