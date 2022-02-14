
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cpu_info {int cpu_mhz_static; int cpu_mhz_dynamic; } ;


 int VAR_0 ;
 struct cpu_info* FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1, unsigned long VAR_2)
{
 struct cpu_info *VAR_3 = FUNC_0(&VAR_0, VAR_2);

 FUNC_1(VAR_1, "cpu MHz dynamic : %d\n", VAR_3->cpu_mhz_dynamic);
 FUNC_1(VAR_1, "cpu MHz static  : %d\n", VAR_3->cpu_mhz_static);
}
