
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {int flags; struct ata_port* ap; } ;
struct ata_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*) ;

__attribute__((used)) static void FUNC_1(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;


 if (VAR_1->flags & VAR_0)
  FUNC_0(VAR_2);
}
