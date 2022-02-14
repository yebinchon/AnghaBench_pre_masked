
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ib_umad_port {TYPE_1__* umad_dev; int sm_sem; int file_mutex; int port_num; scalar_t__ ib_dev; } ;
struct ib_port_modify {int clr_port_cap_mask; } ;
struct file {struct ib_umad_port* private_data; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,struct ib_port_modify*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct file *VAR_2)
{
 struct ib_umad_port *VAR_3 = VAR_2->private_data;
 struct ib_port_modify VAR_4 = {
  .clr_port_cap_mask = VAR_0
 };
 int VAR_5 = 0;

 FUNC_2(&VAR_3->file_mutex);
 if (VAR_3->ib_dev)
  VAR_5 = FUNC_0(VAR_3->ib_dev, VAR_3->port_num, 0, &VAR_4);
 FUNC_3(&VAR_3->file_mutex);

 FUNC_4(&VAR_3->sm_sem);

 FUNC_1(&VAR_3->umad_dev->kobj);

 return VAR_5;
}
