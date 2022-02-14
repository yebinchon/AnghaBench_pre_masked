
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {int maxclients; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,char*,int) ;

int FUNC_4(void) {
 int VAR_4, VAR_5;
 char VAR_6[VAR_1];

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3.maxclients; VAR_4++) {
  FUNC_3(VAR_0+VAR_4, VAR_6, sizeof(VAR_6));

  if (!FUNC_2(VAR_6) || !FUNC_2(FUNC_0(VAR_6, "n"))) continue;

  if (FUNC_1(FUNC_0(VAR_6, "t")) == VAR_2) continue;

  VAR_5++;
 }
 return VAR_5;
}
