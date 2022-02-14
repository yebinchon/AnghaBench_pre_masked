
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct i40iw_sc_cqp {int dev; scalar_t__ polarity; } ;
struct i40iw_sc_ceq {int elem_cnt; int ceq_elem_pa; int first_pm_pbl_idx; int ceq_id; scalar_t__ tph_en; scalar_t__ virtual_map; scalar_t__ pbl_chunk_size; scalar_t__ tph_val; TYPE_1__* dev; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {struct i40iw_sc_cqp* cqp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(struct i40iw_sc_ceq *VAR_10,
        u64 VAR_11,
        bool VAR_12)
{
 struct i40iw_sc_cqp *VAR_13;
 u64 *VAR_14;
 u64 VAR_15;

 VAR_13 = VAR_10->dev->cqp;
 VAR_14 = FUNC_3(VAR_13, VAR_11);
 if (!VAR_14)
  return VAR_9;
 FUNC_5(VAR_14, 16, VAR_10->elem_cnt);
 FUNC_5(VAR_14, 32, (VAR_10->virtual_map ? 0 : VAR_10->ceq_elem_pa));
 FUNC_5(VAR_14, 48, (VAR_10->virtual_map ? VAR_10->first_pm_pbl_idx : 0));
 FUNC_5(VAR_14, 56, FUNC_0(VAR_10->tph_val, VAR_4));

 VAR_15 = VAR_10->ceq_id |
   FUNC_0(VAR_6, VAR_2) |
   FUNC_0(VAR_10->pbl_chunk_size, VAR_0) |
   FUNC_0(VAR_10->virtual_map, VAR_1) |
   FUNC_0(VAR_10->tph_en, VAR_3) |
   FUNC_0(VAR_13->polarity, VAR_5);

 FUNC_2(VAR_14, VAR_15);

 FUNC_1(VAR_13->dev, VAR_8, "CEQ_CREATE WQE",
   VAR_14, VAR_7 * 8);

 if (VAR_12)
  FUNC_4(VAR_13);
 return 0;
}
