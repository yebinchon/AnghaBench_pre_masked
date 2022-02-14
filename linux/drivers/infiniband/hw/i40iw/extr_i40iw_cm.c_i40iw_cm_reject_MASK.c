
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;int (* add_ref ) (struct iw_cm_id*) ;} ;
struct TYPE_2__ {scalar_t__ client; } ;
struct i40iw_cm_node {scalar_t__ state; struct iw_cm_id* cm_id; int passive_state; TYPE_1__ tcp_cntxt; struct i40iw_cm_node* loopbackpartner; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct i40iw_cm_node*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct i40iw_cm_node*) ;
 int FUNC_4 (struct i40iw_cm_node*,struct iw_cm_id*,int ,int ) ;
 int FUNC_5 (struct i40iw_cm_node*,void const*,int ) ;
 int FUNC_6 (struct i40iw_cm_node*) ;
 int FUNC_7 (struct iw_cm_id*) ;
 int FUNC_8 (struct iw_cm_id*) ;

__attribute__((used)) static int FUNC_9(struct i40iw_cm_node *VAR_6, const void *VAR_7, u8 VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 struct iw_cm_id *VAR_12 = VAR_6->cm_id;
 struct i40iw_cm_node *VAR_13 = VAR_6->loopbackpartner;

 if (VAR_6->tcp_cntxt.client)
  return VAR_9;
 FUNC_1(VAR_6);

 if (!VAR_13) {
  VAR_11 = FUNC_0(1, &VAR_6->passive_state);
  if (VAR_11 == VAR_4) {
   VAR_6->state = VAR_1;
   FUNC_3(VAR_6);
  } else {
   if (VAR_6->state == VAR_3) {
    FUNC_3(VAR_6);
   } else {
    VAR_9 = FUNC_5(VAR_6, VAR_7, VAR_8);
    if (VAR_9) {
     VAR_6->state = VAR_1;
     VAR_10 = FUNC_6(VAR_6);
     if (VAR_10)
      FUNC_2("send reset failed\n");
    } else {
     VAR_12->add_ref(VAR_12);
    }
   }
  }
 } else {
  VAR_6->cm_id = ((void*)0);
  if (VAR_6->state == VAR_3) {
   FUNC_3(VAR_6);
   FUNC_3(VAR_13);
  } else {
   VAR_9 = FUNC_4(VAR_13,
        VAR_13->cm_id,
        VAR_5,
        -VAR_0);
   FUNC_3(VAR_6);
   VAR_13->state = VAR_2;

   VAR_12 = VAR_13->cm_id;
   FUNC_3(VAR_13);
   VAR_12->rem_ref(VAR_12);
  }
 }

 return VAR_9;
}
