
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ head; } ;
struct TYPE_3__ {scalar_t__ head; } ;
struct i40iw_qp_uk {TYPE_2__ sq_ring; TYPE_1__ initial_ring; int wqe_alloc_reg; int qp_id; int shadow_area; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct i40iw_qp_uk *VAR_1)
{
 u64 VAR_2;
 u32 VAR_3;
 u32 VAR_4;

 FUNC_3();


 FUNC_2(VAR_1->shadow_area, 0, &VAR_2);

 VAR_3 = (u32)FUNC_1(VAR_2, VAR_0);
 VAR_4 = FUNC_0(VAR_1->sq_ring);
 if (VAR_4 != VAR_3) {
  if (VAR_4 > VAR_1->initial_ring.head) {
   if ((VAR_3 >= VAR_1->initial_ring.head) &&
       (VAR_3 < VAR_4)) {
    FUNC_4(VAR_1->qp_id, VAR_1->wqe_alloc_reg);
   }
  } else if (VAR_4 != VAR_1->initial_ring.head) {
   if ((VAR_3 >= VAR_1->initial_ring.head) ||
       (VAR_3 < VAR_4)) {
    FUNC_4(VAR_1->qp_id, VAR_1->wqe_alloc_reg);
   }
  }
 }

 VAR_1->initial_ring.head = VAR_1->sq_ring.head;
}
