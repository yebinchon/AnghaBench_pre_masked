
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_taskfile {int hob_lbah; int hob_lbam; int hob_lbal; int hob_nsect; int hob_feature; int lbah; int lbam; int lbal; int nsect; int feature; int device; int flags; int protocol; int command; } ;
struct ata_port {int dev; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,int ,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_0, struct ata_taskfile *VAR_1)
{
 FUNC_0(VAR_0->dev,
  "taskfile cmd: 0x%02x protocol: %s flags: 0x%lx device: %x\n",
  VAR_1->command, FUNC_1(VAR_1->protocol), VAR_1->flags,
  VAR_1->device);
 FUNC_0(VAR_0->dev,
  "feature: 0x%02x nsect: 0x%x lbal: 0x%x lbam: 0x%x lbah: 0x%x\n",
  VAR_1->feature, VAR_1->nsect, VAR_1->lbal, VAR_1->lbam, VAR_1->lbah);
 FUNC_0(VAR_0->dev,
  "hob_feature: 0x%02x hob_nsect: 0x%x hob_lbal: 0x%x hob_lbam: 0x%x hob_lbah: 0x%x\n",
  VAR_1->hob_feature, VAR_1->hob_nsect, VAR_1->hob_lbal, VAR_1->hob_lbam,
  VAR_1->hob_lbah);
}
