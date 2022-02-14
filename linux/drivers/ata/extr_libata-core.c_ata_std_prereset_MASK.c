
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int flags; } ;
struct TYPE_2__ {int action; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_link {struct ata_eh_context eh_context; struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_link*,char*,int) ;
 scalar_t__ FUNC_1 (struct ata_link*) ;
 unsigned long* FUNC_2 (struct ata_eh_context*) ;
 int FUNC_3 (struct ata_link*,unsigned long const*,unsigned long) ;

int FUNC_4(struct ata_link *VAR_4, unsigned long VAR_5)
{
 struct ata_port *VAR_6 = VAR_4->ap;
 struct ata_eh_context *VAR_7 = &VAR_4->eh_context;
 const unsigned long *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;


 if (VAR_7->i.action & VAR_0)
  return 0;


 if (VAR_6->flags & VAR_2) {
  VAR_9 = FUNC_3(VAR_4, VAR_8, VAR_5);

  if (VAR_9 && VAR_9 != -VAR_3)
   FUNC_0(VAR_4,
          "failed to resume link for reset (errno=%d)\n",
          VAR_9);
 }


 if (FUNC_1(VAR_4))
  VAR_7->i.action &= ~VAR_1;

 return 0;
}
