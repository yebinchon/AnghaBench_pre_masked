
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_port {int sector_buf; } ;
struct ata_device {int horkage; int flags; int * ncq_send_recv_cmds; TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_device*,char*,...) ;
 int FUNC_1 (struct ata_device*,char*) ;
 int FUNC_2 (struct ata_device*,int ) ;
 unsigned int FUNC_3 (struct ata_device*,int ,int ,int ,int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ata_device *VAR_6)
{
 struct ata_port *VAR_7 = VAR_6->link->ap;
 unsigned int VAR_8;

 if (!FUNC_2(VAR_6, VAR_2)) {
  FUNC_1(VAR_6, "NCQ Send/Recv Log not supported\n");
  return;
 }
 VAR_8 = FUNC_3(VAR_6, VAR_2,
         0, VAR_7->sector_buf, 1);
 if (VAR_8) {
  FUNC_0(VAR_6,
       "failed to get NCQ Send/Recv Log Emask 0x%x\n",
       VAR_8);
 } else {
  u8 *VAR_9 = VAR_6->ncq_send_recv_cmds;

  VAR_6->flags |= VAR_0;
  FUNC_4(VAR_9, VAR_7->sector_buf, VAR_5);

  if (VAR_6->horkage & VAR_1) {
   FUNC_0(VAR_6, "disabling queued TRIM support\n");
   VAR_9[VAR_3] &=
    ~VAR_4;
  }
 }
}
