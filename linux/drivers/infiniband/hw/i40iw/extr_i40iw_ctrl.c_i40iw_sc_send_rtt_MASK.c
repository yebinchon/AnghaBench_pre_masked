
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
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
 int FUNC_3 (int*,int,int) ;

__attribute__((used)) static void FUNC_4(struct i40iw_sc_qp *VAR_7, bool VAR_8)
{
 u64 *VAR_9;
 u64 VAR_10;
 struct i40iw_qp_uk *VAR_11;

 VAR_11 = &VAR_7->qp_uk;
 VAR_9 = VAR_11->sq_base->elem;

 FUNC_3(VAR_9, 0, 0);
 FUNC_3(VAR_9, 8, 0);
 FUNC_3(VAR_9, 16, 0);
 if (VAR_8) {
  VAR_10 = FUNC_0(0x1234, VAR_1) |
    FUNC_0(VAR_3, VAR_0) |
    FUNC_0(VAR_7->qp_uk.swqe_polarity, VAR_2);
  FUNC_3(VAR_9, 8, ((u64)0xabcd << 32));
 } else {
  VAR_10 = FUNC_0(VAR_4, VAR_0) |
    FUNC_0(VAR_7->qp_uk.swqe_polarity, VAR_2);
 }

 FUNC_2(VAR_9, VAR_10);

 FUNC_1(VAR_7->dev, VAR_5, "RTR WQE",
   VAR_9, VAR_6);
}
