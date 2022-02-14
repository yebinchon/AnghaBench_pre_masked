
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixp4xx_pata_data {scalar_t__ cs1; int cs0; } ;
struct ata_ioports {int command_addr; int status_addr; int device_addr; int lbah_addr; int lbam_addr; int lbal_addr; int nsect_addr; int feature_addr; int error_addr; scalar_t__ ctl_addr; scalar_t__ altstatus_addr; int cmd_addr; int data_addr; } ;
struct ata_port {struct ata_ioports ioaddr; } ;


 int FUNC_0 (struct ata_port*,char*,unsigned long,unsigned long) ;
 int FUNC_1 (struct ata_ioports*) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_0,
         struct ixp4xx_pata_data *VAR_1,
         unsigned long VAR_2, unsigned long VAR_3)
{
 struct ata_ioports *VAR_4 = &VAR_0->ioaddr;
 unsigned long VAR_5 = VAR_2;
 unsigned long VAR_6 = VAR_3 + 0x06;

 VAR_4->cmd_addr = VAR_1->cs0;
 VAR_4->altstatus_addr = VAR_1->cs1 + 0x06;
 VAR_4->ctl_addr = VAR_1->cs1 + 0x06;

 FUNC_1(VAR_4);







 *(unsigned long *)&VAR_4->data_addr ^= 0x02;
 *(unsigned long *)&VAR_4->cmd_addr ^= 0x03;
 *(unsigned long *)&VAR_4->altstatus_addr ^= 0x03;
 *(unsigned long *)&VAR_4->ctl_addr ^= 0x03;
 *(unsigned long *)&VAR_4->error_addr ^= 0x03;
 *(unsigned long *)&VAR_4->feature_addr ^= 0x03;
 *(unsigned long *)&VAR_4->nsect_addr ^= 0x03;
 *(unsigned long *)&VAR_4->lbal_addr ^= 0x03;
 *(unsigned long *)&VAR_4->lbam_addr ^= 0x03;
 *(unsigned long *)&VAR_4->lbah_addr ^= 0x03;
 *(unsigned long *)&VAR_4->device_addr ^= 0x03;
 *(unsigned long *)&VAR_4->status_addr ^= 0x03;
 *(unsigned long *)&VAR_4->command_addr ^= 0x03;

 VAR_5 ^= 0x03;
 VAR_6 ^= 0x03;


 FUNC_0(VAR_0, "cmd 0x%lx ctl 0x%lx", VAR_5, VAR_6);
}
