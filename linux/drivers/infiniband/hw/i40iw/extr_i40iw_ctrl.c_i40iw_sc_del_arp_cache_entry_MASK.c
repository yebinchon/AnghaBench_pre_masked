
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct i40iw_sc_cqp {int dev; int polarity; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,char*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* FUNC_3 (struct i40iw_sc_cqp*,int) ;
 int FUNC_4 (struct i40iw_sc_cqp*) ;

__attribute__((used)) static enum i40iw_status_code FUNC_5(
     struct i40iw_sc_cqp *VAR_6,
     u64 VAR_7,
     u16 VAR_8,
     bool VAR_9)
{
 u64 *VAR_10;
 u64 VAR_11;

 VAR_10 = FUNC_3(VAR_6, VAR_7);
 if (!VAR_10)
  return VAR_5;

 VAR_11 = VAR_8 |
   FUNC_0(VAR_2, VAR_0) |
   FUNC_0(VAR_6->polarity, VAR_1);
 FUNC_2(VAR_10, VAR_11);

 FUNC_1(VAR_6->dev, VAR_4, "ARP_CACHE_DEL_ENTRY WQE",
   VAR_10, VAR_3 * 8);

 if (VAR_9)
  FUNC_4(VAR_6);
 return 0;
}
