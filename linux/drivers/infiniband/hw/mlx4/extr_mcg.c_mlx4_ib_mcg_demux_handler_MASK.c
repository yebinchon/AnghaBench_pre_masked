
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {struct mlx4_ib_demux_ctx* demux; } ;
struct mlx4_ib_dev {TYPE_1__ sriov; } ;
struct mlx4_ib_demux_ctx {int mcg_wq; int mcg_table_lock; } ;
struct TYPE_4__ {int method; int tid; } ;
struct ib_sa_mad {TYPE_2__ mad_hdr; scalar_t__ data; } ;
struct mcast_group {int lock; int refcount; int work; int state; int prev_state; struct ib_sa_mad response_sa_mad; } ;
struct ib_sa_mcmember_data {int mgid; } ;
struct ib_device {int dummy; } ;
typedef int __be64 ;
 int FUNC_0 (struct mcast_group*) ;
 int VAR_0 ;
 struct mcast_group* FUNC_1 (struct mlx4_ib_demux_ctx*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct mcast_group*,int ) ;
 int FUNC_8 (int *) ;
 struct mcast_group* FUNC_9 (struct mlx4_ib_demux_ctx*,int ,int *) ;
 struct mlx4_ib_dev* FUNC_10 (struct ib_device*) ;

int FUNC_11(struct ib_device *VAR_1, int VAR_2, int VAR_3,
         struct ib_sa_mad *VAR_4)
{
 struct mlx4_ib_dev *VAR_5 = FUNC_10(VAR_1);
 struct ib_sa_mcmember_data *VAR_6 = (struct ib_sa_mcmember_data *)VAR_4->data;
 struct mlx4_ib_demux_ctx *VAR_7 = &VAR_5->sriov.demux[VAR_2 - 1];
 struct mcast_group *VAR_8;

 switch (VAR_4->mad_hdr.method) {
 case 133:
 case 130:
  FUNC_4(&VAR_7->mcg_table_lock);
  VAR_8 = FUNC_1(VAR_7, &VAR_6->mgid, 0);
  FUNC_5(&VAR_7->mcg_table_lock);
  if (FUNC_0(VAR_8)) {
   if (VAR_4->mad_hdr.method == 133) {
    __be64 VAR_9 = VAR_4->mad_hdr.tid;
    *(u8 *)(&VAR_9) = (u8)VAR_3;
    VAR_8 = FUNC_9(VAR_7, VAR_9, &VAR_6->mgid);
   } else
    VAR_8 = ((void*)0);
  }

  if (!VAR_8)
   return 1;

  FUNC_4(&VAR_8->lock);
  VAR_8->response_sa_mad = *VAR_4;
  VAR_8->prev_state = VAR_8->state;
  VAR_8->state = VAR_0;

  FUNC_2(&VAR_8->refcount);
  if (!FUNC_6(VAR_7->mcg_wq, &VAR_8->work))
   FUNC_8(&VAR_8->refcount);
  FUNC_5(&VAR_8->lock);
  FUNC_7(VAR_8, 0);
  return 1;
 case 132:
 case 129:
 case 128:
 case 131:
  return 0;
 default:
  FUNC_3("In demux, port %d: unexpected MCMember method: 0x%x, dropping\n",
   VAR_2, VAR_4->mad_hdr.method);
  return 1;
 }
}
