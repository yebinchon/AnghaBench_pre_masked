
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i40iw_sc_cqp {int dev; scalar_t__ polarity; } ;
struct i40iw_sc_aeq {scalar_t__ virtual_map; scalar_t__ pbl_chunk_size; int first_pm_pbl_idx; int aeq_elem_pa; int elem_cnt; TYPE_1__* dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {struct i40iw_sc_cqp* cqp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(struct i40iw_sc_aeq *VAR_8,
        u64 VAR_9,
        bool VAR_10)
{
 u64 *VAR_11;
 struct i40iw_sc_cqp *VAR_12;
 u64 VAR_13;

 VAR_12 = VAR_8->dev->cqp;
 VAR_11 = FUNC_3(VAR_12, VAR_9);
 if (!VAR_11)
  return VAR_7;
 FUNC_5(VAR_11, 16, VAR_8->elem_cnt);
 FUNC_5(VAR_11, 32,
        (VAR_8->virtual_map ? 0 : VAR_8->aeq_elem_pa));
 FUNC_5(VAR_11, 48,
        (VAR_8->virtual_map ? VAR_8->first_pm_pbl_idx : 0));

 VAR_13 = FUNC_0(VAR_4, VAR_2) |
   FUNC_0(VAR_8->pbl_chunk_size, VAR_0) |
   FUNC_0(VAR_8->virtual_map, VAR_1) |
   FUNC_0(VAR_12->polarity, VAR_3);

 FUNC_2(VAR_11, VAR_13);
 FUNC_1(VAR_12->dev, VAR_6, "AEQ_CREATE WQE",
   VAR_11, VAR_5 * 8);
 if (VAR_10)
  FUNC_4(VAR_12);
 return 0;
}
