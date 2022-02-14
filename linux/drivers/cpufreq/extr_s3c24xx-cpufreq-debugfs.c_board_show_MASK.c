
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct s3c_cpufreq_config {struct s3c_cpufreq_board* board; } ;
struct s3c_cpufreq_board {int max; int need_io; int auto_io; int refresh; } ;


 struct s3c_cpufreq_config* FUNC_0 () ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (struct seq_file*,int *) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct s3c_cpufreq_config *VAR_2;
 struct s3c_cpufreq_board *VAR_3;

 VAR_2 = FUNC_0();
 if (!VAR_2) {
  FUNC_1(VAR_0, "no configuration registered\n");
  return 0;
 }

 VAR_3 = VAR_2->board;
 if (!VAR_3) {
  FUNC_1(VAR_0, "no board definition set?\n");
  return 0;
 }

 FUNC_1(VAR_0, "SDRAM refresh %u ns\n", VAR_3->refresh);
 FUNC_1(VAR_0, "auto_io=%u\n", VAR_3->auto_io);
 FUNC_1(VAR_0, "need_io=%u\n", VAR_3->need_io);

 FUNC_2(VAR_0, &VAR_3->max);


 return 0;
}
