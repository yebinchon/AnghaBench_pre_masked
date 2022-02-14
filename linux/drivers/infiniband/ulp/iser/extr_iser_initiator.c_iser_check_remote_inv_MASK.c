
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iser_fr_desc {int dummy; } ;
struct iser_conn {int iscsi_conn; int snd_w_inv; } ;
struct iscsi_task {struct iscsi_iser_task* dd_data; } ;
struct iscsi_iser_task {TYPE_2__* rdma_reg; scalar_t__* dir; } ;
struct iscsi_hdr {struct iser_conn* itt; } ;
struct TYPE_3__ {int invalidate_rkey; } ;
struct ib_wc {int wc_flags; TYPE_1__ ex; } ;
struct TYPE_4__ {struct iser_fr_desc* mem_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct iscsi_task* FUNC_0 (int ,struct iser_conn*) ;
 int FUNC_1 (char*,struct iser_conn*,int ) ;
 int FUNC_2 (char*,struct iser_conn*) ;
 int FUNC_3 (struct iser_fr_desc*,int ) ;
 scalar_t__ FUNC_4 (struct iscsi_task*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct iser_conn *VAR_5,
        struct ib_wc *VAR_6,
        struct iscsi_hdr *VAR_7)
{
 if (VAR_6->wc_flags & VAR_2) {
  struct iscsi_task *VAR_8;
  u32 VAR_9 = VAR_6->ex.invalidate_rkey;

  FUNC_1("conn %p: remote invalidation for rkey %#x\n",
    VAR_5, VAR_9);

  if (FUNC_5(!VAR_5->snd_w_inv)) {
   FUNC_2("conn %p: unexpected remote invalidation, terminating connection\n",
     VAR_5);
   return -VAR_1;
  }

  VAR_8 = FUNC_0(VAR_5->iscsi_conn, VAR_7->itt);
  if (FUNC_4(VAR_8)) {
   struct iscsi_iser_task *VAR_10 = VAR_8->dd_data;
   struct iser_fr_desc *VAR_11;

   if (VAR_10->dir[VAR_3]) {
    VAR_11 = VAR_10->rdma_reg[VAR_3].mem_h;
    if (FUNC_5(FUNC_3(VAR_11, VAR_9)))
     return -VAR_0;
   }

   if (VAR_10->dir[VAR_4]) {
    VAR_11 = VAR_10->rdma_reg[VAR_4].mem_h;
    if (FUNC_5(FUNC_3(VAR_11, VAR_9)))
     return -VAR_0;
   }
  } else {
   FUNC_2("failed to get task for itt=%d\n", VAR_7->itt);
   return -VAR_0;
  }
 }

 return 0;
}
