
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int action; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_link {struct ata_eh_context eh_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_link*) ;
 int FUNC_1 (struct ata_link*,char*,int) ;
 int FUNC_2 (struct ata_link*,unsigned long) ;
 int FUNC_3 (struct ata_link*,unsigned long) ;

int FUNC_4(struct ata_link *VAR_2, unsigned long VAR_3)
{
 struct ata_eh_context *VAR_4 = &VAR_2->eh_context;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;


 if (VAR_4->i.action & VAR_0)
  return 0;


 if (!FUNC_0(VAR_2)) {
  VAR_5 = FUNC_2(VAR_2, VAR_3);
  if (VAR_5 && VAR_5 != -VAR_1) {
   FUNC_1(VAR_2,
          "device not ready (errno=%d), forcing hardreset\n",
          VAR_5);
   VAR_4->i.action |= VAR_0;
  }
 }

 return 0;
}
