
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ata_port {int sector_buf; } ;
struct ata_device {int * ncq_non_data_cmds; TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ata_device*,char*,unsigned int) ;
 int FUNC_1 (struct ata_device*,char*) ;
 int FUNC_2 (struct ata_device*,int ) ;
 unsigned int FUNC_3 (struct ata_device*,int ,int ,int ,int) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ata_device *VAR_2)
{
 struct ata_port *VAR_3 = VAR_2->link->ap;
 unsigned int VAR_4;

 if (!FUNC_2(VAR_2, VAR_0)) {
  FUNC_1(VAR_2,
        "NCQ Send/Recv Log not supported\n");
  return;
 }
 VAR_4 = FUNC_3(VAR_2, VAR_0,
         0, VAR_3->sector_buf, 1);
 if (VAR_4) {
  FUNC_0(VAR_2,
       "failed to get NCQ Non-Data Log Emask 0x%x\n",
       VAR_4);
 } else {
  u8 *VAR_5 = VAR_2->ncq_non_data_cmds;

  FUNC_4(VAR_5, VAR_3->sector_buf, VAR_1);
 }
}
