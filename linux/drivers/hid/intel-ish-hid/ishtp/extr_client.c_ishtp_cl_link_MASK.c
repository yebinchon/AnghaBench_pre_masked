
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ishtp_device {scalar_t__ open_handle_count; scalar_t__ dev_state; int device_lock; int cl_list_lock; int host_clients_map; int cl_list; } ;
struct ishtp_cl {int host_client_id; int state; int link; TYPE_1__* device; struct ishtp_device* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct ishtp_cl *VAR_8)
{
 struct ishtp_device *VAR_9;
 unsigned long VAR_10, VAR_11;
 int VAR_12, VAR_13 = 0;

 if (FUNC_0(!VAR_8 || !VAR_8->dev))
  return -VAR_0;

 VAR_9 = VAR_8->dev;

 FUNC_5(&VAR_9->device_lock, VAR_10);

 if (VAR_9->open_handle_count >= VAR_7) {
  VAR_13 = -VAR_1;
  goto unlock_dev;
 }

 VAR_12 = FUNC_2(VAR_9->host_clients_map, VAR_4);

 if (VAR_12 >= VAR_4) {
  FUNC_6(&VAR_9->device_lock, VAR_10);
  FUNC_1(&VAR_8->device->dev, "id exceeded %d", VAR_4);
  return -VAR_3;
 }

 VAR_9->open_handle_count++;
 VAR_8->host_client_id = VAR_12;
 FUNC_5(&VAR_9->cl_list_lock, VAR_11);
 if (VAR_9->dev_state != VAR_6) {
  VAR_13 = -VAR_2;
  goto unlock_cl;
 }
 FUNC_3(&VAR_8->link, &VAR_9->cl_list);
 FUNC_4(VAR_12, VAR_9->host_clients_map);
 VAR_8->state = VAR_5;

unlock_cl:
 FUNC_6(&VAR_9->cl_list_lock, VAR_11);
unlock_dev:
 FUNC_6(&VAR_9->device_lock, VAR_10);
 return VAR_13;
}
