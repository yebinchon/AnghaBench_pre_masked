
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uresp ;
struct TYPE_5__ {int max_cnt; int len; int va; int dbid; } ;
struct ocrdma_srq {TYPE_3__* pd; TYPE_2__ rq; } ;
struct TYPE_4__ {int db_page_size; scalar_t__ unmapped_db; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;
struct ocrdma_create_srq_uresp {int num_rq_pages; int db_page_size; int db_shift; int rq_page_size; int * rq_page_addr; int db_rq_offset; int num_rqe_allocated; scalar_t__ db_page_addr; int rq_dbid; } ;
struct ib_udata {int dummy; } ;
struct TYPE_6__ {int id; int uctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_udata*,struct ocrdma_create_srq_uresp*,int) ;
 int FUNC_1 (struct ocrdma_create_srq_uresp*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct ocrdma_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ocrdma_dev *VAR_3, struct ocrdma_srq *VAR_4,
    struct ib_udata *VAR_5)
{
 int VAR_6;
 struct ocrdma_create_srq_uresp VAR_7;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.rq_dbid = VAR_4->rq.dbid;
 VAR_7.num_rq_pages = 1;
 VAR_7.rq_page_addr[0] = FUNC_4(VAR_4->rq.va);
 VAR_7.rq_page_size = VAR_4->rq.len;
 VAR_7.db_page_addr = VAR_3->nic_info.unmapped_db +
     (VAR_4->pd->id * VAR_3->nic_info.db_page_size);
 VAR_7.db_page_size = VAR_3->nic_info.db_page_size;
 VAR_7.num_rqe_allocated = VAR_4->rq.max_cnt;
 if (FUNC_3(VAR_3) == VAR_0) {
  VAR_7.db_rq_offset = VAR_1;
  VAR_7.db_shift = 24;
 } else {
  VAR_7.db_rq_offset = VAR_2;
  VAR_7.db_shift = 16;
 }

 VAR_6 = FUNC_0(VAR_5, &VAR_7, sizeof(VAR_7));
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_2(VAR_4->pd->uctx, VAR_7.rq_page_addr[0],
     VAR_7.rq_page_size);
 if (VAR_6)
  return VAR_6;
 return VAR_6;
}
