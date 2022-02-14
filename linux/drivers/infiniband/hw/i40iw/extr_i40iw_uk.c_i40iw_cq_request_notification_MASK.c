
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct i40iw_cq_uk {int cqe_alloc_reg; int cq_id; int shadow_area; } ;
typedef enum i40iw_completion_notify { ____Placeholder_i40iw_completion_notify } i40iw_completion_notify ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct i40iw_cq_uk *VAR_5,
       enum i40iw_completion_notify VAR_6)
{
 u64 VAR_7;
 u16 VAR_8;
 u8 VAR_9 = 0;
 u8 VAR_10 = 0;
 u8 VAR_11;

 FUNC_2(VAR_5->shadow_area, 32, &VAR_7);
 VAR_11 = (u8)FUNC_1(VAR_7, VAR_2);
 VAR_11++;

 VAR_8 = (u16)FUNC_1(VAR_7, VAR_3);
 VAR_9 = (u8)FUNC_1(VAR_7, VAR_1);
 VAR_9 |= 1;
 if (VAR_6 == VAR_4)
  VAR_10 = 1;
 VAR_7 = FUNC_0(VAR_11, VAR_2) |
     FUNC_0(VAR_8, VAR_3) |
     FUNC_0(VAR_9, VAR_1) |
     FUNC_0(VAR_10, VAR_0);

 FUNC_3(VAR_5->shadow_area, 32, VAR_7);

 FUNC_4();

 FUNC_5(VAR_5->cq_id, VAR_5->cqe_alloc_reg);
}
