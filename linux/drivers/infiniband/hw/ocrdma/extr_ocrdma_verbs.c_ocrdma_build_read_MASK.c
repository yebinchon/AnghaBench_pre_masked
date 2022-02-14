
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocrdma_sge {int len; int lrkey; int addr_hi; int addr_lo; } ;
struct ocrdma_qp {int dummy; } ;
struct ocrdma_hdr_wqe {int cw; int total_len; } ;
struct ib_send_wr {int sg_list; int num_sge; } ;
struct TYPE_2__ {int rkey; int remote_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ocrdma_hdr_wqe*,struct ocrdma_sge*,int ,int ) ;
 TYPE_1__* FUNC_1 (struct ib_send_wr const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ocrdma_qp *VAR_6, struct ocrdma_hdr_wqe *VAR_7,
         const struct ib_send_wr *VAR_8)
{
 struct ocrdma_sge *VAR_9 = (struct ocrdma_sge *)(VAR_7 + 1);
 struct ocrdma_sge *VAR_10 = VAR_9 + 1;
 u32 VAR_11 = ((VAR_8->num_sge + 1) * sizeof(struct ocrdma_sge)) +
     sizeof(struct ocrdma_hdr_wqe);

 FUNC_0(VAR_7, VAR_10, VAR_8->num_sge, VAR_8->sg_list);
 VAR_7->cw |= ((VAR_11 / VAR_4) << VAR_3);
 VAR_7->cw |= (VAR_0 << VAR_2);
 VAR_7->cw |= (VAR_1 << VAR_5);

 VAR_9->addr_lo = FUNC_1(VAR_8)->remote_addr;
 VAR_9->addr_hi = FUNC_2(FUNC_1(VAR_8)->remote_addr);
 VAR_9->lrkey = FUNC_1(VAR_8)->rkey;
 VAR_9->len = VAR_7->total_len;
}
