
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct seq_file {int dummy; } ;
struct TYPE_4__ {int retired; int cycles; int width; int generic; } ;
struct TYPE_5__ {TYPE_1__ pal_perf_mon_info_s; } ;
typedef TYPE_2__ pal_perf_mon_info_u_t ;


 int FUNC_0 (struct seq_file*,int*,int) ;
 scalar_t__ FUNC_1 (int*,TYPE_2__*) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct seq_file*,char) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_0)
{
 u64 VAR_1[16];
 pal_perf_mon_info_u_t VAR_2;

 if (FUNC_1(VAR_1, &VAR_2) != 0)
  return 0;

 FUNC_2(VAR_0,
     "PMC/PMD pairs                 : %d\n"
     "Counter width                 : %d bits\n"
     "Cycle event number            : %d\n"
     "Retired event number          : %d\n"
     "Implemented PMC               : ",
     VAR_2.pal_perf_mon_info_s.generic,
     VAR_2.pal_perf_mon_info_s.width,
     VAR_2.pal_perf_mon_info_s.cycles,
     VAR_2.pal_perf_mon_info_s.retired);

 FUNC_0(VAR_0, VAR_1, 256);
 FUNC_4(VAR_0, "\nImplemented PMD               : ");
 FUNC_0(VAR_0, VAR_1+4, 256);
 FUNC_4(VAR_0, "\nCycles count capable          : ");
 FUNC_0(VAR_0, VAR_1+8, 256);
 FUNC_4(VAR_0, "\nRetired bundles count capable : ");
 FUNC_0(VAR_0, VAR_1+12, 256);
 FUNC_3(VAR_0, '\n');
 return 0;
}
