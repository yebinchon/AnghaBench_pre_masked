
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {int maxclients; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_2 (char*,char*) ;

int FUNC_3(char *VAR_2) {
 int VAR_3;
 char VAR_4[VAR_0];

 for (VAR_3 = 0; VAR_3 < VAR_1.maxclients; VAR_3++) {
  FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
  if (!FUNC_1(VAR_4, VAR_2)) return VAR_3;
 }
 for (VAR_3 = 0; VAR_3 < VAR_1.maxclients; VAR_3++) {
  FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
  if (FUNC_2(VAR_4, VAR_2)) return VAR_3;
 }
 return -1;
}
