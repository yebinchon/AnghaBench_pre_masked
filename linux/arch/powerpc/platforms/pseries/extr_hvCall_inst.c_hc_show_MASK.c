
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct hcall_stats* private; } ;
struct hcall_stats {int tb_total; scalar_t__ num_calls; int purr_total; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,unsigned long,scalar_t__,int ,...) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2;
 struct hcall_stats *VAR_4 = VAR_1->private;

 if (VAR_4[VAR_3].num_calls) {
  if (FUNC_0(VAR_0))
   FUNC_1(VAR_1, "%lu %lu %lu %lu\n", VAR_3<<2,
       VAR_4[VAR_3].num_calls,
       VAR_4[VAR_3].tb_total,
       VAR_4[VAR_3].purr_total);
  else
   FUNC_1(VAR_1, "%lu %lu %lu\n", VAR_3<<2,
       VAR_4[VAR_3].num_calls,
       VAR_4[VAR_3].tb_total);
 }

 return 0;
}
