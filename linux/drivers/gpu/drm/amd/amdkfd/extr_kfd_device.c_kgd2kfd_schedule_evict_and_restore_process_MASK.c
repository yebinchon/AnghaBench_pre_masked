
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct kfd_process {scalar_t__ last_eviction_seqno; unsigned long last_restore_timestamp; int eviction_work; } ;
struct dma_fence {scalar_t__ seqno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dma_fence*) ;
 unsigned long FUNC_1 () ;
 struct kfd_process* FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct kfd_process*) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct mm_struct *VAR_3,
            struct dma_fence *VAR_4)
{
 struct kfd_process *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7 = FUNC_4(VAR_2);

 if (!VAR_4)
  return -VAR_0;

 if (FUNC_0(VAR_4))
  return 0;

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return -VAR_1;

 if (VAR_4->seqno == VAR_5->last_eviction_seqno)
  goto out;

 VAR_5->last_eviction_seqno = VAR_4->seqno;




 VAR_6 = FUNC_1() - VAR_5->last_restore_timestamp;
 if (VAR_7 > VAR_6)
  VAR_7 -= VAR_6;
 else
  VAR_7 = 0;




 FUNC_5(&VAR_5->eviction_work, VAR_7);
out:
 FUNC_3(VAR_5);
 return 0;
}
