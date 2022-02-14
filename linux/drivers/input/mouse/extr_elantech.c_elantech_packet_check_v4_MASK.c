
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {unsigned char* packet; struct elantech_data* private; } ;
struct TYPE_2__ {int fw_version; int* samples; scalar_t__ crc_enabled; } ;
struct elantech_data {TYPE_1__ info; scalar_t__ tp_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct psmouse *VAR_5)
{
 struct elantech_data *VAR_6 = VAR_5->private;
 unsigned char *VAR_7 = VAR_5->packet;
 unsigned char VAR_8 = VAR_7[3] & 0x03;
 unsigned int VAR_9;
 bool VAR_10;

 if (VAR_6->tp_dev && (VAR_7[3] & 0x0f) == 0x06)
  return VAR_0;


 VAR_9 = (VAR_6->info.fw_version & 0x0f0000) >> 16;
 if (VAR_6->info.crc_enabled)
  VAR_10 = ((VAR_7[3] & 0x08) == 0x00);
 else if (VAR_9 == 7 && VAR_6->info.samples[1] == 0x2A)
  VAR_10 = ((VAR_7[3] & 0x1c) == 0x10);
 else
  VAR_10 = ((VAR_7[0] & 0x08) == 0x00 &&
    (VAR_7[3] & 0x1c) == 0x10);

 if (!VAR_10)
  return VAR_1;

 switch (VAR_8) {
 case 0:
  return VAR_4;

 case 1:
  return VAR_2;

 case 2:
  return VAR_3;
 }

 return VAR_1;
}
