
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iova_fq {int lock; TYPE_1__* entries; } ;
struct iova_domain {int fq_timer; int fq_timer_on; int fq_flush_start_cnt; int fq; } ;
struct TYPE_2__ {unsigned long iova_pfn; unsigned long pages; unsigned long data; int counter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct iova_fq*) ;
 unsigned int FUNC_4 (struct iova_fq*) ;
 int FUNC_5 (struct iova_domain*,struct iova_fq*) ;
 int FUNC_6 (struct iova_domain*) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 struct iova_fq* FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

void FUNC_12(struct iova_domain *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4,
  unsigned long VAR_5)
{
 struct iova_fq *VAR_6 = FUNC_9(VAR_2->fq);
 unsigned long VAR_7;
 unsigned VAR_8;

 FUNC_10(&VAR_6->lock, VAR_7);






 FUNC_5(VAR_2, VAR_6);

 if (FUNC_3(VAR_6)) {
  FUNC_6(VAR_2);
  FUNC_5(VAR_2, VAR_6);
 }

 VAR_8 = FUNC_4(VAR_6);

 VAR_6->entries[VAR_8].iova_pfn = VAR_3;
 VAR_6->entries[VAR_8].pages = VAR_4;
 VAR_6->entries[VAR_8].data = VAR_5;
 VAR_6->entries[VAR_8].counter = FUNC_0(&VAR_2->fq_flush_start_cnt);

 FUNC_11(&VAR_6->lock, VAR_7);


 if (!FUNC_2(&VAR_2->fq_timer_on) &&
     !FUNC_1(&VAR_2->fq_timer_on, 0, 1))
  FUNC_7(&VAR_2->fq_timer,
     VAR_1 + FUNC_8(VAR_0));
}
