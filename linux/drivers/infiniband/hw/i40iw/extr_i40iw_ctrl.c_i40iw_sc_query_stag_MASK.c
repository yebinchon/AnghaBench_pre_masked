
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i40iw_sc_dev*,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;
 int FUNC_5 (int*,int,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_6(struct i40iw_sc_dev *VAR_7,
        u64 VAR_8,
        u32 VAR_9,
        bool VAR_10)
{
 u64 VAR_11;
 u64 *VAR_12;
 struct i40iw_sc_cqp *VAR_13;

 VAR_13 = VAR_7->cqp;
 VAR_12 = FUNC_3(VAR_13, VAR_8);
 if (!VAR_12)
  return VAR_6;
 FUNC_5(VAR_12,
        16,
        FUNC_0(VAR_9, VAR_1));

 VAR_11 = FUNC_0(VAR_3, VAR_0) |
   FUNC_0(VAR_13->polarity, VAR_2);

 FUNC_2(VAR_12, VAR_11);

 FUNC_1(VAR_7, VAR_5, "QUERY_STAG WQE",
   VAR_12, VAR_4 * 8);

 if (VAR_10)
  FUNC_4(VAR_13);
 return 0;
}
