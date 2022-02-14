
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i3c_master_controller {TYPE_1__* ops; } ;
struct i3c_ibi_setup {int num_slots; int max_payload_len; int handler; } ;
struct i3c_device_ibi_info {int num_slots; int max_payload_len; int handler; int all_ibis_handled; int pending_ibis; } ;
struct i3c_dev_desc {struct i3c_device_ibi_info* ibi; } ;
struct TYPE_2__ {int (* request_ibi ) (struct i3c_dev_desc*,struct i3c_ibi_setup const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 struct i3c_master_controller* FUNC_1 (struct i3c_dev_desc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i3c_device_ibi_info*) ;
 struct i3c_device_ibi_info* FUNC_4 (int,int ) ;
 int FUNC_5 (struct i3c_dev_desc*,struct i3c_ibi_setup const*) ;

int FUNC_6(struct i3c_dev_desc *VAR_4,
          const struct i3c_ibi_setup *VAR_5)
{
 struct i3c_master_controller *VAR_6 = FUNC_1(VAR_4);
 struct i3c_device_ibi_info *VAR_7;
 int VAR_8;

 if (!VAR_6->ops->request_ibi)
  return -VAR_2;

 if (VAR_4->ibi)
  return -VAR_0;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_1;

 FUNC_0(&VAR_7->pending_ibis, 0);
 FUNC_2(&VAR_7->all_ibis_handled);
 VAR_7->handler = VAR_5->handler;
 VAR_7->max_payload_len = VAR_5->max_payload_len;
 VAR_7->num_slots = VAR_5->num_slots;

 VAR_4->ibi = VAR_7;
 VAR_8 = VAR_6->ops->request_ibi(VAR_4, VAR_5);
 if (VAR_8) {
  FUNC_3(VAR_7);
  VAR_4->ibi = ((void*)0);
 }

 return VAR_8;
}
