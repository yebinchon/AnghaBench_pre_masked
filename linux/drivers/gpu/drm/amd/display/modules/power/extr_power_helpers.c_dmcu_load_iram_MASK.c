
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iram_table_v_2_2 {int dummy; } ;
struct iram_table_v_2 {int dummy; } ;
struct dmcu_iram_parameters {int dummy; } ;
struct TYPE_3__ {int abm_version; } ;
struct dmcu {TYPE_2__* funcs; TYPE_1__ dmcu_version; } ;
typedef int ram_table ;
struct TYPE_4__ {int (* load_iram ) (struct dmcu*,int,char*,int) ;int (* is_dmcu_initialized ) (struct dmcu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iram_table_v_2*,struct dmcu_iram_parameters) ;
 int FUNC_1 (struct iram_table_v_2_2*,struct dmcu_iram_parameters) ;
 int FUNC_2 (struct iram_table_v_2_2*,struct dmcu_iram_parameters) ;
 int FUNC_3 (unsigned char**,int ,int) ;
 int FUNC_4 (struct dmcu*) ;
 int FUNC_5 (struct dmcu*,int,char*,int) ;
 int FUNC_6 (struct dmcu*,int,char*,int) ;
 int FUNC_7 (struct dmcu*,int,char*,int) ;
 int FUNC_8 (struct dmcu*,int,char*,int) ;

bool FUNC_9(struct dmcu *VAR_4,
 struct dmcu_iram_parameters VAR_5)
{
 unsigned char VAR_6[VAR_3];
 bool VAR_7 = 0;

 if (VAR_4 == ((void*)0))
  return 0;

 if (!VAR_4->funcs->is_dmcu_initialized(VAR_4))
  return 1;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));

 if (VAR_4->dmcu_version.abm_version == 0x23) {
  FUNC_2((struct iram_table_v_2_2 *)VAR_6, VAR_5);

  VAR_7 = VAR_4->funcs->load_iram(
    VAR_4, 0, (char *)(&VAR_6), VAR_2);
 } else if (VAR_4->dmcu_version.abm_version == 0x22) {
  FUNC_1((struct iram_table_v_2_2 *)VAR_6, VAR_5);

  VAR_7 = VAR_4->funcs->load_iram(
    VAR_4, 0, (char *)(&VAR_6), VAR_2);
 } else {
  FUNC_0((struct iram_table_v_2 *)VAR_6, VAR_5);

  VAR_7 = VAR_4->funcs->load_iram(
    VAR_4, 0, (char *)(&VAR_6), VAR_1);

  if (VAR_7)
   VAR_7 = VAR_4->funcs->load_iram(
     VAR_4, VAR_0 + 1,
     (char *)(&VAR_6) + VAR_0 + 1,
     sizeof(VAR_6) - VAR_0 - 1);
 }

 return VAR_7;
}
