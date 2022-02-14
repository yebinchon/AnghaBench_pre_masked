
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int qid; } ;
struct t4_wq {TYPE_1__ sq; } ;
struct TYPE_5__ {void* abs_rqe_idx; } ;
struct TYPE_6__ {TYPE_2__ srcqe; } ;
struct t4_cqe {TYPE_3__ u; int bits_type_ts; void* header; } ;
struct t4_cq {size_t sw_pidx; struct t4_cqe* sw_queue; scalar_t__ gen; int sw_cidx; } ;
typedef int cqe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct t4_cqe*,int ,int) ;
 int FUNC_9 (char*,struct t4_wq*,struct t4_cq*,int ,size_t) ;
 int FUNC_10 (struct t4_cq*) ;

__attribute__((used)) static void FUNC_11(struct t4_wq *VAR_2, struct t4_cq *VAR_3, u32 VAR_4)
{
 struct t4_cqe VAR_5;

 FUNC_9("wq %p cq %p sw_cidx %u sw_pidx %u\n",
   VAR_2, VAR_3, VAR_3->sw_cidx, VAR_3->sw_pidx);
 FUNC_8(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.header = FUNC_6(FUNC_3(VAR_1) |
     FUNC_1(VAR_0) |
     FUNC_5(0) |
     FUNC_4(1) |
     FUNC_2(VAR_2->sq.qid));
 VAR_5.bits_type_ts = FUNC_7(FUNC_0((u64)VAR_3->gen));
 if (VAR_4)
  VAR_5.u.srcqe.abs_rqe_idx = FUNC_6(VAR_4);
 VAR_3->sw_queue[VAR_3->sw_pidx] = VAR_5;
 FUNC_10(VAR_3);
}
