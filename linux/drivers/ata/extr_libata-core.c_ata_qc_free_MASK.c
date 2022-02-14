
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {unsigned int tag; scalar_t__ flags; struct ata_port* ap; } ;
struct ata_port {int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,struct ata_port*) ;
 scalar_t__ FUNC_2 (unsigned int) ;

void FUNC_3(struct ata_queued_cmd *VAR_2)
{
 struct ata_port *VAR_3;
 unsigned int VAR_4;

 FUNC_0(VAR_2 == ((void*)0));
 VAR_3 = VAR_2->ap;

 VAR_2->flags = 0;
 VAR_4 = VAR_2->tag;
 if (FUNC_2(VAR_4)) {
  VAR_2->tag = VAR_1;
  if (VAR_3->flags & VAR_0)
   FUNC_1(VAR_4, VAR_3);
 }
}
