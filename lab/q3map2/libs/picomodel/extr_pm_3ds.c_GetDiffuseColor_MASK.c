
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int* picoColor_t ;
struct TYPE_4__ {scalar_t__ shader; } ;
typedef TYPE_1__ T3dsLoaderPers ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_3( T3dsLoaderPers *VAR_0 ){




 picoColor_t VAR_1;

 VAR_1[0] = FUNC_0( VAR_0 );
 VAR_1[1] = FUNC_0( VAR_0 );
 VAR_1[2] = FUNC_0( VAR_0 );
 VAR_1[3] = 255;


 if ( VAR_0->shader ) {
  FUNC_1( VAR_0->shader,VAR_1 );
 }




 return 1;
}
