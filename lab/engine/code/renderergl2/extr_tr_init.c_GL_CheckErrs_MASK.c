
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int s ;
struct TYPE_4__ {scalar_t__ integer; } ;
struct TYPE_3__ {int (* Error ) (int ,char*,char*,char*,int) ;} ;


 int FUNC_0 (char*,int,char*,int) ;
 int VAR_0 ;



 int VAR_1 ;



 int FUNC_1 () ;
 TYPE_2__* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*,char*,int) ;

void FUNC_4( char *VAR_4, int VAR_5 ) {
 int VAR_6;
 char VAR_7[64];

 VAR_6 = FUNC_1();
 if ( VAR_6 == VAR_1 ) {
  return;
 }
 if ( VAR_2->integer ) {
  return;
 }
 switch( VAR_6 ) {
  case 133:
   FUNC_2( VAR_7, "GL_INVALID_ENUM" );
   break;
  case 131:
   FUNC_2( VAR_7, "GL_INVALID_VALUE" );
   break;
  case 132:
   FUNC_2( VAR_7, "GL_INVALID_OPERATION" );
   break;
  case 129:
   FUNC_2( VAR_7, "GL_STACK_OVERFLOW" );
   break;
  case 128:
   FUNC_2( VAR_7, "GL_STACK_UNDERFLOW" );
   break;
  case 130:
   FUNC_2( VAR_7, "GL_OUT_OF_MEMORY" );
   break;
  default:
   FUNC_0( VAR_7, sizeof(VAR_7), "%i", VAR_6);
   break;
 }

 VAR_3.Error( VAR_0, "GL_CheckErrors: %s in %s at line %d", VAR_7 , VAR_4, VAR_5);
}
