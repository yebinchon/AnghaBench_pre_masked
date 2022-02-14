
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {char* string; } ;
typedef TYPE_1__ pc_token_t ;
struct TYPE_6__ {int (* func ) (int *,int) ;} ;
typedef TYPE_2__ keywordHash_t ;
typedef int itemDef_t ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int ,char*) ;
 int FUNC_2 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,TYPE_1__*) ;

qboolean FUNC_5(int VAR_3, itemDef_t *VAR_4) {
 pc_token_t VAR_5;
 keywordHash_t *VAR_6;


 if (!FUNC_4(VAR_3, &VAR_5))
  return VAR_1;
 if (*VAR_5.string != '{') {
  return VAR_1;
 }
 while ( 1 ) {
  if (!FUNC_4(VAR_3, &VAR_5)) {
   FUNC_2(VAR_3, "end of file inside menu item");
   return VAR_1;
  }

  if (*VAR_5.string == '}') {
   FUNC_0( VAR_4 );
   return VAR_2;
  }

  VAR_6 = FUNC_1(VAR_0, VAR_5.string);
  if (!VAR_6) {
   FUNC_2(VAR_3, "unknown menu item keyword %s", VAR_5.string);
   continue;
  }
  if ( !VAR_6->func(VAR_4, VAR_3) ) {
   FUNC_2(VAR_3, "couldn't parse menu item keyword %s", VAR_5.string);
   return VAR_1;
  }
 }
 return VAR_1;
}
