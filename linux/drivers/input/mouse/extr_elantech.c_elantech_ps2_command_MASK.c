
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct elantech_data* private; struct ps2dev ps2dev; } ;
struct elantech_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ps2dev*,unsigned char*,int) ;
 int FUNC_3 (struct psmouse*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct psmouse *VAR_2,
    unsigned char *VAR_3, int VAR_4)
{
 struct ps2dev *VAR_5 = &VAR_2->ps2dev;
 struct elantech_data *VAR_6 = VAR_2->private;
 int VAR_7;
 int VAR_8 = VAR_1;

 do {
  VAR_7 = FUNC_2(VAR_5, VAR_3, VAR_4);
  if (VAR_7 == 0)
   break;
  VAR_8--;
  FUNC_0("retrying ps2 command 0x%02x (%d).\n",
    VAR_4, VAR_8);
  FUNC_1(VAR_0);
 } while (VAR_8 > 0);

 if (VAR_7)
  FUNC_3(VAR_2, "ps2 command 0x%02x failed.\n", VAR_4);

 return VAR_7;
}
