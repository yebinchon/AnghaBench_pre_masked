
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int flags; } ;
struct ata_queued_cmd {TYPE_2__ tf; } ;
struct TYPE_3__ {int active_tag; } ;
struct ata_port {TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_port*,char*,int) ;
 struct ata_queued_cmd* FUNC_1 (struct ata_port*,int ) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_port*,struct ata_queued_cmd*) ;

void FUNC_4(struct ata_port *VAR_2)
{
 u8 VAR_3;
 struct ata_queued_cmd *VAR_4;


 VAR_4 = FUNC_1(VAR_2, VAR_2->link.active_tag);

 if (!VAR_4 || VAR_4->tf.flags & VAR_1)
  return;


 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 & VAR_0)
  return;



 FUNC_0(VAR_2, "lost interrupt (Status 0x%x)\n",
        VAR_3);


 FUNC_3(VAR_2, VAR_4);
}
