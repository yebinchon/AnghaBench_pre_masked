
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbs_data {struct cs_dbs_tuners* tuners; scalar_t__ ignore_nice_load; int sampling_down_factor; int up_threshold; } ;
struct cs_dbs_tuners {int freq_step; int down_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cs_dbs_tuners* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct dbs_data *VAR_6)
{
 struct cs_dbs_tuners *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_5);
 if (!VAR_7)
  return -VAR_4;

 VAR_7->down_threshold = VAR_0;
 VAR_7->freq_step = VAR_1;
 VAR_6->up_threshold = VAR_2;
 VAR_6->sampling_down_factor = VAR_3;
 VAR_6->ignore_nice_load = 0;
 VAR_6->tuners = VAR_7;

 return 0;
}
