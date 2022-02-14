
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdma_txreq {scalar_t__ num_desc; } ;
struct TYPE_4__ {int seqcount; } ;
struct sdma_engine {scalar_t__ desc_avail; TYPE_1__ head_lock; } ;
struct iowait_work {TYPE_2__* iow; } ;
typedef int seqcount_t ;
struct TYPE_6__ {scalar_t__ sleep; } ;
struct TYPE_5__ {int (* sleep ) (struct sdma_engine*,struct iowait_work*,struct sdma_txreq*,unsigned int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct iowait_work*) ;
 unsigned int FUNC_1 (int const*) ;
 void* FUNC_2 (struct sdma_engine*) ;
 int FUNC_3 (struct sdma_engine*,struct iowait_work*,struct sdma_txreq*,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(
 struct sdma_engine *VAR_2,
 struct iowait_work *VAR_3,
 struct sdma_txreq *VAR_4,
 bool VAR_5)
{
 int VAR_6;

 VAR_2->desc_avail = FUNC_2(VAR_2);
 if (VAR_4->num_desc <= VAR_2->desc_avail)
  return -VAR_0;

 if (VAR_3 && FUNC_0(VAR_3)->sleep) {
  unsigned VAR_7;

  VAR_7 = FUNC_1(
   (const seqcount_t *)&VAR_2->head_lock.seqcount);
  VAR_6 = VAR_3->iow->sleep(VAR_2, VAR_3, VAR_4, VAR_7, VAR_5);
  if (VAR_6 == -VAR_0)
   VAR_2->desc_avail = FUNC_2(VAR_2);
 } else {
  VAR_6 = -VAR_1;
 }
 return VAR_6;
}
