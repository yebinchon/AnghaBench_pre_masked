
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse {int ps2dev; struct elantech_data* private; } ;
struct TYPE_2__ {int hw_version; } ;
struct elantech_data {TYPE_1__ info; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct psmouse*,int *,unsigned char) ;
 int FUNC_1 (int *,int *,unsigned char) ;
 int FUNC_2 (int *,unsigned char) ;
 int FUNC_3 (struct psmouse*,char*,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_4(struct psmouse *VAR_4, unsigned char VAR_5,
    unsigned char VAR_6)
{
 struct elantech_data *VAR_7 = VAR_4->private;
 int VAR_8 = 0;

 if (VAR_5 < 0x07 || VAR_5 > 0x26)
  return -1;

 if (VAR_5 > 0x11 && VAR_5 < 0x20)
  return -1;

 switch (VAR_7->info.hw_version) {
 case 1:
  if (FUNC_2(&VAR_4->ps2dev, VAR_2) ||
      FUNC_2(&VAR_4->ps2dev, VAR_5) ||
      FUNC_2(&VAR_4->ps2dev, VAR_6) ||
      FUNC_1(&VAR_4->ps2dev, ((void*)0), VAR_3)) {
   VAR_8 = -1;
  }
  break;

 case 2:
  if (FUNC_0(VAR_4, ((void*)0), VAR_0) ||
      FUNC_0(VAR_4, ((void*)0), VAR_2) ||
      FUNC_0(VAR_4, ((void*)0), VAR_0) ||
      FUNC_0(VAR_4, ((void*)0), VAR_5) ||
      FUNC_0(VAR_4, ((void*)0), VAR_0) ||
      FUNC_0(VAR_4, ((void*)0), VAR_6) ||
      FUNC_0(VAR_4, ((void*)0), VAR_3)) {
   VAR_8 = -1;
  }
  break;

 case 3:
  if (FUNC_0(VAR_4, ((void*)0), VAR_0) ||
      FUNC_0(VAR_4, ((void*)0), VAR_1) ||
      FUNC_0(VAR_4, ((void*)0), VAR_0) ||
      FUNC_0(VAR_4, ((void*)0), VAR_5) ||
      FUNC_0(VAR_4, ((void*)0), VAR_0) ||
      FUNC_0(VAR_4, ((void*)0), VAR_6) ||
      FUNC_0(VAR_4, ((void*)0), VAR_3)) {
   VAR_8 = -1;
  }
  break;

 case 4:
  if (FUNC_0(VAR_4, ((void*)0), VAR_0) ||
      FUNC_0(VAR_4, ((void*)0), VAR_1) ||
      FUNC_0(VAR_4, ((void*)0), VAR_0) ||
      FUNC_0(VAR_4, ((void*)0), VAR_5) ||
      FUNC_0(VAR_4, ((void*)0), VAR_0) ||
      FUNC_0(VAR_4, ((void*)0), VAR_1) ||
      FUNC_0(VAR_4, ((void*)0), VAR_0) ||
      FUNC_0(VAR_4, ((void*)0), VAR_6) ||
      FUNC_0(VAR_4, ((void*)0), VAR_3)) {
   VAR_8 = -1;
  }
  break;
 }

 if (VAR_8)
  FUNC_3(VAR_4,
       "failed to write register 0x%02x with value 0x%02x.\n",
       VAR_5, VAR_6);

 return VAR_8;
}
