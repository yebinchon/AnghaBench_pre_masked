
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int print_id; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ error_handler; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_port*) ;

int FUNC_4(struct ata_port *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->ops->error_handler) {
  FUNC_1(VAR_0);
  FUNC_3(VAR_0);
 } else {
  FUNC_0("ata%u: bus probe begin\n", VAR_0->print_id);
  VAR_1 = FUNC_2(VAR_0);
  FUNC_0("ata%u: bus probe end\n", VAR_0->print_id);
 }
 return VAR_1;
}
