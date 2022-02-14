
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_6__ {scalar_t__ param; scalar_t__* values; TYPE_2__* pl; } ;
struct TYPE_5__ {scalar_t__ cpuCount; TYPE_1__* settings; } ;
struct TYPE_4__ {scalar_t__ detailedCPUTime; } ;
typedef int RichString ;
typedef int Object ;
typedef TYPE_3__ Meter ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int * VAR_16 ;
 size_t VAR_17 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(Object* VAR_18, RichString* VAR_19) {
   char VAR_20[50];
   Meter* VAR_21 = (Meter*)VAR_18;
   FUNC_1(VAR_19);
   if (VAR_21->param > VAR_21->pl->cpuCount) {
      FUNC_0(VAR_19, VAR_16[VAR_17], "absent");
      return;
   }
   FUNC_2(VAR_20, sizeof(VAR_20), "%5.1f%% ", VAR_21->values[VAR_9]);
   FUNC_0(VAR_19, VAR_16[VAR_17], ":");
   FUNC_0(VAR_19, VAR_16[VAR_13], VAR_20);
   if (VAR_21->pl->settings->detailedCPUTime) {
      FUNC_2(VAR_20, sizeof(VAR_20), "%5.1f%% ", VAR_21->values[VAR_7]);
      FUNC_0(VAR_19, VAR_16[VAR_17], "sy:");
      FUNC_0(VAR_19, VAR_16[VAR_3], VAR_20);
      FUNC_2(VAR_20, sizeof(VAR_20), "%5.1f%% ", VAR_21->values[VAR_8]);
      FUNC_0(VAR_19, VAR_16[VAR_17], "ni:");
      FUNC_0(VAR_19, VAR_16[VAR_12], VAR_20);
      FUNC_2(VAR_20, sizeof(VAR_20), "%5.1f%% ", VAR_21->values[VAR_6]);
      FUNC_0(VAR_19, VAR_16[VAR_17], "hi:");
      FUNC_0(VAR_19, VAR_16[VAR_2], VAR_20);
      FUNC_2(VAR_20, sizeof(VAR_20), "%5.1f%% ", VAR_21->values[VAR_10]);
      FUNC_0(VAR_19, VAR_16[VAR_17], "si:");
      FUNC_0(VAR_19, VAR_16[VAR_14], VAR_20);
      if (VAR_21->values[VAR_11]) {
         FUNC_2(VAR_20, sizeof(VAR_20), "%5.1f%% ", VAR_21->values[VAR_11]);
         FUNC_0(VAR_19, VAR_16[VAR_17], "st:");
         FUNC_0(VAR_19, VAR_16[VAR_15], VAR_20);
      }
      if (VAR_21->values[VAR_4]) {
         FUNC_2(VAR_20, sizeof(VAR_20), "%5.1f%% ", VAR_21->values[VAR_4]);
         FUNC_0(VAR_19, VAR_16[VAR_17], "gu:");
         FUNC_0(VAR_19, VAR_16[VAR_0], VAR_20);
      }
      FUNC_2(VAR_20, sizeof(VAR_20), "%5.1f%% ", VAR_21->values[VAR_5]);
      FUNC_0(VAR_19, VAR_16[VAR_17], "wa:");
      FUNC_0(VAR_19, VAR_16[VAR_1], VAR_20);
   } else {
      FUNC_2(VAR_20, sizeof(VAR_20), "%5.1f%% ", VAR_21->values[VAR_7]);
      FUNC_0(VAR_19, VAR_16[VAR_17], "sys:");
      FUNC_0(VAR_19, VAR_16[VAR_3], VAR_20);
      FUNC_2(VAR_20, sizeof(VAR_20), "%5.1f%% ", VAR_21->values[VAR_8]);
      FUNC_0(VAR_19, VAR_16[VAR_17], "low:");
      FUNC_0(VAR_19, VAR_16[VAR_12], VAR_20);
      if (VAR_21->values[VAR_6]) {
         FUNC_2(VAR_20, sizeof(VAR_20), "%5.1f%% ", VAR_21->values[VAR_6]);
         FUNC_0(VAR_19, VAR_16[VAR_17], "vir:");
         FUNC_0(VAR_19, VAR_16[VAR_0], VAR_20);
      }
   }
}
