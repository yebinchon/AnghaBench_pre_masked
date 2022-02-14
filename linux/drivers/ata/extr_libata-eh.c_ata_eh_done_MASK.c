
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_eh_context {int i; } ;
struct ata_link {struct ata_eh_context eh_context; } ;
struct ata_device {int dummy; } ;


 int FUNC_0 (struct ata_link*,struct ata_device*,int *,unsigned int) ;

void FUNC_1(struct ata_link *VAR_0, struct ata_device *VAR_1,
   unsigned int VAR_2)
{
 struct ata_eh_context *VAR_3 = &VAR_0->eh_context;

 FUNC_0(VAR_0, VAR_1, &VAR_3->i, VAR_2);
}
