
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct TYPE_6__ {int ps; int port_num; int device; TYPE_2__ route; } ;
struct rdma_id_private {scalar_t__ qkey; TYPE_3__ id; } ;
struct ib_sa_mcmember_rec {int qkey; int mgid; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int *,struct ib_sa_mcmember_rec*) ;

__attribute__((used)) static int FUNC_3(struct rdma_id_private *VAR_2, u32 VAR_3)
{
 struct ib_sa_mcmember_rec VAR_4;
 int VAR_5 = 0;

 if (VAR_2->qkey) {
  if (VAR_3 && VAR_2->qkey != VAR_3)
   return -VAR_0;
  return 0;
 }

 if (VAR_3) {
  VAR_2->qkey = VAR_3;
  return 0;
 }

 switch (VAR_2->id.ps) {
 case 128:
 case 130:
  VAR_2->qkey = VAR_1;
  break;
 case 129:
  FUNC_1(&VAR_2->id.route.addr.dev_addr, &VAR_4.mgid);
  VAR_5 = FUNC_2(VAR_2->id.device,
          VAR_2->id.port_num, &VAR_4.mgid,
          &VAR_4);
  if (!VAR_5)
   VAR_2->qkey = FUNC_0(VAR_4.qkey);
  break;
 default:
  break;
 }
 return VAR_5;
}
