
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rdma_sq_sge {void* length; void* l_key; int addr; } ;
struct TYPE_3__ {int pbl; } ;
struct qedr_qp {TYPE_1__ sq; } ;
struct ib_send_wr {int num_sge; TYPE_2__* sg_list; } ;
struct TYPE_4__ {scalar_t__ length; scalar_t__ lkey; int addr; } ;


 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (scalar_t__) ;
 struct rdma_sq_sge* FUNC_2 (int *) ;

__attribute__((used)) static u32 FUNC_3(struct qedr_qp *VAR_0, u8 *VAR_1,
    const struct ib_send_wr *VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_sge; VAR_4++) {
  struct rdma_sq_sge *VAR_5 = FUNC_2(&VAR_0->sq.pbl);

  FUNC_0(VAR_5->addr, VAR_2->sg_list[VAR_4].addr);
  VAR_5->l_key = FUNC_1(VAR_2->sg_list[VAR_4].lkey);
  VAR_5->length = FUNC_1(VAR_2->sg_list[VAR_4].length);
  VAR_3 += VAR_2->sg_list[VAR_4].length;
 }

 if (VAR_1)
  *VAR_1 += VAR_2->num_sge;

 return VAR_3;
}
