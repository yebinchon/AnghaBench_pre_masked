
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_4__ {int cq_id; int shadow_area; } ;
struct i40iw_sc_cq {TYPE_2__ cq_uk; TYPE_1__* dev; } ;
struct TYPE_3__ {int hw; scalar_t__ is_pf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct i40iw_sc_cq *VAR_6)
{
 u64 VAR_7;
 u16 VAR_8;
 u8 VAR_9;
 u8 VAR_10;



 FUNC_2(VAR_6->cq_uk.shadow_area, 32, &VAR_7);

 VAR_8 = (u16)FUNC_1(VAR_7, VAR_5);
 VAR_9 = (u8)FUNC_1(VAR_7, VAR_3);

 VAR_10 = (u8)FUNC_1(VAR_7, VAR_4);
 VAR_10++;

 VAR_7 = FUNC_0(VAR_10, VAR_4) |
     FUNC_0(VAR_8, VAR_5) |
     FUNC_0(VAR_9, VAR_3) |
     FUNC_0(1, VAR_2);

 FUNC_4(VAR_6->cq_uk.shadow_area, 32, VAR_7);

 FUNC_5();

 if (VAR_6->dev->is_pf)
  FUNC_3(VAR_6->dev->hw, VAR_0, VAR_6->cq_uk.cq_id);
 else
  FUNC_3(VAR_6->dev->hw, VAR_1, VAR_6->cq_uk.cq_id);
}
