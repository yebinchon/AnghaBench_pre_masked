
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ps2dev {int dummy; } ;
struct psmouse {char* vendor; int model; int dev; struct ps2dev ps2dev; } ;
struct ps2pp_info {scalar_t__ kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ps2pp_info* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ps2dev*,int*,int) ;
 int FUNC_3 (struct psmouse*,int*,int) ;
 int FUNC_4 (struct psmouse*,struct ps2pp_info const*,int) ;
 int FUNC_5 (struct psmouse*,int) ;
 int FUNC_6 (struct psmouse*,struct ps2pp_info const*) ;
 int FUNC_7 (struct psmouse*,char*,int) ;

int FUNC_8(struct psmouse *VAR_7, bool VAR_8)
{
 struct ps2dev *VAR_9 = &VAR_7->ps2dev;
 const struct ps2pp_info *VAR_10;
 u8 VAR_11[4];
 u8 VAR_12, VAR_13;
 bool VAR_14 = 0;
 int VAR_15;

 VAR_11[0] = 0;
 FUNC_2(VAR_9, VAR_11, VAR_5);
 FUNC_2(VAR_9, ((void*)0), VAR_6);
 FUNC_2(VAR_9, ((void*)0), VAR_6);
 FUNC_2(VAR_9, ((void*)0), VAR_6);
 VAR_11[1] = 0;
 FUNC_2(VAR_9, VAR_11, VAR_4);

 VAR_12 = ((VAR_11[0] >> 4) & 0x07) | ((VAR_11[0] << 3) & 0x78);
 VAR_13 = VAR_11[1];

 if (!VAR_12 || !VAR_13)
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_12);
 if (VAR_10) {




  if (VAR_10->kind == VAR_3) {


   VAR_11[0] = 0x11; VAR_11[1] = 0x04; VAR_11[2] = 0x68;
   FUNC_2(VAR_9, VAR_11, 0x30d1);

   VAR_11[0] = 0x11; VAR_11[1] = 0x05; VAR_11[2] = 0x0b;
   FUNC_2(VAR_9, VAR_11, 0x30d1);

   VAR_11[0] = 0x11; VAR_11[1] = 0x09; VAR_11[2] = 0xc3;
   FUNC_2(VAR_9, VAR_11, 0x30d1);

   VAR_11[0] = 0;
   if (!FUNC_2(VAR_9, VAR_11, 0x13d1) &&
       VAR_11[0] == 0x06 && VAR_11[1] == 0x00 &&
       VAR_11[2] == 0x14) {
    VAR_14 = 1;
   }

  } else {

   VAR_11[0] = VAR_11[1] = VAR_11[2] = 0;
   FUNC_3(VAR_7, VAR_11, 0x39);
   FUNC_3(VAR_7, VAR_11, 0xDB);

   if ((VAR_11[0] & 0x78) == 0x48 &&
       (VAR_11[1] & 0xf3) == 0xc2 &&
       (VAR_11[2] & 0x03) == ((VAR_11[1] >> 2) & 3)) {
    FUNC_5(VAR_7, 0);
    VAR_14 = 1;
   }
  }

 } else {
  FUNC_7(VAR_7,
        "Detected unknown Logitech mouse model %d\n",
        VAR_12);
 }

 if (VAR_8) {
  VAR_7->vendor = "Logitech";
  VAR_7->model = VAR_12;

  if (VAR_14) {
   VAR_15 = FUNC_6(VAR_7, VAR_10);
   if (VAR_15)
    return VAR_15;
  }

  if (VAR_13 >= 3)
   FUNC_1(VAR_7->dev, VAR_2, VAR_0);

  if (VAR_10)
   FUNC_4(VAR_7, VAR_10, VAR_14);
 }

 return VAR_14 ? 0 : -VAR_1;
}
