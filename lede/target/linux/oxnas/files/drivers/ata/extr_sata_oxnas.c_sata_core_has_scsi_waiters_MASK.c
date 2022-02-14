
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int head; } ;
struct sata_oxnas_host_priv {int core_lock; TYPE_1__ scsi_wait_queue; scalar_t__ scsi_nonblocking_attempts; } ;
struct ata_host {struct sata_oxnas_host_priv* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct ata_host *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;
 struct sata_oxnas_host_priv *VAR_3 = VAR_0->private_data;

 FUNC_1(&VAR_3->core_lock, VAR_2);
 VAR_1 = VAR_3->scsi_nonblocking_attempts ||
        !FUNC_0(&VAR_3->scsi_wait_queue.head);
 FUNC_2(&VAR_3->core_lock, VAR_2);

 return VAR_1;
}
