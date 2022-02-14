
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_cm_node {int state; } ;







 int FUNC_0 (struct i40iw_cm_node*,int) ;
 int FUNC_1 (struct i40iw_cm_node*,int) ;

__attribute__((used)) static void FUNC_2(struct i40iw_cm_node *VAR_0)
{
 switch (VAR_0->state) {
 case 128:
 case 131:
  FUNC_0(VAR_0, 1);
  break;
 case 132:
 case 129:
  FUNC_1(VAR_0, 1);
  break;
 case 130:
 default:
  break;
 }
}
