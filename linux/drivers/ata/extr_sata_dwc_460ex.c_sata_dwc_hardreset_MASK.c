
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sata_dwc_device {TYPE_1__* sata_dwc_regs; } ;
struct ata_link {int ap; } ;
struct TYPE_2__ {int dbtsr; int dmacr; } ;


 int VAR_0 ;
 struct sata_dwc_device* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct sata_dwc_device*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct ata_link*,unsigned int*,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ata_link *VAR_2, unsigned int *VAR_3,
         unsigned long VAR_4)
{
 struct sata_dwc_device *VAR_5 = FUNC_0(VAR_2->ap);
 int VAR_6;

 VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_4);

 FUNC_3(VAR_5);


 FUNC_4(&VAR_5->sata_dwc_regs->dmacr,
   VAR_1);


 FUNC_4(&VAR_5->sata_dwc_regs->dbtsr,
   FUNC_2(VAR_0) |
   FUNC_1(VAR_0));

 return VAR_6;
}
