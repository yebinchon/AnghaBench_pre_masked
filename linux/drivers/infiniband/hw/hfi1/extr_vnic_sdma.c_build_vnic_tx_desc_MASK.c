
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct vnic_txreq {int plen; int pbc_val; int txreq; TYPE_1__* skb; } ;
struct sdma_engine {int dd; } ;
struct TYPE_2__ {int len; } ;


 int FUNC_0 (struct sdma_engine*,struct vnic_txreq*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,int) ;
 int FUNC_3 (int *,int ,int,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct sdma_engine *VAR_1,
         struct vnic_txreq *VAR_2,
         u64 VAR_3)
{
 int VAR_4 = 0;
 u16 VAR_5 = 2 << 2;

 VAR_4 = FUNC_3(
  &VAR_2->txreq,
  0,
  VAR_5 + VAR_2->skb->len + VAR_2->plen,
  0,
  0,
  ((void*)0),
  0,
  VAR_0);
 if (FUNC_4(VAR_4))
  goto bail_txadd;


 VAR_2->pbc_val = FUNC_1(VAR_3);
 VAR_4 = FUNC_2(
  VAR_1->dd,
  &VAR_2->txreq,
  &VAR_2->pbc_val,
  VAR_5);
 if (FUNC_4(VAR_4))
  goto bail_txadd;


 VAR_4 = FUNC_0(VAR_1, VAR_2);
bail_txadd:
 return VAR_4;
}
