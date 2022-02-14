
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iw_cm_id {int (* event_handler ) (struct iw_cm_id*,struct iw_cm_event*) ;} ;
struct iw_cm_event {int event; int status; int ord; int ird; int private_data_len; void* private_data; void* provider_data; } ;
struct TYPE_2__ {int size; } ;
struct i40iw_cm_node {int ord_size; int ird_size; TYPE_1__ pdata; scalar_t__ pdata_buf; int ipv4; } ;
typedef int event ;
typedef enum iw_cm_event_type { ____Placeholder_iw_cm_event_type } iw_cm_event_type ;







 int FUNC_0 (struct i40iw_cm_node*,struct iw_cm_event*) ;
 int FUNC_1 (struct i40iw_cm_node*,struct iw_cm_event*) ;
 int FUNC_2 (struct i40iw_cm_node*,struct iw_cm_id*,struct iw_cm_event*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct iw_cm_event*,int ,int) ;
 int FUNC_5 (struct iw_cm_id*,struct iw_cm_event*) ;

__attribute__((used)) static int FUNC_6(struct i40iw_cm_node *VAR_0,
          struct iw_cm_id *VAR_1,
          enum iw_cm_event_type VAR_2,
          int VAR_3)
{
 struct iw_cm_event VAR_4;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.event = VAR_2;
 VAR_4.status = VAR_3;
 switch (VAR_2) {
 case 130:
  if (VAR_0->ipv4)
   FUNC_0(VAR_0, &VAR_4);
  else
   FUNC_1(VAR_0, &VAR_4);
  VAR_4.provider_data = (void *)VAR_0;
  VAR_4.private_data = (void *)VAR_0->pdata_buf;
  VAR_4.private_data_len = (u8)VAR_0->pdata.size;
  VAR_4.ird = VAR_0->ird_size;
  break;
 case 131:
  FUNC_2(VAR_0, VAR_1, &VAR_4);
  break;
 case 128:
  VAR_4.ird = VAR_0->ird_size;
  VAR_4.ord = VAR_0->ord_size;
  break;
 case 129:
  break;
 case 132:
  break;
 default:
  FUNC_3("event type received type = %d\n", VAR_2);
  return -1;
 }
 return VAR_1->event_handler(VAR_1, &VAR_4);
}
