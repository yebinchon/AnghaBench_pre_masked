
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int action; } ;
struct ata_eh_context {TYPE_2__ i; } ;
struct TYPE_3__ {struct ata_eh_context eh_context; } ;
struct ata_port {int pflags; TYPE_1__ link; } ;
struct ata_link {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_port*,int) ;
 int FUNC_1 (struct ata_port*,char*,char*,int,int) ;
 int FUNC_2 (struct ata_link*,unsigned long) ;
 int VAR_5 ;
 int FUNC_3 (struct ata_link*,int ,int*) ;
 int FUNC_4 (struct ata_link*,int ,int) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ata_link *VAR_6, unsigned long VAR_7)
{
 struct ata_port *VAR_8 = VAR_6->ap;
 struct ata_eh_context *VAR_9 = &VAR_8->link.eh_context;
 unsigned long VAR_10 = VAR_5 + (VAR_2 * 5);
 u32 VAR_11, VAR_12;
 int VAR_13;


 if (!(VAR_8->pflags & VAR_1))
  goto skip_scr;


 FUNC_4(VAR_6, VAR_3, 0x300);
 FUNC_3(VAR_6, VAR_3, &VAR_12);


 do {
  FUNC_0(VAR_6->ap, 200);
  FUNC_3(VAR_6, VAR_4, &VAR_11);
  if ((VAR_11 & 0xf) != 1)
   break;
 } while (FUNC_5(VAR_5, VAR_10));


 FUNC_3(VAR_6, VAR_4, &VAR_11);
 FUNC_3(VAR_6, VAR_3, &VAR_12);

 VAR_13 = (VAR_11 & 0xf) == 0x3;

 FUNC_1(VAR_8,
        "SATA link %s 1.5 Gbps (SStatus %X SControl %X)\n",
        VAR_13 ? "up" : "down", VAR_11, VAR_12);


 FUNC_3(VAR_6, VAR_4, &VAR_11);

 if (!VAR_13) {

  VAR_9->i.action &= ~VAR_0;
  return 0;
 }

 skip_scr:

 FUNC_2(VAR_6, VAR_7);

 return 0;
}
