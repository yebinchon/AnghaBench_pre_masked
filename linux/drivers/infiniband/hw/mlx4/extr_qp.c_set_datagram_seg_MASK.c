
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_wqe_datagram_seg {int mac; int vlan; void* qkey; void* dqpn; int av; } ;
struct mlx4_av {int dummy; } ;
struct ib_ud_wr {int ah; int remote_qkey; int remote_qpn; } ;
struct TYPE_4__ {TYPE_3__* mac; int vlan; } ;
struct TYPE_6__ {TYPE_1__ eth; } ;
struct TYPE_5__ {TYPE_3__ av; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_3__*,int) ;
 TYPE_2__* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx4_wqe_datagram_seg *VAR_0,
        const struct ib_ud_wr *VAR_1)
{
 FUNC_1(VAR_0->av, &FUNC_2(VAR_1->ah)->av, sizeof (struct mlx4_av));
 VAR_0->dqpn = FUNC_0(VAR_1->remote_qpn);
 VAR_0->qkey = FUNC_0(VAR_1->remote_qkey);
 VAR_0->vlan = FUNC_2(VAR_1->ah)->av.eth.vlan;
 FUNC_1(VAR_0->mac, FUNC_2(VAR_1->ah)->av.eth.mac, 6);
}
