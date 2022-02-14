
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sge_uld_txq_info {struct sge_uld_txq* uldtxq; } ;
struct TYPE_3__ {int lock; } ;
struct sge_uld_txq {TYPE_1__ sendq; scalar_t__ full; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct sge_uld_txq_info** uld_txq_info; } ;
struct adapter {TYPE_2__ sge; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, unsigned int VAR_2)
{
 struct adapter *VAR_3 = FUNC_2(VAR_1);
 struct sge_uld_txq_info *VAR_4 =
  VAR_3->sge.uld_txq_info[VAR_0];
 struct sge_uld_txq *VAR_5;
 int VAR_6 = 0;

 FUNC_0();
 VAR_5 = &VAR_4->uldtxq[VAR_2];
 FUNC_3(&VAR_5->sendq.lock);
 if (VAR_5->full)
  VAR_6 = -1;
 FUNC_4(&VAR_5->sendq.lock);
 FUNC_1();
 return VAR_6;
}
