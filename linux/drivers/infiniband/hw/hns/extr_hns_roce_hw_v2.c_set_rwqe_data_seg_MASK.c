
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_send_wr {int send_flags; int num_sge; scalar_t__ opcode; TYPE_3__* sg_list; } ;
struct ib_qp {int device; } ;
struct hns_roce_v2_wqe_data_seg {int dummy; } ;
struct hns_roce_v2_rc_send_wqe {int byte_16; int byte_20; int byte_4; int msg_len; } ;
struct TYPE_5__ {int sge_cnt; } ;
struct hns_roce_qp {TYPE_2__ sge; } ;
struct TYPE_4__ {scalar_t__ max_sq_inline; } ;
struct hns_roce_dev {int dev; TYPE_1__ caps; } ;
struct TYPE_6__ {int length; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void*,void*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,unsigned int) ;
 int FUNC_6 (struct hns_roce_v2_wqe_data_seg*,TYPE_3__*) ;
 int FUNC_7 (struct hns_roce_qp*,struct ib_send_wr const*,unsigned int*) ;
 struct hns_roce_dev* FUNC_8 (int ) ;
 struct hns_roce_qp* FUNC_9 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_10(struct ib_qp *VAR_9, const struct ib_send_wr *VAR_10,
        struct hns_roce_v2_rc_send_wqe *VAR_11,
        void *VAR_12, unsigned int *VAR_13,
        const struct ib_send_wr **VAR_14)
{
 struct hns_roce_dev *VAR_15 = FUNC_8(VAR_9->device);
 struct hns_roce_v2_wqe_data_seg *VAR_16 = VAR_12;
 struct hns_roce_qp *VAR_17 = FUNC_9(VAR_9);
 int VAR_18;

 if (VAR_10->send_flags & VAR_2 && VAR_10->num_sge) {
  if (FUNC_1(VAR_11->msg_len) >
      VAR_15->caps.max_sq_inline) {
   *VAR_14 = VAR_10;
   FUNC_0(VAR_15->dev, "inline len(1-%d)=%d, illegal",
    VAR_11->msg_len, VAR_15->caps.max_sq_inline);
   return -VAR_0;
  }

  if (VAR_10->opcode == VAR_3) {
   *VAR_14 = VAR_10;
   FUNC_0(VAR_15->dev, "Not support inline data!\n");
   return -VAR_0;
  }

  for (VAR_18 = 0; VAR_18 < VAR_10->num_sge; VAR_18++) {
   FUNC_3(VAR_12, ((void *)VAR_10->sg_list[VAR_18].addr),
          VAR_10->sg_list[VAR_18].length);
   VAR_12 += VAR_10->sg_list[VAR_18].length;
  }

  FUNC_4(VAR_11->byte_4, VAR_8,
        1);
 } else {
  if (VAR_10->num_sge <= VAR_1) {
   for (VAR_18 = 0; VAR_18 < VAR_10->num_sge; VAR_18++) {
    if (FUNC_2(VAR_10->sg_list[VAR_18].length)) {
     FUNC_6(VAR_16, VAR_10->sg_list + VAR_18);
     VAR_16++;
    }
   }
  } else {
   FUNC_5(VAR_11->byte_20,
         VAR_6,
         VAR_7,
         (*VAR_13) & (VAR_17->sge.sge_cnt - 1));

   for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++) {
    if (FUNC_2(VAR_10->sg_list[VAR_18].length)) {
     FUNC_6(VAR_16, VAR_10->sg_list + VAR_18);
     VAR_16++;
    }
   }

   FUNC_7(VAR_17, VAR_10, VAR_13);
  }

  FUNC_5(VAR_11->byte_16,
          VAR_4,
          VAR_5, VAR_10->num_sge);
 }

 return 0;
}
