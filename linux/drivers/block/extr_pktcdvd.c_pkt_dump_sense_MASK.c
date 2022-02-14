
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int sense_key; int ascq; int asc; } ;
struct pktcdvd_device {int dummy; } ;
struct packet_command {int cmd; struct scsi_sense_hdr* sshdr; } ;


 int VAR_0 ;
 int FUNC_0 (struct pktcdvd_device*,char*,int ,int ,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pktcdvd_device *VAR_1,
      struct packet_command *VAR_2)
{
 struct scsi_sense_hdr *VAR_3 = VAR_2->sshdr;

 if (VAR_3)
  FUNC_0(VAR_1, "%*ph - sense %02x.%02x.%02x (%s)\n",
   VAR_0, VAR_2->cmd,
   VAR_3->sense_key, VAR_3->asc, VAR_3->ascq,
   FUNC_1(VAR_3->sense_key));
 else
  FUNC_0(VAR_1, "%*ph - no sense\n", VAR_0, VAR_2->cmd);
}
