
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int strippedName ;
struct TYPE_5__ {int name; struct TYPE_5__* next; } ;
typedef TYPE_1__ shader_t ;
struct TYPE_6__ {TYPE_1__* defaultShader; } ;


 int FUNC_0 (char const*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__** VAR_2 ;
 TYPE_2__ VAR_3 ;

shader_t *FUNC_3( const char *VAR_4 ) {
 char VAR_5[VAR_1];
 int VAR_6;
 shader_t *VAR_7;

 if ( (VAR_4==((void*)0)) || (VAR_4[0] == 0) ) {
  return VAR_3.defaultShader;
 }

 FUNC_0(VAR_4, VAR_5, sizeof(VAR_5));

 VAR_6 = FUNC_2(VAR_5, VAR_0);




 for (VAR_7=VAR_2[VAR_6]; VAR_7; VAR_7=VAR_7->next) {




  if (FUNC_1(VAR_7->name, VAR_5) == 0) {

   return VAR_7;
  }
 }

 return VAR_3.defaultShader;
}
