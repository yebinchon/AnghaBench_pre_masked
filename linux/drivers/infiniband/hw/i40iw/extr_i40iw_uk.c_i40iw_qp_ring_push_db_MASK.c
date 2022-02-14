
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int head; } ;
struct i40iw_qp_uk {int qp_id; int sq_ring; TYPE_1__ initial_ring; int push_db; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct i40iw_qp_uk *VAR_1, u32 VAR_2)
{
 FUNC_2(VAR_1->push_db, 0, FUNC_1((VAR_2 >> 2), VAR_0) | VAR_1->qp_id);
 VAR_1->initial_ring.head = FUNC_0(VAR_1->sq_ring);
}
