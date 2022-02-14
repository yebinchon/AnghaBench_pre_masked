
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_cm_node {int state; int send_entry; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40iw_cm_node*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct i40iw_cm_node*) ;
 int FUNC_3 (struct i40iw_cm_node*) ;
 int FUNC_4 (struct i40iw_cm_node*) ;

__attribute__((used)) static int FUNC_5(struct i40iw_cm_node *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1)
  return -VAR_0;

 switch (VAR_1->state) {
 case 131:
 case 130:
 case 132:
 case 143:
 case 147:
 case 134:
 case 135:
  FUNC_0(VAR_1);
  FUNC_4(VAR_1);
  break;
 case 145:
  VAR_1->state = 139;
  FUNC_3(VAR_1);
  break;
 case 142:
 case 141:
 case 139:
 case 129:
 case 144:
  VAR_2 = -1;
  break;
 case 137:
  FUNC_0(VAR_1);
  FUNC_4(VAR_1);
  break;
 case 136:
 case 128:
 case 140:
 case 146:
 case 138:
  FUNC_2(VAR_1);
  break;
 case 133:
  if (VAR_1->send_entry)
   FUNC_1("send_entry\n");
  FUNC_2(VAR_1);
  break;
 }
 return VAR_2;
}
