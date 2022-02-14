
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct psmouse {unsigned char* packet; struct elantech_data* private; } ;
struct TYPE_2__ {scalar_t__ crc_enabled; } ;
struct elantech_data {TYPE_1__ info; } ;
typedef int debounce_packet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*,int const*,int) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_5)
{
 struct elantech_data *VAR_6 = VAR_5->private;
 static const u8 VAR_7[] = {
  0xc4, 0xff, 0xff, 0x02, 0xff, 0xff
 };
 unsigned char *VAR_8 = VAR_5->packet;





 if (!FUNC_0(VAR_8, VAR_7, sizeof(VAR_7)))
  return VAR_0;





 if (VAR_6->info.crc_enabled) {
  if ((VAR_8[3] & 0x09) == 0x08)
   return VAR_3;

  if ((VAR_8[3] & 0x09) == 0x09)
   return VAR_4;
 } else {
  if ((VAR_8[0] & 0x0c) == 0x04 && (VAR_8[3] & 0xcf) == 0x02)
   return VAR_3;

  if ((VAR_8[0] & 0x0c) == 0x0c && (VAR_8[3] & 0xce) == 0x0c)
   return VAR_4;
  if ((VAR_8[3] & 0x0f) == 0x06)
   return VAR_1;
 }

 return VAR_2;
}
