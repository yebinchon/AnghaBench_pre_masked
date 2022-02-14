
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * values; int total; } ;
typedef int RichString ;
typedef int Object ;
typedef TYPE_1__ Meter ;


 int * VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,char*) ;

__attribute__((used)) static void FUNC_3(Object* VAR_6, RichString* VAR_7) {
   char VAR_8[50];
   Meter* VAR_9 = (Meter*)VAR_6;
   FUNC_2(VAR_7, VAR_0[VAR_4], ":");
   FUNC_0(VAR_8, VAR_9->total, 50);
   FUNC_1(VAR_7, VAR_0[VAR_5], VAR_8);
   FUNC_0(VAR_8, VAR_9->values[0], 50);
   FUNC_1(VAR_7, VAR_0[VAR_4], " used:");
   FUNC_1(VAR_7, VAR_0[VAR_3], VAR_8);
   FUNC_0(VAR_8, VAR_9->values[1], 50);
   FUNC_1(VAR_7, VAR_0[VAR_4], " buffers:");
   FUNC_1(VAR_7, VAR_0[VAR_1], VAR_8);
   FUNC_0(VAR_8, VAR_9->values[2], 50);
   FUNC_1(VAR_7, VAR_0[VAR_4], " cache:");
   FUNC_1(VAR_7, VAR_0[VAR_2], VAR_8);
}
