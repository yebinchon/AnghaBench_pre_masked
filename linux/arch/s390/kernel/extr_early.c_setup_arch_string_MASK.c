
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysinfo_3_2_2 {char* manufacturer; char* type; char* model; char* model_capacity; TYPE_1__* vm; scalar_t__ count; } ;
struct sysinfo_1_1_1 {char* manufacturer; char* type; char* model; char* model_capacity; TYPE_1__* vm; scalar_t__ count; } ;
struct TYPE_2__ {char* cpi; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*,char*,char*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct sysinfo_3_2_2*,int,int,int) ;
 int VAR_3 ;

void FUNC_5(void)
{
 struct sysinfo_1_1_1 *VAR_4 = (struct sysinfo_1_1_1 *)&VAR_3;
 struct sysinfo_3_2_2 *VAR_5 = (struct sysinfo_3_2_2 *)&VAR_3;
 char VAR_6[80], VAR_7[17];

 if (FUNC_4(VAR_4, 1, 1, 1))
  return;
 FUNC_0(VAR_4->manufacturer, sizeof(VAR_4->manufacturer));
 FUNC_0(VAR_4->type, sizeof(VAR_4->type));
 FUNC_0(VAR_4->model, sizeof(VAR_4->model));
 FUNC_0(VAR_4->model_capacity, sizeof(VAR_4->model_capacity));
 FUNC_2(VAR_6, "%-16.16s %-4.4s %-16.16s %-16.16s",
  VAR_4->manufacturer, VAR_4->type,
  VAR_4->model, VAR_4->model_capacity);
 FUNC_3(VAR_6);
 if (FUNC_4(VAR_5, 3, 2, 2) == 0 && VAR_5->count) {
  FUNC_0(VAR_5->vm[0].cpi, sizeof(VAR_5->vm[0].cpi));
  FUNC_2(VAR_7, "%-16.16s", VAR_5->vm[0].cpi);
  FUNC_3(VAR_7);
 } else {
  FUNC_2(VAR_7, "%s",
   VAR_1 ? "LPAR" :
   VAR_2 ? "z/VM" :
   VAR_0 ? "KVM" : "unknown");
 }
 FUNC_1("%s (%s)", VAR_6, VAR_7);
}
