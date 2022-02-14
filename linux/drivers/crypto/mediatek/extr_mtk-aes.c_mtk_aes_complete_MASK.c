
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_cryp {int dummy; } ;
struct mtk_aes_rec {int queue_task; TYPE_1__* areq; int flags; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct mtk_cryp *VAR_1,
       struct mtk_aes_rec *VAR_2,
       int VAR_3)
{
 VAR_2->flags &= ~VAR_0;
 VAR_2->areq->complete(VAR_2->areq, VAR_3);

 FUNC_1(&VAR_2->queue_task);
 return VAR_3;
}
