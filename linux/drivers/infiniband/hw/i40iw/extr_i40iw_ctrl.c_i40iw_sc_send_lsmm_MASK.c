
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef uintptr_t u64 ;
typedef uintptr_t u32 ;
struct i40iw_qp_uk {int swqe_polarity; TYPE_1__* sq_base; } ;
struct i40iw_sc_qp {int dev; struct i40iw_qp_uk qp_uk; } ;
typedef int i40iw_stag ;
struct TYPE_2__ {uintptr_t* elem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 uintptr_t FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,char*,uintptr_t*,int ) ;
 int FUNC_2 (uintptr_t*,uintptr_t) ;
 int FUNC_3 (uintptr_t*,int,uintptr_t) ;

__attribute__((used)) static void FUNC_4(struct i40iw_sc_qp *VAR_8,
          void *VAR_9,
          u32 VAR_10,
          i40iw_stag VAR_11)
{
 u64 *VAR_12;
 u64 VAR_13;
 struct i40iw_qp_uk *VAR_14;

 VAR_14 = &VAR_8->qp_uk;
 VAR_12 = VAR_14->sq_base->elem;

 FUNC_3(VAR_12, 0, (uintptr_t)VAR_9);

 FUNC_3(VAR_12, 8, (VAR_10 | FUNC_0(VAR_11, VAR_0)));

 FUNC_3(VAR_12, 16, 0);

 VAR_13 = FUNC_0(VAR_5, VAR_1) |
   FUNC_0(1, VAR_2) |
   FUNC_0(1, VAR_4) |
   FUNC_0(VAR_8->qp_uk.swqe_polarity, VAR_3);

 FUNC_2(VAR_12, VAR_13);

 FUNC_1(VAR_8->dev, VAR_6, "SEND_LSMM WQE",
   VAR_12, VAR_7);
}
