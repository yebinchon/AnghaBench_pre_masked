
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int flags; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*,int ) ;
 int FUNC_1 (struct ata_port*,int ) ;

void FUNC_2(struct ata_port *VAR_1, pm_message_t VAR_2)
{
 if (VAR_1->flags & VAR_0)
  FUNC_1(VAR_1, VAR_2);
 else
  FUNC_0(VAR_1, VAR_2);
}
