
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct hws_qsi_info_block {int dsdes; scalar_t__ ad; int bsdes; scalar_t__ as; int cpu_speed; int max_sampl_rate; int min_sampl_rate; } ;
typedef int si ;


 int FUNC_0 (struct hws_qsi_info_block*,int ,int) ;
 scalar_t__ FUNC_1 (struct hws_qsi_info_block*) ;
 int FUNC_2 (struct seq_file*,char*,int ,...) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0)
{
 struct hws_qsi_info_block VAR_1;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 if (FUNC_1(&VAR_1))
  return;

 if (!VAR_1.as && !VAR_1.ad)
  return;

 FUNC_2(VAR_0, "CPU-MF: Sampling facility: min_rate=%lu max_rate=%lu"
     " cpu_speed=%u\n", VAR_1.min_sampl_rate, VAR_1.max_sampl_rate,
     VAR_1.cpu_speed);
 if (VAR_1.as)
  FUNC_2(VAR_0, "CPU-MF: Sampling facility: mode=basic"
      " sample_size=%u\n", VAR_1.bsdes);
 if (VAR_1.ad)
  FUNC_2(VAR_0, "CPU-MF: Sampling facility: mode=diagnostic"
      " sample_size=%u\n", VAR_1.dsdes);
}
