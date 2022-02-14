
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_queued_cmd {int dummy; } ;
struct TYPE_2__ {int active_tag; } ;
struct ata_port {TYPE_1__ link; } ;


 int FUNC_0 (struct ata_port*,struct ata_queued_cmd*) ;
 struct ata_queued_cmd* FUNC_1 (struct ata_port*,int ) ;
 int FUNC_2 (struct ata_port*) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_0)
{
 struct ata_queued_cmd *VAR_1;
 int VAR_2 = 0;

 VAR_1 = FUNC_1(VAR_0, VAR_0->link.active_tag);
 if (VAR_1)
  VAR_2 |= FUNC_0(VAR_0, VAR_1);


 if (!VAR_2)
  FUNC_2(VAR_0);
}
