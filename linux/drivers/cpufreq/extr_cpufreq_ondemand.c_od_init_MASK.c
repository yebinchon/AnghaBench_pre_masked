
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct od_dbs_tuners {int powersave_bias; } ;
struct dbs_data {struct od_dbs_tuners* tuners; int io_is_busy; scalar_t__ ignore_nice_load; int sampling_down_factor; int up_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 unsigned long long FUNC_1 (int,int *) ;
 struct od_dbs_tuners* FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct dbs_data *VAR_6)
{
 struct od_dbs_tuners *VAR_7;
 u64 VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_9 = FUNC_0();
 VAR_8 = FUNC_1(VAR_9, ((void*)0));
 FUNC_3();
 if (VAR_8 != -1ULL) {

  VAR_6->up_threshold = VAR_4;
 } else {
  VAR_6->up_threshold = VAR_0;
 }

 VAR_6->sampling_down_factor = VAR_1;
 VAR_6->ignore_nice_load = 0;
 VAR_7->powersave_bias = VAR_5;
 VAR_6->io_is_busy = FUNC_4();

 VAR_6->tuners = VAR_7;
 return 0;
}
