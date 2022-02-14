
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i40iw_sc_cqp {int dev; int polarity; } ;
struct i40iw_sc_ceq {int ceq_id; int tph_en; int virtual_map; int pbl_chunk_size; int first_pm_pbl_idx; int elem_cnt; TYPE_1__* dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {struct i40iw_sc_cqp* cqp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(struct i40iw_sc_ceq *VAR_9,
         u64 VAR_10,
         bool VAR_11)
{
 struct i40iw_sc_cqp *VAR_12;
 u64 *VAR_13;
 u64 VAR_14;

 VAR_12 = VAR_9->dev->cqp;
 VAR_13 = FUNC_3(VAR_12, VAR_10);
 if (!VAR_13)
  return VAR_8;
 FUNC_5(VAR_13, 16, VAR_9->elem_cnt);
 FUNC_5(VAR_13, 48, VAR_9->first_pm_pbl_idx);
 VAR_14 = VAR_9->ceq_id |
   FUNC_0(VAR_5, VAR_2) |
   FUNC_0(VAR_9->pbl_chunk_size, VAR_0) |
   FUNC_0(VAR_9->virtual_map, VAR_1) |
   FUNC_0(VAR_9->tph_en, VAR_3) |
   FUNC_0(VAR_12->polarity, VAR_4);
 FUNC_2(VAR_13, VAR_14);
 FUNC_1(VAR_12->dev, VAR_7, "CEQ_DESTROY WQE",
   VAR_13, VAR_6 * 8);

 if (VAR_11)
  FUNC_4(VAR_12);
 return 0;
}
