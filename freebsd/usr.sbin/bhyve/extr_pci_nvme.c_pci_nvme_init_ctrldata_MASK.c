
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_controller_data {int vid; int ssvid; int rab; int* ieee; int mdts; int ver; int oacs; int acl; int aerl; int npss; int wctemp; int sqes; int cqes; int nn; int fna; TYPE_1__* power_state; scalar_t__ elpe; scalar_t__ lpa; scalar_t__ mic; scalar_t__ fr; scalar_t__ mn; } ;
struct pci_nvme_softc {struct nvme_controller_data ctrldata; } ;
struct TYPE_2__ {int mp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,char*,char) ;

__attribute__((used)) static void
FUNC_1(struct pci_nvme_softc *VAR_5)
{
 struct nvme_controller_data *VAR_6 = &VAR_5->ctrldata;

 VAR_6->vid = 0xFB5D;
 VAR_6->ssvid = 0x0000;

 FUNC_0((char *)VAR_6->mn, sizeof(VAR_6->mn), "bhyve-NVMe", ' ');
 FUNC_0((char *)VAR_6->fr, sizeof(VAR_6->fr), "1.0", ' ');


 VAR_6->rab = 4;


 VAR_6->ieee[0] = 0x58;
 VAR_6->ieee[1] = 0x9c;
 VAR_6->ieee[2] = 0xfc;

 VAR_6->mic = 0;

 VAR_6->mdts = 9;

 VAR_6->ver = 0x00010300;

 VAR_6->oacs = 1 << VAR_2;
 VAR_6->acl = 2;
 VAR_6->aerl = 4;

 VAR_6->lpa = 0;
 VAR_6->elpe = 0;
 VAR_6->npss = 1;


 VAR_6->wctemp = 0x0157;

 VAR_6->sqes = (6 << VAR_3) |
     (6 << VAR_4);
 VAR_6->cqes = (4 << VAR_0) |
     (4 << VAR_1);
 VAR_6->nn = 1;

 VAR_6->fna = 0x03;

 VAR_6->power_state[0].mp = 10;
}
