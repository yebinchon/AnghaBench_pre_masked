
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int print_id; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* port_start ) (struct ata_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ata_port*) ;

int FUNC_2(struct ata_port *VAR_1)
{
 int VAR_2 = VAR_1->ops->port_start(VAR_1);

 if (VAR_2)
  return VAR_2;
 VAR_1->print_id = FUNC_0(&VAR_0);
 return 0;
}
