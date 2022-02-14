
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_puda_buf {int dummy; } ;
struct i40iw_cm_node {int state; int mpa_frame_rev; TYPE_1__* cm_id; int passive_state; } ;
struct TYPE_2__ {int (* rem_ref ) (TYPE_1__*) ;} ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct i40iw_cm_node*,int) ;
 int FUNC_2 (struct i40iw_cm_node*) ;
 int FUNC_3 (struct i40iw_cm_node*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct i40iw_cm_node*) ;
 int FUNC_6 (struct i40iw_cm_node*,int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(struct i40iw_cm_node *VAR_0,
     struct i40iw_puda_buf *VAR_1)
{
 FUNC_2(VAR_0);
 switch (VAR_0->state) {
 case 131:
 case 134:
  switch (VAR_0->mpa_frame_rev) {
  case 128:
   VAR_0->mpa_frame_rev = 129;

   VAR_0->state = 131;
   if (FUNC_6(VAR_0, 0))
    FUNC_1(VAR_0, 0);
   break;
  case 129:
  default:
   FUNC_1(VAR_0, 0);
   break;
  }
  break;
 case 135:
  FUNC_0(1, &VAR_0->passive_state);
  break;
 case 140:
 case 132:
 case 136:
  FUNC_4("Bad state state = %d\n", VAR_0->state);
  FUNC_3(VAR_0, 0);
  break;
 case 133:
  FUNC_1(VAR_0, 0);
  break;
 case 141:
  break;
 case 138:
 case 139:
 case 137:
  VAR_0->cm_id->rem_ref(VAR_0->cm_id);

 case 130:
  VAR_0->state = 141;
  FUNC_5(VAR_0);
  break;
 default:
  break;
 }
}
