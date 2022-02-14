
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ata_port_operations {int dummy; } ;
struct ata_host {int kref; struct ata_port_operations* ops; struct device* dev; int n_tags; int eh_mutex; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ata_host *VAR_1, struct device *VAR_2,
     struct ata_port_operations *VAR_3)
{
 FUNC_2(&VAR_1->lock);
 FUNC_1(&VAR_1->eh_mutex);
 VAR_1->n_tags = VAR_0;
 VAR_1->dev = VAR_2;
 VAR_1->ops = VAR_3;
 FUNC_0(&VAR_1->kref);
}
