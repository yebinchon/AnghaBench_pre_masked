
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int pdt_entries; int pdt_size; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct seq_file*,char*,int ) ;

void FUNC_1(struct seq_file *VAR_3)
{
 if (VAR_2 == VAR_0)
  return;

 FUNC_0(VAR_3, "PDT_max_entries: %7lu\n",
   VAR_1.pdt_size);
 FUNC_0(VAR_3, "PDT_cur_entries: %7lu\n",
   VAR_1.pdt_entries);
}
