
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rcv_nxt; } ;
struct i40iw_cm_node {int state; TYPE_1__ tcp_cntxt; int ref_count; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;






 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct i40iw_cm_node*) ;
 int FUNC_2 (struct i40iw_cm_node*,int ) ;
 int FUNC_3 (char*,struct i40iw_cm_node*,int) ;
 int FUNC_4 (struct i40iw_cm_node*) ;
 int FUNC_5 (struct i40iw_cm_node*,int *,int ,int,int ) ;
 int FUNC_6 (struct i40iw_cm_node*) ;
 int FUNC_7 (struct i40iw_cm_node*) ;
 int FUNC_8 (struct i40iw_cm_node*) ;

__attribute__((used)) static void FUNC_9(struct i40iw_cm_node *VAR_5)
{
 u32 VAR_6;

 switch (VAR_5->state) {
 case 130:
 case 129:
 case 136:
 case 133:
  VAR_5->tcp_cntxt.rcv_nxt++;
  FUNC_1(VAR_5);
  VAR_5->state = VAR_3;
  FUNC_7(VAR_5);
  break;
 case 132:
  FUNC_2(VAR_5, VAR_0);
  VAR_5->tcp_cntxt.rcv_nxt++;
  FUNC_1(VAR_5);
  VAR_5->state = VAR_1;
  FUNC_0(&VAR_5->ref_count);
  FUNC_8(VAR_5);
  break;
 case 135:
  VAR_5->tcp_cntxt.rcv_nxt++;
  FUNC_1(VAR_5);
  VAR_5->state = VAR_2;
  FUNC_6(VAR_5);





  break;
 case 134:
  VAR_5->tcp_cntxt.rcv_nxt++;
  FUNC_1(VAR_5);
  VAR_5->state = 128;
  FUNC_6(VAR_5);
  VAR_6 =
      FUNC_5(VAR_5, ((void*)0), VAR_4, 1, 0);
  if (VAR_6)
   FUNC_3("node %p state = %d\n", VAR_5, VAR_5->state);
  break;
 case 128:
  VAR_5->tcp_cntxt.rcv_nxt++;
  FUNC_1(VAR_5);
  VAR_5->state = VAR_1;
  FUNC_4(VAR_5);
  break;
 case 131:
 default:
  FUNC_3("bad state node %p state = %d\n", VAR_5, VAR_5->state);
  break;
 }
}
