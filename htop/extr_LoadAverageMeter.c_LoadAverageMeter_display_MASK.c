
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
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*,int,char*,int ) ;

__attribute__((used)) static void FUNC_3(Object* VAR_4, RichString* VAR_5) {
   Meter* VAR_6 = (Meter*)VAR_4;
   char VAR_7[20];
   FUNC_2(VAR_7, sizeof(VAR_7), "%.2f ", VAR_6->values[0]);
   FUNC_1(VAR_5, VAR_0[VAR_3], VAR_7);
   FUNC_2(VAR_7, sizeof(VAR_7), "%.2f ", VAR_6->values[1]);
   FUNC_0(VAR_5, VAR_0[VAR_2], VAR_7);
   FUNC_2(VAR_7, sizeof(VAR_7), "%.2f ", VAR_6->values[2]);
   FUNC_0(VAR_5, VAR_0[VAR_1], VAR_7);
}
