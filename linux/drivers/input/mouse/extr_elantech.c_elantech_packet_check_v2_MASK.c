
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {unsigned char* packet; struct elantech_data* private; } ;
struct TYPE_2__ {scalar_t__ reports_pressure; } ;
struct elantech_data {TYPE_1__ info; } ;



__attribute__((used)) static int FUNC_0(struct psmouse *VAR_0)
{
 struct elantech_data *VAR_1 = VAR_0->private;
 unsigned char *VAR_2 = VAR_0->packet;
 if (VAR_1->info.reports_pressure)
  return (VAR_2[0] & 0x0c) == 0x04 &&
         (VAR_2[3] & 0x0f) == 0x02;

 if ((VAR_2[0] & 0xc0) == 0x80)
  return (VAR_2[0] & 0x0c) == 0x0c &&
         (VAR_2[3] & 0x0e) == 0x08;

 return (VAR_2[0] & 0x3c) == 0x3c &&
        (VAR_2[1] & 0xf0) == 0x00 &&
        (VAR_2[3] & 0x3e) == 0x38 &&
        (VAR_2[4] & 0xf0) == 0x00;
}
