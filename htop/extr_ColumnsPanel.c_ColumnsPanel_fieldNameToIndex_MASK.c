
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;

int FUNC_1(const char* VAR_2) {
   for (int VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
      if (FUNC_0(VAR_2, VAR_1[VAR_3].name)) {
         return VAR_3;
      }
   }
   return -1;
}
