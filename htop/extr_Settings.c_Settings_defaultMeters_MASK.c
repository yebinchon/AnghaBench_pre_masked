
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cpuCount; TYPE_1__* columns; } ;
struct TYPE_4__ {int len; void** modes; void** names; } ;
typedef TYPE_2__ Settings ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (int,int) ;
 void* FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(Settings* VAR_2) {
   int VAR_3[] = { 3, 3 };
   if (VAR_2->cpuCount > 4) {
      VAR_3[1]++;
   }
   for (int VAR_4 = 0; VAR_4 < 2; VAR_4++) {
      VAR_2->columns[VAR_4].names = FUNC_0(VAR_3[VAR_4] + 1, sizeof(char*));
      VAR_2->columns[VAR_4].modes = FUNC_0(VAR_3[VAR_4], sizeof(int));
      VAR_2->columns[VAR_4].len = VAR_3[VAR_4];
   }

   int VAR_5 = 0;
   if (VAR_2->cpuCount > 8) {
      VAR_2->columns[0].names[0] = FUNC_1("LeftCPUs2");
      VAR_2->columns[0].modes[0] = VAR_0;
      VAR_2->columns[1].names[VAR_5] = FUNC_1("RightCPUs2");
      VAR_2->columns[1].modes[VAR_5++] = VAR_0;
   } else if (VAR_2->cpuCount > 4) {
      VAR_2->columns[0].names[0] = FUNC_1("LeftCPUs");
      VAR_2->columns[0].modes[0] = VAR_0;
      VAR_2->columns[1].names[VAR_5] = FUNC_1("RightCPUs");
      VAR_2->columns[1].modes[VAR_5++] = VAR_0;
   } else {
      VAR_2->columns[0].names[0] = FUNC_1("AllCPUs");
      VAR_2->columns[0].modes[0] = VAR_0;
   }
   VAR_2->columns[0].names[1] = FUNC_1("Memory");
   VAR_2->columns[0].modes[1] = VAR_0;
   VAR_2->columns[0].names[2] = FUNC_1("Swap");
   VAR_2->columns[0].modes[2] = VAR_0;

   VAR_2->columns[1].names[VAR_5] = FUNC_1("Tasks");
   VAR_2->columns[1].modes[VAR_5++] = VAR_1;
   VAR_2->columns[1].names[VAR_5] = FUNC_1("LoadAverage");
   VAR_2->columns[1].modes[VAR_5++] = VAR_1;
   VAR_2->columns[1].names[VAR_5] = FUNC_1("Uptime");
   VAR_2->columns[1].modes[VAR_5++] = VAR_1;
}
