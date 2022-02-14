
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct icc_node {int peak_bw; int avg_bw; int name; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, struct icc_node *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(VAR_0, "%-30s %12u %12u\n",
     VAR_1->name, VAR_1->avg_bw, VAR_1->peak_bw);
}
