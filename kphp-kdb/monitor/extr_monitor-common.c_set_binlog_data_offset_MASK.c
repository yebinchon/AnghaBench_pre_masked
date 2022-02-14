
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_monitor_info {long long updated_at; int binlog_data_offset; } ;
struct proc_data {struct proc_monitor_info* minfo; } ;


 int FUNC_0 (struct proc_data*) ;
 int FUNC_1 (struct proc_monitor_info*) ;
 int FUNC_2 (struct proc_monitor_info*) ;
 long long FUNC_3 (int) ;

int FUNC_4 (struct proc_data *VAR_0, int VAR_1) {
  FUNC_0 (VAR_0);

  long long VAR_2 = FUNC_3 (1000000);

  int VAR_3;
  for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
    struct proc_monitor_info *VAR_4 = VAR_0->minfo + VAR_3;
    FUNC_1 (VAR_4);
    VAR_4->updated_at = VAR_2;
    VAR_4->binlog_data_offset = VAR_1;
    FUNC_2 (VAR_4);
  }

  return 0;
}
