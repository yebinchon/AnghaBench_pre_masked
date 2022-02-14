
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_ib_srq {int dummy; } ;
struct TYPE_6__ {int cons_index; } ;
struct TYPE_5__ {int cqe; } ;
struct TYPE_4__ {int entry_size; } ;
struct mlx4_ib_cq {TYPE_3__ mcq; TYPE_2__ ibcq; TYPE_1__ buf; } ;
struct mlx4_cqe {int owner_sr_opcode; int wqe_index; int vlan_my_qpn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mlx4_cqe* FUNC_2 (struct mlx4_ib_cq*,int) ;
 scalar_t__ FUNC_3 (struct mlx4_ib_cq*,int) ;
 int FUNC_4 (struct mlx4_cqe*,struct mlx4_cqe*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct mlx4_ib_srq*,int ) ;
 int FUNC_7 () ;

void FUNC_8(struct mlx4_ib_cq *VAR_3, u32 VAR_4, struct mlx4_ib_srq *VAR_5)
{
 u32 VAR_6;
 int VAR_7 = 0;
 struct mlx4_cqe *VAR_8, *VAR_9;
 u8 VAR_10;
 int VAR_11 = VAR_3->buf.entry_size == 64 ? 1 : 0;
 for (VAR_6 = VAR_3->mcq.cons_index; FUNC_3(VAR_3, VAR_6); ++VAR_6)
  if (VAR_6 == VAR_3->mcq.cons_index + VAR_3->ibcq.cqe)
   break;





 while ((int) --VAR_6 - (int) VAR_3->mcq.cons_index >= 0) {
  VAR_8 = FUNC_2(VAR_3, VAR_6 & VAR_3->ibcq.cqe);
  VAR_8 += VAR_11;

  if ((FUNC_1(VAR_8->vlan_my_qpn) & VAR_2) == VAR_4) {
   if (VAR_5 && !(VAR_8->owner_sr_opcode & VAR_0))
    FUNC_6(VAR_5, FUNC_0(VAR_8->wqe_index));
   ++VAR_7;
  } else if (VAR_7) {
   VAR_9 = FUNC_2(VAR_3, (VAR_6 + VAR_7) & VAR_3->ibcq.cqe);
   VAR_9 += VAR_11;

   VAR_10 = VAR_9->owner_sr_opcode & VAR_1;
   FUNC_4(VAR_9, VAR_8, sizeof *VAR_8);
   VAR_9->owner_sr_opcode = VAR_10 |
    (VAR_9->owner_sr_opcode & ~VAR_1);
  }
 }

 if (VAR_7) {
  VAR_3->mcq.cons_index += VAR_7;




  FUNC_7();
  FUNC_5(&VAR_3->mcq);
 }
}
