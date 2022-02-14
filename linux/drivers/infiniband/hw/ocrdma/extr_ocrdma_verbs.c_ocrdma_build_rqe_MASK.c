
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ocrdma_sge {int dummy; } ;
struct ocrdma_hdr_wqe {int cw; int rsvd_tag; scalar_t__ total_len; } ;
struct ib_recv_wr {int num_sge; int sg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ocrdma_hdr_wqe*,struct ocrdma_sge*,int,int ) ;
 int FUNC_1 (struct ocrdma_hdr_wqe*,int) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_hdr_wqe *VAR_6,
        const struct ib_recv_wr *VAR_7, u16 VAR_8)
{
 u32 VAR_9 = 0;
 struct ocrdma_sge *VAR_10;
 if (VAR_7->num_sge)
  VAR_9 = (VAR_7->num_sge * sizeof(*VAR_10)) + sizeof(*VAR_6);
 else
  VAR_9 = sizeof(*VAR_10) + sizeof(*VAR_6);

 VAR_6->cw = ((VAR_9 / VAR_4) <<
    VAR_3);
 VAR_6->cw |= (VAR_0 << VAR_2);
 VAR_6->cw |= (VAR_1 << VAR_5);
 VAR_6->total_len = 0;
 VAR_6->rsvd_tag = VAR_8;
 VAR_10 = (struct ocrdma_sge *)(VAR_6 + 1);
 FUNC_0(VAR_6, VAR_10, VAR_7->num_sge, VAR_7->sg_list);
 FUNC_1(VAR_6, VAR_9);
}
