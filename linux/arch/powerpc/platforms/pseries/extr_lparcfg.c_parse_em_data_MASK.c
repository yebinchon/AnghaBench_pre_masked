
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct seq_file*,char*,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_4)
{
 unsigned long VAR_5[VAR_3];

 if (FUNC_0(VAR_0) &&
     FUNC_1(VAR_1, VAR_5) == VAR_2)
  FUNC_2(VAR_4, "power_mode_data=%016lx\n", VAR_5[0]);
}
