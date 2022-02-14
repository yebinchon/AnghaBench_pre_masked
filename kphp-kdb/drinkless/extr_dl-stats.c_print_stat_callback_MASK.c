
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* desc; char* age; char* sum; char* avg; char* max_val; char* max_desc; } ;
typedef TYPE_1__ stat_text_t ;


 int FUNC_0 (int ,char*,char*,char*,char*,char*,char*,char*) ;
 int VAR_0 ;

void FUNC_1 (stat_text_t *VAR_1) {
  FUNC_0 (VAR_0, "%s %s [sum = %s] [avg = %s] [max = %s|%s]\n", VAR_1->desc, VAR_1->age, VAR_1->sum, VAR_1->avg, VAR_1->max_val, VAR_1->max_desc);
}
