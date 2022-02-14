
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ishtp_cl_rb {int list; } ;
struct TYPE_5__ {int list; } ;
struct ishtp_cl {int rx_ring_size; TYPE_2__* device; int free_list_spinlock; TYPE_1__ free_rb_list; } ;
struct TYPE_7__ {size_t max_msg_length; } ;
struct TYPE_8__ {TYPE_3__ props; } ;
struct TYPE_6__ {int dev; TYPE_4__* fw_client; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ishtp_cl*) ;
 int FUNC_2 (struct ishtp_cl_rb*,size_t) ;
 struct ishtp_cl_rb* FUNC_3 (struct ishtp_cl*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

int FUNC_7(struct ishtp_cl *VAR_1)
{
 size_t VAR_2 = VAR_1->device->fw_client->props.max_msg_length;
 int VAR_3;
 struct ishtp_cl_rb *VAR_4;
 int VAR_5 = 0;
 unsigned long VAR_6;

 for (VAR_3 = 0; VAR_3 < VAR_1->rx_ring_size; ++VAR_3) {
  VAR_4 = FUNC_3(VAR_1);
  if (!VAR_4) {
   VAR_5 = -VAR_0;
   goto out;
  }
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  if (VAR_5)
   goto out;
  FUNC_5(&VAR_1->free_list_spinlock, VAR_6);
  FUNC_4(&VAR_4->list, &VAR_1->free_rb_list.list);
  FUNC_6(&VAR_1->free_list_spinlock, VAR_6);
 }

 return 0;

out:
 FUNC_0(&VAR_1->device->dev, "error in allocating Rx buffers\n");
 FUNC_1(VAR_1);
 return VAR_5;
}
