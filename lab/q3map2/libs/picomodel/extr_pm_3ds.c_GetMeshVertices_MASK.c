
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef double* picoVec3_t ;
struct TYPE_5__ {int surface; } ;
typedef TYPE_1__ T3dsLoaderPers ;


 double FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int,double*) ;
 int FUNC_4 (char*,double,...) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5( T3dsLoaderPers *VAR_1 ){
 int VAR_2;
 int VAR_3;


 VAR_2 = FUNC_1( VAR_1 );





 for ( VAR_3 = 0; VAR_3 < VAR_2; VAR_3++ )
 {
  picoVec3_t VAR_4;
  VAR_4[0] = FUNC_0( VAR_1 );
  VAR_4[1] = FUNC_0( VAR_1 );
  VAR_4[2] = FUNC_0( VAR_1 );


  FUNC_3( VAR_1->surface,VAR_3,VAR_4 );
  FUNC_2( VAR_1->surface,0,VAR_3,VAR_0 );




 }

 return 1;
}
