
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i40iw_qp_uk {int swqe_polarity; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int* FUNC_1 (struct i40iw_qp_uk*,int *,int ,int ,int) ;
 int FUNC_2 (struct i40iw_qp_uk*) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 () ;

enum i40iw_status_code FUNC_5(struct i40iw_qp_uk *VAR_6,
     u64 VAR_7,
     bool VAR_8,
     bool VAR_9)
{
 u64 VAR_10, *VAR_11;
 u32 VAR_12;

 VAR_11 = FUNC_1(VAR_6, &VAR_12, VAR_5, 0, VAR_7);
 if (!VAR_11)
  return VAR_4;
 FUNC_3(VAR_11, 0, 0);
 FUNC_3(VAR_11, 8, 0);
 FUNC_3(VAR_11, 16, 0);

 VAR_10 = FUNC_0(VAR_3, VAR_0) |
     FUNC_0(VAR_8, VAR_1) |
     FUNC_0(VAR_6->swqe_polarity, VAR_2);

 FUNC_4();

 FUNC_3(VAR_11, 24, VAR_10);
 if (VAR_9)
  FUNC_2(VAR_6);

 return 0;
}
