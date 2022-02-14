
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct bnxt_re_dev {int* cosq; int list; int mw_count; int mr_count; int srq_count; int cq_count; int qp_count; int qp_lock; int qp_list; struct bnxt_en_dev* en_dev; int id; struct net_device* netdev; } ;
struct bnxt_en_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int devfn; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct net_device*) ;
 struct bnxt_re_dev* FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct bnxt_re_dev *FUNC_9(struct net_device *VAR_5,
        struct bnxt_en_dev *VAR_6)
{
 struct bnxt_re_dev *VAR_7;


 VAR_7 = FUNC_4(VAR_1, VAR_4);
 if (!VAR_7) {
  FUNC_2(((void*)0), "%s: bnxt_re_dev allocation failure!",
   VAR_0);
  return ((void*)0);
 }

 VAR_7->netdev = VAR_5;
 FUNC_3(VAR_7->netdev);
 VAR_7->en_dev = VAR_6;
 VAR_7->id = VAR_7->en_dev->pdev->devfn;
 FUNC_0(&VAR_7->qp_list);
 FUNC_6(&VAR_7->qp_lock);
 FUNC_1(&VAR_7->qp_count, 0);
 FUNC_1(&VAR_7->cq_count, 0);
 FUNC_1(&VAR_7->srq_count, 0);
 FUNC_1(&VAR_7->mr_count, 0);
 FUNC_1(&VAR_7->mw_count, 0);
 VAR_7->cosq[0] = 0xFFFF;
 VAR_7->cosq[1] = 0xFFFF;

 FUNC_7(&VAR_3);
 FUNC_5(&VAR_7->list, &VAR_2);
 FUNC_8(&VAR_3);
 return VAR_7;
}
