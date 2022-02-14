
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shader; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_4__ {TYPE_1__* si; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_1( const void *VAR_1, const void *VAR_2 ){
 shaderInfo_t *VAR_3, *VAR_4;



 VAR_3 = VAR_0[ *( (int*) VAR_1 ) ].si;
 VAR_4 = VAR_0[ *( (int*) VAR_2 ) ].si;


 if ( VAR_3 == ((void*)0) ) {
  return -1;
 }
 if ( VAR_4 == ((void*)0) ) {
  return 1;
 }


 return FUNC_0( VAR_3->shader, VAR_4->shader );
}
