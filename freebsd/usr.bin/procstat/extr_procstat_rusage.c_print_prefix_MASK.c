
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int ki_comm; int ki_tid; int ki_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void
FUNC_1(struct kinfo_proc *VAR_2)
{

 FUNC_0("{d:process_id/%5d/%d} ", VAR_2->ki_pid);
 if ((VAR_1 & VAR_0) != 0)
  FUNC_0("{d:thread_id/%6d/%d} ", VAR_2->ki_tid);
 FUNC_0("{d:command/%-16s/%s} ", VAR_2->ki_comm);
}
