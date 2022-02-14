
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40iw_sc_cqp {TYPE_1__* dev; } ;
struct TYPE_2__ {int hw; scalar_t__ is_pf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct i40iw_sc_cqp *VAR_6,
       u32 *VAR_7,
       u32 *VAR_8,
       u32 *VAR_9)
{
 if (VAR_6->dev->is_pf) {
  *VAR_7 = FUNC_1(VAR_6->dev->hw, VAR_0);
  *VAR_8 = FUNC_0(*VAR_7, VAR_2);
  *VAR_9 = FUNC_0(*VAR_7, VAR_1);
 } else {
  *VAR_7 = FUNC_1(VAR_6->dev->hw, VAR_3);
  *VAR_8 = FUNC_0(*VAR_7, VAR_5);
  *VAR_9 = FUNC_0(*VAR_7, VAR_4);
 }
}
