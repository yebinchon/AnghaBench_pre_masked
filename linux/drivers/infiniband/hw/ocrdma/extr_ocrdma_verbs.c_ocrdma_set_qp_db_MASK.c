
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_qp {scalar_t__ rq_db; scalar_t__ sq_db; } ;
struct ocrdma_pd {int id; } ;
struct TYPE_2__ {int db_page_size; scalar_t__ db; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct ocrdma_dev*) ;

__attribute__((used)) static void FUNC_1(struct ocrdma_dev *VAR_5, struct ocrdma_qp *VAR_6,
        struct ocrdma_pd *VAR_7)
{
 if (FUNC_0(VAR_5) == VAR_0) {
  VAR_6->sq_db = VAR_5->nic_info.db +
   (VAR_7->id * VAR_5->nic_info.db_page_size) +
   VAR_2;
  VAR_6->rq_db = VAR_5->nic_info.db +
   (VAR_7->id * VAR_5->nic_info.db_page_size) +
   VAR_1;
 } else {
  VAR_6->sq_db = VAR_5->nic_info.db +
   (VAR_7->id * VAR_5->nic_info.db_page_size) +
   VAR_4;
  VAR_6->rq_db = VAR_5->nic_info.db +
   (VAR_7->id * VAR_5->nic_info.db_page_size) +
   VAR_3;
 }
}
