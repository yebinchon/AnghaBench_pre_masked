
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* texEnv; size_t currenttmu; } ;
struct TYPE_3__ {int (* Error ) (int ,char*,int) ;} ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,int ,int const) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ,char*,int) ;

void FUNC_2( int VAR_5 )
{
 if ( VAR_5 == VAR_3.texEnv[VAR_3.currenttmu] )
 {
  return;
 }

 VAR_3.texEnv[VAR_3.currenttmu] = VAR_5;


 switch ( VAR_5 )
 {
 case 129:
  FUNC_0( VAR_1, VAR_2, 129 );
  break;
 case 128:
  FUNC_0( VAR_1, VAR_2, 128 );
  break;
 case 130:
  FUNC_0( VAR_1, VAR_2, 130 );
  break;
 case 131:
  FUNC_0( VAR_1, VAR_2, 131 );
  break;
 default:
  VAR_4.Error( VAR_0, "GL_TexEnv: invalid env '%d' passed", VAR_5 );
  break;
 }
}
