
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40iw_cq_uk {int cq_ring; int shadow_area; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_3(struct i40iw_cq_uk *VAR_0,
          u8 VAR_1)
{
 FUNC_1(VAR_0->cq_ring, VAR_1);
 FUNC_2(VAR_0->shadow_area, 0,
        FUNC_0(VAR_0->cq_ring));
 return 0;
}
