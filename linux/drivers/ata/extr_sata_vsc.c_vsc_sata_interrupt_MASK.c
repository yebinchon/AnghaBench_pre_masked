
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ata_host {unsigned int n_ports; int lock; int * ports; int dev; scalar_t__* iomap; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct ata_host *VAR_4 = VAR_3;
 unsigned int VAR_5;
 unsigned int VAR_6 = 0;
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_4->iomap[VAR_0] + VAR_1);

 if (FUNC_5(VAR_7 == 0xffffffff || VAR_7 == 0)) {
  if (VAR_7)
   FUNC_1(VAR_4->dev,
    ": IRQ status == 0xffffffff, PCI fault or device removal?\n");
  goto out;
 }

 FUNC_3(&VAR_4->lock);

 for (VAR_5 = 0; VAR_5 < VAR_4->n_ports; VAR_5++) {
  u8 VAR_8 = (VAR_7 >> (8 * VAR_5)) & 0xff;
  if (VAR_8) {
   FUNC_6(VAR_8, VAR_4->ports[VAR_5]);
   VAR_6++;
  }
 }

 FUNC_4(&VAR_4->lock);
out:
 return FUNC_0(VAR_6);
}
