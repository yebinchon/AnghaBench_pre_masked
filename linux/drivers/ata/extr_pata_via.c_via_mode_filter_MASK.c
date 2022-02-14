
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct via_isa_bridge {scalar_t__ id; } ;
struct ata_host {struct via_isa_bridge* private_data; } ;
struct ata_device {scalar_t__ class; int id; TYPE_2__* link; } ;
typedef int model_num ;
struct TYPE_4__ {TYPE_1__* ap; } ;
struct TYPE_3__ {struct ata_host* host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ata_device*,char*) ;
 int FUNC_1 (int ,unsigned char*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (unsigned char*,char*) ;

__attribute__((used)) static unsigned long FUNC_4(struct ata_device *VAR_7, unsigned long VAR_8)
{
 struct ata_host *VAR_9 = VAR_7->link->ap->host;
 const struct via_isa_bridge *VAR_10 = VAR_9->private_data;
 unsigned char VAR_11[VAR_2 + 1];

 if (VAR_10->id == VAR_5) {
  FUNC_1(VAR_7->id, VAR_11, VAR_1, sizeof(VAR_11));
  if (FUNC_3(VAR_11, "TS64GSSD25-M") == 0) {
   FUNC_0(VAR_7,
 "disabling UDMA mode due to reported lockups with this device\n");
   VAR_8 &= ~ VAR_4;
  }
 }

 if (VAR_7->class == VAR_0 &&
     FUNC_2(VAR_6)) {
  FUNC_0(VAR_7, "controller locks up on ATAPI DMA, forcing PIO\n");
  VAR_8 &= VAR_3;
 }

 return VAR_8;
}
