
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ picoShader_t ;



char *FUNC_0( picoShader_t *VAR_0 ){
 if ( VAR_0 == ((void*)0) ) {
  return ((void*)0);
 }
 if ( VAR_0->name == ((void*)0) ) {
  return (char*) "";
 }
 return VAR_0->name;
}
