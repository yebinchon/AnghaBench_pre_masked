
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xilly_idt_handle {unsigned char* idt; unsigned char* chandesc; int entries; } ;
struct xilly_endpoint {int idtlen; int num_channels; int dev; TYPE_2__** channels; } ;
struct TYPE_4__ {TYPE_1__** wr_buffers; } ;
struct TYPE_3__ {unsigned char* addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct xilly_endpoint *VAR_1,
     struct xilly_idt_handle *VAR_2)
{
 int VAR_3 = 0;
 unsigned char *VAR_4 = VAR_1->channels[1]->wr_buffers[0]->addr;
 unsigned char *VAR_5 = VAR_4 + VAR_1->idtlen - 4;
 unsigned char *VAR_6;
 int VAR_7;

 VAR_6 = VAR_4;
 VAR_2->idt = VAR_4;

 VAR_6++;

 while ((VAR_6 <= VAR_5) && *VAR_6) {
  while ((VAR_6 <= VAR_5) && *VAR_6++)
                                          ;
  VAR_3++;
 }

 VAR_6++;

 if (VAR_6 > VAR_5) {
  FUNC_0(VAR_1->dev,
   "IDT device name list overflow. Aborting.\n");
  return -VAR_0;
 }
 VAR_2->chandesc = VAR_6;

 VAR_7 = VAR_1->idtlen - (3 + ((int) (VAR_6 - VAR_4)));

 if (VAR_7 & 0x03) {
  FUNC_0(VAR_1->dev,
   "Corrupt IDT device name list. Aborting.\n");
  return -VAR_0;
 }

 VAR_2->entries = VAR_7 >> 2;
 VAR_1->num_channels = VAR_3;

 return 0;
}
