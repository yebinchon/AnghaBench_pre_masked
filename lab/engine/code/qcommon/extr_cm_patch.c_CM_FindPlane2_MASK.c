
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int signbits; int plane; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,float*,int*) ;
 int FUNC_1 (float*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (float*,int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

int FUNC_4(float VAR_5[4], int *VAR_6) {
 int VAR_7;


 for ( VAR_7 = 0 ; VAR_7 < VAR_2 ; VAR_7++ ) {
  if (FUNC_0(&VAR_3[VAR_7], VAR_5, VAR_6)) return VAR_7;
 }


 if ( VAR_2 == VAR_1 ) {
  FUNC_2( VAR_0, "MAX_PATCH_PLANES" );
 }

 FUNC_3( VAR_5, VAR_3[VAR_2].plane );
 VAR_3[VAR_2].signbits = FUNC_1( VAR_5 );

 VAR_2++;

 *VAR_6 = VAR_4;

 return VAR_2-1;
}
