
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int local_inv; void* local_to; void* local_len; void* local_stag; void* rem_to; void* rem_stag; scalar_t__* reserved; int rdmaop; } ;
union t3_wr {TYPE_1__ read; } ;
typedef int u8 ;
struct t3_rdma_read_wr {int dummy; } ;
struct ib_send_wr {int num_sge; scalar_t__ opcode; TYPE_2__* sg_list; } ;
struct TYPE_6__ {int remote_addr; int rkey; } ;
struct TYPE_5__ {int addr; int length; int lkey; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (struct ib_send_wr const*) ;

__attribute__((used)) static int FUNC_3(union t3_wr *VAR_3, const struct ib_send_wr *VAR_4,
      u8 *VAR_5)
{
 if (VAR_4->num_sge > 1)
  return -VAR_0;
 VAR_3->read.rdmaop = VAR_2;
 if (VAR_4->opcode == VAR_1)
  VAR_3->read.local_inv = 1;
 else
  VAR_3->read.local_inv = 0;
 VAR_3->read.reserved[0] = 0;
 VAR_3->read.reserved[1] = 0;
 VAR_3->read.rem_stag = FUNC_0(FUNC_2(VAR_4)->rkey);
 VAR_3->read.rem_to = FUNC_1(FUNC_2(VAR_4)->remote_addr);
 VAR_3->read.local_stag = FUNC_0(VAR_4->sg_list[0].lkey);
 VAR_3->read.local_len = FUNC_0(VAR_4->sg_list[0].length);
 VAR_3->read.local_to = FUNC_1(VAR_4->sg_list[0].addr);
 *VAR_5 = sizeof(struct t3_rdma_read_wr) >> 3;
 return 0;
}
