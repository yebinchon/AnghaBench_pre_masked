
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_device {int devno; } ;
struct ata_acpi_gtm {int flags; TYPE_1__* drive; } ;
struct TYPE_2__ {int dma; int pio; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 unsigned long FUNC_1 (int ) ;

unsigned long FUNC_2(struct ata_device *VAR_3,
        const struct ata_acpi_gtm *VAR_4)
{
 unsigned long VAR_5 = 0;
 unsigned int VAR_6;
 int VAR_7;
 u8 VAR_8;


 VAR_7 = VAR_3->devno;
 if (!(VAR_4->flags & 0x10))
  VAR_7 = 0;


 VAR_8 = FUNC_0(VAR_1, VAR_4->drive[VAR_7].pio);
 VAR_5 |= FUNC_1(VAR_8);





 if (!(VAR_4->flags & (1 << (2 * VAR_7))))
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_2;

 VAR_8 = FUNC_0(VAR_6, VAR_4->drive[VAR_7].dma);
 VAR_5 |= FUNC_1(VAR_8);

 return VAR_5;
}
