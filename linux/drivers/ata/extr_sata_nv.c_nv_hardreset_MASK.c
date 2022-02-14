
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_link {int device; TYPE_2__* ap; struct ata_eh_context eh_context; } ;
struct TYPE_4__ {int pflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ata_link*,char*) ;
 int FUNC_2 (struct ata_link*,char*,int) ;
 int VAR_4 ;
 unsigned long* FUNC_3 (struct ata_eh_context*) ;
 int FUNC_4 (struct ata_link*,int ,unsigned long,int *,int *) ;
 int FUNC_5 (struct ata_link*,unsigned long const*,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ata_link *VAR_5, unsigned int *VAR_6,
   unsigned long VAR_7)
{
 struct ata_eh_context *VAR_8 = &VAR_5->eh_context;




 if (!(VAR_5->ap->pflags & VAR_1) &&
     !FUNC_0(VAR_5->device))
  FUNC_4(VAR_5, VAR_4, VAR_7,
        ((void*)0), ((void*)0));
 else {
  const unsigned long *VAR_9 = FUNC_3(VAR_8);
  int VAR_10;

  if (!(VAR_8->i.flags & VAR_0))
   FUNC_1(VAR_5,
          "nv: skipping hardreset on occupied port\n");


  VAR_10 = FUNC_5(VAR_5, VAR_9, VAR_7);

  if (VAR_10 && VAR_10 != -VAR_3)
   FUNC_2(VAR_5, "failed to resume link (errno=%d)\n",
          VAR_10);
 }


 return -VAR_2;
}
