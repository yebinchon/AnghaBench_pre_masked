
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef uintptr_t u32 ;
struct i40iw_qp_uk {int swqe_polarity; TYPE_1__* sq_base; } ;
struct i40iw_sc_qp {int dev; struct i40iw_qp_uk qp_uk; } ;
struct TYPE_2__ {int* elem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int,uintptr_t) ;

__attribute__((used)) static void FUNC_4(struct i40iw_sc_qp *VAR_7,
          void *VAR_8,
          u32 VAR_9)
{
 u64 *VAR_10;
 u64 VAR_11;
 struct i40iw_qp_uk *VAR_12;

 VAR_12 = &VAR_7->qp_uk;
 VAR_10 = VAR_12->sq_base->elem;

 FUNC_3(VAR_10, 0, (uintptr_t)VAR_8);

 FUNC_3(VAR_10, 8, VAR_9);

 FUNC_3(VAR_10, 16, 0);

 VAR_11 = FUNC_0(VAR_4, VAR_0) |
   FUNC_0(1, VAR_1) |
   FUNC_0(1, VAR_3) |
   FUNC_0(VAR_7->qp_uk.swqe_polarity, VAR_2);

 FUNC_2(VAR_10, VAR_11);

 FUNC_1(VAR_7->dev, VAR_5, "SEND_LSMM_NOSTAG WQE",
   VAR_10, VAR_6);
}
