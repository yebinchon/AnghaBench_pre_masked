
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int* sector_buf; } ;
struct ata_device {int flags; TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_device*,char*,...) ;
 unsigned int FUNC_2 (struct ata_device*,int ,int ,int*,int) ;

__attribute__((used)) static void FUNC_3(struct ata_device *VAR_5)
{
 struct ata_port *VAR_6 = VAR_5->link->ap;
 unsigned int VAR_7;

 if (!(VAR_5->flags & VAR_1)) {
  VAR_5->flags &= ~VAR_0;
  return;
 }

 VAR_7 = FUNC_2(VAR_5,
         VAR_2,
         VAR_4,
         VAR_6->sector_buf,
         1);
 if (VAR_7) {
  FUNC_1(VAR_5,
       "failed to get Identify Device data, Emask 0x%x\n",
       VAR_7);
  return;
 }

 if (VAR_6->sector_buf[VAR_3] & FUNC_0(3)) {
  VAR_5->flags |= VAR_0;
 } else {
  VAR_5->flags &= ~VAR_0;
  FUNC_1(VAR_5, "SATA page does not support priority\n");
 }

}
