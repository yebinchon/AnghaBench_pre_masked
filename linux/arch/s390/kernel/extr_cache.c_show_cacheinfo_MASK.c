
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cpu_cacheinfo {int num_leaves; struct cacheinfo* info_list; } ;
struct cacheinfo {int level; size_t type; int size; int coherency_line_size; int ways_of_associativity; scalar_t__ disable_sysfs; } ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct cpu_cacheinfo* FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,...) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (int) ;

void FUNC_5(struct seq_file *VAR_2)
{
 struct cpu_cacheinfo *VAR_3;
 struct cacheinfo *VAR_4;
 int VAR_5;

 if (!FUNC_4(34))
  return;
 VAR_3 = FUNC_1(FUNC_0(VAR_1));
 for (VAR_5 = 0; VAR_5 < VAR_3->num_leaves; VAR_5++) {
  VAR_4 = VAR_3->info_list + VAR_5;
  FUNC_2(VAR_2, "cache%-11d: ", VAR_5);
  FUNC_2(VAR_2, "level=%d ", VAR_4->level);
  FUNC_2(VAR_2, "type=%s ", VAR_0[VAR_4->type]);
  FUNC_2(VAR_2, "scope=%s ",
      VAR_4->disable_sysfs ? "Shared" : "Private");
  FUNC_2(VAR_2, "size=%dK ", VAR_4->size >> 10);
  FUNC_2(VAR_2, "line_size=%u ", VAR_4->coherency_line_size);
  FUNC_2(VAR_2, "associativity=%d", VAR_4->ways_of_associativity);
  FUNC_3(VAR_2, "\n");
 }
}
