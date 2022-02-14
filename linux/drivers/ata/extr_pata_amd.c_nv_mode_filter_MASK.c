
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ata_port {scalar_t__ port_no; TYPE_2__* host; } ;
struct ata_device {scalar_t__ devno; TYPE_1__* link; } ;
struct ata_acpi_gtm {int flags; TYPE_3__* drive; } ;
typedef int acpi_str ;
struct TYPE_6__ {int dma; } ;
struct TYPE_5__ {scalar_t__ private_data; } ;
struct TYPE_4__ {struct ata_port* ap; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 unsigned long FUNC_0 (struct ata_device*,struct ata_acpi_gtm const*) ;
 struct ata_acpi_gtm* FUNC_1 (struct ata_port*) ;
 unsigned long FUNC_2 (int ,int ,unsigned int const) ;
 int FUNC_3 (struct ata_port*,char*,unsigned long,unsigned long,unsigned long,unsigned long,int,unsigned long,char*) ;
 int FUNC_4 (char*,int,char*,int,int,int) ;

__attribute__((used)) static unsigned long FUNC_5(struct ata_device *VAR_5,
        unsigned long VAR_6)
{
 static const unsigned int VAR_7[] =
  { 132, 133, 134, 0,
    131, 130, 129, 128 };
 struct ata_port *VAR_8 = VAR_5->link->ap;
 char VAR_9[32] = "";
 u32 VAR_10, VAR_11;
 const struct ata_acpi_gtm *VAR_12;
 unsigned long VAR_13 = 0, VAR_14 = 0, VAR_15;


 VAR_11 = VAR_10 = (unsigned long)VAR_8->host->private_data;

 if (VAR_8->port_no == 0)
  VAR_11 >>= 16;
 if (VAR_5->devno == 0)
  VAR_11 >>= 8;

 if ((VAR_11 & 0xc0) == 0xc0)
  VAR_13 = FUNC_2(0, 0, VAR_7[VAR_11 & 0x7]);


 VAR_12 = FUNC_1(VAR_8);
 if (VAR_12) {
  VAR_14 = FUNC_0(VAR_5, VAR_12);

  FUNC_4(VAR_9, sizeof(VAR_9), " (%u:%u:0x%x)",
    VAR_12->drive[0].dma, VAR_12->drive[1].dma, VAR_12->flags);
 }


 VAR_15 = VAR_13 | VAR_14;




 if (!(VAR_15 & VAR_1))
  VAR_15 |= VAR_1;
 if (!(VAR_15 & (VAR_0 | VAR_2)))
  VAR_15 |= VAR_0 | VAR_2;


 VAR_15 |= FUNC_2(VAR_4, VAR_3, 132);

 FUNC_3(VAR_8, "nv_mode_filter: 0x%lx&0x%lx->0x%lx, "
   "BIOS=0x%lx (0x%x) ACPI=0x%lx%s\n",
   VAR_6, VAR_15, VAR_6 & VAR_15, VAR_13,
   VAR_10, VAR_14, VAR_9);

 return VAR_6 & VAR_15;
}
