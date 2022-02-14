
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wacom {int* data; int res_x; int res_y; int extra_z_bits; int flags; int max_x; int max_y; int eraser_mask; TYPE_2__* dev; int result; } ;
struct TYPE_3__ {int version; } ;
struct TYPE_4__ {char* name; int dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int *,char*,int*) ;
 int FUNC_1 (int *,char*,char*,int,int) ;
 int FUNC_2 (char*,char*,int*,int*) ;
 char* FUNC_3 (int*,char) ;

__attribute__((used)) static void FUNC_4(struct wacom *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 char *VAR_8;

 VAR_8 = FUNC_3(VAR_4->data, 'V');
 if (VAR_8)
  VAR_7 = FUNC_2(VAR_8 + 1, "%u.%u", &VAR_5, &VAR_6);
 if (VAR_7 != 2)
  VAR_5 = VAR_6 = 0;

 switch (VAR_4->data[2] << 8 | VAR_4->data[3]) {
 case 132:
 case 131:
  if ((VAR_4->data[2] << 8 | VAR_4->data[3]) == 132) {
   VAR_4->dev->name = "Wacom Cintiq";
   VAR_4->dev->id.version = 132;
  } else {
   VAR_4->dev->name = "Wacom Cintiq II";
   VAR_4->dev->id.version = 131;
  }
  VAR_4->res_x = 508;
  VAR_4->res_y = 508;

  switch (VAR_4->data[5] << 8 | VAR_4->data[6]) {
  case 0x3731:
   VAR_4->res_x = 2540;
   VAR_4->res_y = 2540;

  case 0x3535:
  case 0x3830:
   VAR_4->extra_z_bits = 2;
  }

  VAR_4->flags = VAR_1;
  break;

 case 128:
  VAR_4->dev->name = "Wacom Penpartner";
  VAR_4->dev->id.version = 128;
  VAR_4->res_x = 1000;
  VAR_4->res_y = 1000;
  break;

 case 129:
  VAR_4->dev->name = "Wacom Graphire";
  VAR_4->dev->id.version = 129;
  VAR_4->res_x = 1016;
  VAR_4->res_y = 1016;
  VAR_4->max_x = 5103;
  VAR_4->max_y = 3711;
  VAR_4->extra_z_bits = 2;
  VAR_4->eraser_mask = 0x08;
  VAR_4->flags = VAR_3 | VAR_2;
  break;

 case 133:
 case 130:
  VAR_4->dev->name = "Wacom Digitizer II";
  VAR_4->dev->id.version = 130;
  if (VAR_5 == 1 && VAR_6 <= 2)
   VAR_4->extra_z_bits = 0;
  break;

 default:
  FUNC_0(&VAR_4->dev->dev, "Unsupported Wacom model %s\n",
   VAR_4->data);
  VAR_4->result = -VAR_0;
  return;
 }

 FUNC_1(&VAR_4->dev->dev, "%s tablet, version %u.%u\n",
   VAR_4->dev->name, VAR_5, VAR_6);
}
