
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef int int32_t ;
struct TYPE_4__ {int pri; } ;
typedef TYPE_1__ collpri_t ;
struct TYPE_5__ {int * ref; } ;
typedef TYPE_2__ collchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int* VAR_8 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (scalar_t__,int) ;
 TYPE_1__* FUNC_2 (int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;

void
FUNC_5(wchar_t VAR_12)
{
 collchar_t *VAR_13;
 int32_t VAR_14;

 FUNC_4(VAR_4);
 if (VAR_9 == VAR_5) {
  int VAR_15;

  if (VAR_12 < VAR_7) {
   FUNC_0(VAR_11, "malformed range!");
   return;
  }
  while (VAR_7 < VAR_12) {






   if ((VAR_13 = FUNC_1(VAR_7, 1)) == ((void*)0)) {
    VAR_0;
    return;
   }
   for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
    collpri_t *VAR_16;
    if (((VAR_14 = VAR_8[VAR_15]) == -1) ||
        ((VAR_16 = FUNC_2(VAR_14)) == ((void*)0)) ||
        (VAR_16->pri == -1)) {
     FUNC_3(VAR_13->ref[VAR_15], VAR_10, VAR_3);
    } else {
     FUNC_3(VAR_13->ref[VAR_15], VAR_14, VAR_2);
    }
    VAR_8[VAR_15] = 0;
   }
   VAR_7++;
   VAR_10++;
  }
 }

 VAR_6 = FUNC_1(VAR_12, 1);
}
