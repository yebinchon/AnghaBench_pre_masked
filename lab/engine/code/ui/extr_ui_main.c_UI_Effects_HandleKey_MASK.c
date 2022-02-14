
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int effectsColor; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static qboolean FUNC_2(int VAR_4, float *VAR_5, int VAR_6) {
 int VAR_7 = FUNC_0(VAR_6);
 if (VAR_7 != 0) {
  VAR_2.effectsColor += VAR_7;

  if( VAR_2.effectsColor > 6 ) {
   VAR_2.effectsColor = 0;
  } else if (VAR_2.effectsColor < 0) {
   VAR_2.effectsColor = 6;
  }

  FUNC_1( "color1", VAR_3[VAR_2.effectsColor] );
  return VAR_1;
 }
 return VAR_0;
}
