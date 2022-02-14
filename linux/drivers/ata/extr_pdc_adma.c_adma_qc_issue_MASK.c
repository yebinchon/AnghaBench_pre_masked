
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int protocol; } ;
struct ata_queued_cmd {TYPE_2__ tf; TYPE_1__* ap; } ;
struct adma_port_priv {int state; } ;
struct TYPE_3__ {struct adma_port_priv* private_data; } ;




 int FUNC_0 () ;
 int FUNC_1 (struct ata_queued_cmd*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_2 (struct ata_queued_cmd*) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_queued_cmd *VAR_2)
{
 struct adma_port_priv *VAR_3 = VAR_2->ap->private_data;

 switch (VAR_2->tf.protocol) {
 case 128:
  VAR_3->state = VAR_1;
  FUNC_1(VAR_2);
  return 0;

 case 129:
  FUNC_0();
  break;

 default:
  break;
 }

 VAR_3->state = VAR_0;
 return FUNC_2(VAR_2);
}
