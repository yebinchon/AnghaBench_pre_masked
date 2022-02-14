
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ib_wc {int byte_len; int status; } ;
struct hns_roce_v2_cqe {int byte_4; } ;
struct hns_roce_rinl_sge {scalar_t__ addr; int len; } ;
struct TYPE_6__ {TYPE_2__* wqe_list; } ;
struct TYPE_4__ {int wqe_cnt; } ;
struct hns_roce_qp {TYPE_3__ rq_inl_buf; TYPE_1__ rq; } ;
struct TYPE_5__ {int sge_cnt; struct hns_roce_rinl_sge* sg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct hns_roce_qp*,int) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_v2_cqe *VAR_4,
          struct hns_roce_qp **VAR_5,
          struct ib_wc *VAR_6)
{
 struct hns_roce_rinl_sge *VAR_7;
 u32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 void *VAR_14;

 VAR_8 = FUNC_3(VAR_4->byte_4, VAR_2,
    VAR_3) & 0xffff;
 VAR_9 = VAR_8 & ((*VAR_5)->rq.wqe_cnt - 1);

 VAR_7 = (*VAR_5)->rq_inl_buf.wqe_list[VAR_9].sg_list;
 VAR_10 = (*VAR_5)->rq_inl_buf.wqe_list[VAR_9].sge_cnt;
 VAR_14 = FUNC_0(*VAR_5, VAR_9);
 VAR_12 = VAR_6->byte_len;

 for (VAR_11 = 0; (VAR_11 < VAR_10) && (VAR_12); VAR_11++) {
  VAR_13 = FUNC_2(VAR_7[VAR_11].len, VAR_12);
  FUNC_1((void *)VAR_7[VAR_11].addr, VAR_14, VAR_13);

  VAR_12 -= VAR_13;
  VAR_14 += VAR_13;
 }

 if (VAR_12) {
  VAR_6->status = VAR_1;
  return -VAR_0;
 }

 return 0;
}
