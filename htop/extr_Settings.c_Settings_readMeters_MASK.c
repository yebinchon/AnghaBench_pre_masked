
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* columns; } ;
struct TYPE_4__ {char** names; } ;
typedef TYPE_2__ Settings ;


 char** FUNC_0 (char*,char,int*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(Settings* VAR_0, char* VAR_1, int VAR_2) {
   char* VAR_3 = FUNC_1(VAR_1);
   int VAR_4;
   char** VAR_5 = FUNC_0(VAR_3, ' ', &VAR_4);
   FUNC_2(VAR_3);
   VAR_0->columns[VAR_2].names = VAR_5;
}
