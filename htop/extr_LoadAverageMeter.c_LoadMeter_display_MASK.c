
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_2__ {int * values; } ;
typedef int RichString ;
typedef int Object ;
typedef TYPE_1__ Meter ;


 int * VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_2(Object* VAR_2, RichString* VAR_3) {
   Meter* VAR_4 = (Meter*)VAR_2;
   char VAR_5[20];
   FUNC_1(VAR_5, sizeof(VAR_5), "%.2f ", ((Meter*)VAR_4)->values[0]);
   FUNC_0(VAR_3, VAR_0[VAR_1], VAR_5);
}
