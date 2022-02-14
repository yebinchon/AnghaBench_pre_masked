
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {int maxclients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (scalar_t__,char*,int) ;

int FUNC_4(char *VAR_3) {
 int VAR_4;
 char VAR_5[VAR_1];

 for (VAR_4 = 0; VAR_4 < VAR_2.maxclients; VAR_4++) {
  FUNC_3(VAR_0+VAR_4, VAR_5, sizeof(VAR_5));
  FUNC_1( VAR_5 );
  if (!FUNC_2(FUNC_0(VAR_5, "n"), VAR_3)) return VAR_4;
 }
 return -1;
}
