
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ handle; char* bank; char* device; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_0(u16 VAR_2, const char **VAR_3, const char **VAR_4)
{
 int VAR_5;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2 == VAR_0[VAR_5].handle) {
   *VAR_3 = VAR_0[VAR_5].bank;
   *VAR_4 = VAR_0[VAR_5].device;
   break;
  }
 }
}
