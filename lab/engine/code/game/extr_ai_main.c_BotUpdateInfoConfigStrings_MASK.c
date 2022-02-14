
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_5__ {int inuse; } ;
struct TYPE_4__ {int maxclients; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (char*,char*) ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,char*,int) ;

void FUNC_4(void) {
 int VAR_4;
 char VAR_5[VAR_1];

 for (VAR_4 = 0; VAR_4 < VAR_3.maxclients; VAR_4++) {

  if ( !VAR_2[VAR_4] || !VAR_2[VAR_4]->inuse )
   continue;

  FUNC_3(VAR_0+VAR_4, VAR_5, sizeof(VAR_5));

  if (!FUNC_2(VAR_5) || !FUNC_2(FUNC_1(VAR_5, "n")))
   continue;
  FUNC_0(VAR_2[VAR_4]);
 }
}
