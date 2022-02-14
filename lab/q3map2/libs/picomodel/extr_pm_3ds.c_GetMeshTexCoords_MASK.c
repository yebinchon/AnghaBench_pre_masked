
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef double* picoVec2_t ;
struct TYPE_5__ {int * surface; } ;
typedef TYPE_1__ T3dsLoaderPers ;


 double FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,int,double*) ;
 int FUNC_3 (char*,double,...) ;

__attribute__((used)) static int FUNC_4( T3dsLoaderPers *VAR_0 ){
 int VAR_1;
 int VAR_2;


 VAR_1 = FUNC_1( VAR_0 );





 for ( VAR_2 = 0; VAR_2 < VAR_1; VAR_2++ )
 {
  picoVec2_t VAR_3;
  VAR_3[0] = FUNC_0( VAR_0 );
  VAR_3[1] = -FUNC_0( VAR_0 );


  if ( VAR_0->surface == ((void*)0) ) {
   continue;
  }


  FUNC_2( VAR_0->surface,0,VAR_2,VAR_3 );




 }

 return 1;
}
