
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hpt_clock {int xfer_speed; int timing; } ;
struct ata_port {int dummy; } ;


 int FUNC_0 () ;
 struct hpt_clock* VAR_0 ;

__attribute__((used)) static u32 FUNC_1(struct ata_port *VAR_1, int VAR_2)
{
 struct hpt_clock *VAR_3 = VAR_0;

 while (VAR_3->xfer_speed) {
  if (VAR_3->xfer_speed == VAR_2)
   return VAR_3->timing;
  VAR_3++;
 }
 FUNC_0();
 return 0xffffffffU;
}
