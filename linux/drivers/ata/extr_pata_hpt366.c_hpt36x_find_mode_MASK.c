
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hpt_clock {int xfer_mode; int timing; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {struct hpt_clock* private_data; } ;


 int FUNC_0 () ;

__attribute__((used)) static u32 FUNC_1(struct ata_port *VAR_0, int VAR_1)
{
 struct hpt_clock *VAR_2 = VAR_0->host->private_data;

 while (VAR_2->xfer_mode) {
  if (VAR_2->xfer_mode == VAR_1)
   return VAR_2->timing;
  VAR_2++;
 }
 FUNC_0();
 return 0xffffffffU;
}
