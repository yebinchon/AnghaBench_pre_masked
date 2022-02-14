
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;
struct latency_info {int max_latency; int min_latency; int latency_sum; int interrupt_cnt; } ;


 struct latency_info VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct seq_file*,char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5, VAR_6;
 struct latency_info VAR_7 = VAR_0;

 VAR_3 = FUNC_0();

 VAR_5 = (VAR_7.max_latency * 1000000000) / VAR_3;
 VAR_6 = (VAR_7.min_latency * 1000000000) / VAR_3;
 VAR_4 = (VAR_7.latency_sum * 1000000000) / (VAR_3 * VAR_7.interrupt_cnt);

 FUNC_1(VAR_1, "cnt: %10lld, avg: %7lld ns, max: %7lld ns, min: %7lld ns\n",
     VAR_7.interrupt_cnt, VAR_4, VAR_5, VAR_6);
 return 0;
}
