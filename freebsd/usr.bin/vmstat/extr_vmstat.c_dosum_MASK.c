
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nchstats {long ncs_goodhits; long ncs_neghits; long ncs_badhits; long ncs_falsehits; long ncs_miss; long ncs_long; long ncs_pass2; } ;
typedef int lnchstats ;
struct TYPE_3__ {int v_page_size; int v_free_count; int v_user_wire_count; int v_wire_count; int v_laundry_count; int v_inactive_count; int v_active_count; int v_pfree; int v_dfree; int v_tfree; int v_rforkpages; int v_vforkpages; int v_forkpages; int v_kthreadpages; int v_io_faults; int v_vm_faults; int v_intrans; int v_ozfod; int v_zfod; int v_cow_optim; int v_cow_faults; int v_reactivated; int v_pdshortfalls; int v_pdpages; int v_pdwakeups; int v_vnodepgsout; int v_vnodeout; int v_vnodepgsin; int v_vnodein; int v_swappgsout; int v_swapout; int v_swappgsin; int v_swapin; int v_rforks; int v_vforks; int v_forks; int v_kthreads; int v_syscall; int v_trap; int v_soft; int v_intr; int v_swtch; } ;


 int FUNC_0 (long,long) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int * VAR_1 ;
 int FUNC_2 (int ,struct nchstats*,int) ;
 int FUNC_3 (char*,struct nchstats*,size_t*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 struct nchstats VAR_3;
 size_t VAR_4;
 long VAR_5;

 FUNC_1(&VAR_2);
 FUNC_7("summary-statistics");
 FUNC_5("{:context-switches/%9u} {N:cpu context switches}\n",
     VAR_2.v_swtch);
 FUNC_5("{:interrupts/%9u} {N:device interrupts}\n",
     VAR_2.v_intr);
 FUNC_5("{:software-interrupts/%9u} {N:software interrupts}\n",
     VAR_2.v_soft);
 FUNC_5("{:traps/%9u} {N:traps}\n", VAR_2.v_trap);
 FUNC_5("{:system-calls/%9u} {N:system calls}\n",
     VAR_2.v_syscall);
 FUNC_5("{:kernel-threads/%9u} {N:kernel threads created}\n",
     VAR_2.v_kthreads);
 FUNC_5("{:forks/%9u} {N: fork() calls}\n", VAR_2.v_forks);
 FUNC_5("{:vforks/%9u} {N:vfork() calls}\n",
     VAR_2.v_vforks);
 FUNC_5("{:rforks/%9u} {N:rfork() calls}\n",
     VAR_2.v_rforks);
 FUNC_5("{:swap-ins/%9u} {N:swap pager pageins}\n",
     VAR_2.v_swapin);
 FUNC_5("{:swap-in-pages/%9u} {N:swap pager pages paged in}\n",
     VAR_2.v_swappgsin);
 FUNC_5("{:swap-outs/%9u} {N:swap pager pageouts}\n",
     VAR_2.v_swapout);
 FUNC_5("{:swap-out-pages/%9u} {N:swap pager pages paged out}\n",
     VAR_2.v_swappgsout);
 FUNC_5("{:vnode-page-ins/%9u} {N:vnode pager pageins}\n",
     VAR_2.v_vnodein);
 FUNC_5("{:vnode-page-in-pages/%9u} {N:vnode pager pages paged in}\n",
     VAR_2.v_vnodepgsin);
 FUNC_5("{:vnode-page-outs/%9u} {N:vnode pager pageouts}\n",
     VAR_2.v_vnodeout);
 FUNC_5("{:vnode-page-out-pages/%9u} {N:vnode pager pages paged out}\n",
     VAR_2.v_vnodepgsout);
 FUNC_5("{:page-daemon-wakeups/%9u} {N:page daemon wakeups}\n",
     VAR_2.v_pdwakeups);
 FUNC_5("{:page-daemon-pages/%9u} {N:pages examined by the page "
     "daemon}\n", VAR_2.v_pdpages);
 FUNC_5("{:page-reclamation-shortfalls/%9u} {N:clean page reclamation "
     "shortfalls}\n", VAR_2.v_pdshortfalls);
 FUNC_5("{:reactivated/%9u} {N:pages reactivated by the page daemon}\n",
     VAR_2.v_reactivated);
 FUNC_5("{:copy-on-write-faults/%9u} {N:copy-on-write faults}\n",
     VAR_2.v_cow_faults);
 FUNC_5("{:copy-on-write-optimized-faults/%9u} {N:copy-on-write "
     "optimized faults}\n", VAR_2.v_cow_optim);
 FUNC_5("{:zero-fill-pages/%9u} {N:zero fill pages zeroed}\n",
     VAR_2.v_zfod);
 FUNC_5("{:zero-fill-prezeroed/%9u} {N:zero fill pages prezeroed}\n",
     VAR_2.v_ozfod);
 FUNC_5("{:intransit-blocking/%9u} {N:intransit blocking page faults}\n",
     VAR_2.v_intrans);
 FUNC_5("{:total-faults/%9u} {N:total VM faults taken}\n",
     VAR_2.v_vm_faults);
 FUNC_5("{:faults-requiring-io/%9u} {N:page faults requiring I\\/O}\n",
     VAR_2.v_io_faults);
 FUNC_5("{:faults-from-thread-creation/%9u} {N:pages affected by "
     "kernel thread creation}\n", VAR_2.v_kthreadpages);
 FUNC_5("{:faults-from-fork/%9u} {N:pages affected by  fork}()\n",
     VAR_2.v_forkpages);
 FUNC_5("{:faults-from-vfork/%9u} {N:pages affected by vfork}()\n",
     VAR_2.v_vforkpages);
 FUNC_5("{:pages-rfork/%9u} {N:pages affected by rfork}()\n",
     VAR_2.v_rforkpages);
 FUNC_5("{:pages-freed/%9u} {N:pages freed}\n",
     VAR_2.v_tfree);
 FUNC_5("{:pages-freed-by-daemon/%9u} {N:pages freed by daemon}\n",
     VAR_2.v_dfree);
 FUNC_5("{:pages-freed-on-exit/%9u} {N:pages freed by exiting processes}\n",
     VAR_2.v_pfree);
 FUNC_5("{:active-pages/%9u} {N:pages active}\n",
     VAR_2.v_active_count);
 FUNC_5("{:inactive-pages/%9u} {N:pages inactive}\n",
     VAR_2.v_inactive_count);
 FUNC_5("{:laundry-pages/%9u} {N:pages in the laundry queue}\n",
     VAR_2.v_laundry_count);
 FUNC_5("{:wired-pages/%9u} {N:pages wired down}\n",
     VAR_2.v_wire_count);
 FUNC_5("{:virtual-user-wired-pages/%9lu} {N:virtual user pages wired "
     "down}\n", VAR_2.v_user_wire_count);
 FUNC_5("{:free-pages/%9u} {N:pages free}\n",
     VAR_2.v_free_count);
 FUNC_5("{:bytes-per-page/%9u} {N:bytes per page}\n", VAR_2.v_page_size);
 if (VAR_1 != ((void*)0)) {
  FUNC_2(VAR_0, &VAR_3, sizeof(VAR_3));
 } else {
  VAR_4 = sizeof(VAR_3);
  FUNC_3("vfs.cache.nchstats", &VAR_3, &VAR_4);
  if (VAR_4 != sizeof(VAR_3))
   FUNC_6(1, "vfs.cache.nchstats size mismatch");
 }
 VAR_5 = VAR_3.ncs_goodhits + VAR_3.ncs_neghits +
     VAR_3.ncs_badhits + VAR_3.ncs_falsehits +
     VAR_3.ncs_miss + VAR_3.ncs_long;
 FUNC_5("{:total-name-lookups/%9ld} {N:total name lookups}\n",
     VAR_5);
 FUNC_5("{P:/%9s} {N:cache hits} "
     "({:positive-cache-hits/%ld}% pos + "
     "{:negative-cache-hits/%ld}% {N:neg}) "
     "system {:cache-hit-percent/%ld}% per-directory\n",
     "", FUNC_0(VAR_3.ncs_goodhits, VAR_5),
     FUNC_0(VAR_3.ncs_neghits, VAR_5),
     FUNC_0(VAR_3.ncs_pass2, VAR_5));
 FUNC_5("{P:/%9s} {L:deletions} {:deletions/%ld}%, "
     "{L:falsehits} {:false-hits/%ld}%, "
     "{L:toolong} {:too-long/%ld}%\n", "",
     FUNC_0(VAR_3.ncs_badhits, VAR_5),
     FUNC_0(VAR_3.ncs_falsehits, VAR_5),
     FUNC_0(VAR_3.ncs_long, VAR_5));
 FUNC_4("summary-statistics");
}
