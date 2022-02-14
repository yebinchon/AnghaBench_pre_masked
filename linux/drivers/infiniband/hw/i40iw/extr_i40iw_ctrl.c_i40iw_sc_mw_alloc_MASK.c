
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct i40iw_sc_dev {struct i40iw_sc_cqp* cqp; } ;
struct i40iw_sc_cqp {int polarity; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i40iw_sc_dev*,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(
     struct i40iw_sc_dev *VAR_8,
     u64 VAR_9,
     u32 VAR_10,
     u16 VAR_11,
     bool VAR_12)
{
 u64 VAR_13;
 struct i40iw_sc_cqp *VAR_14;
 u64 *VAR_15;

 VAR_14 = VAR_8->cqp;
 VAR_15 = FUNC_3(VAR_14, VAR_9);
 if (!VAR_15)
  return VAR_7;
 FUNC_5(VAR_15, 8, FUNC_0(VAR_11, VAR_2));
 FUNC_5(VAR_15,
        16,
        FUNC_0(VAR_10, VAR_1));

 VAR_13 = FUNC_0(VAR_4, VAR_0) |
   FUNC_0(VAR_14->polarity, VAR_3);

 FUNC_2(VAR_15, VAR_13);

 FUNC_1(VAR_8, VAR_6, "MW_ALLOC WQE",
   VAR_15, VAR_5 * 8);

 if (VAR_12)
  FUNC_4(VAR_14);
 return 0;
}
