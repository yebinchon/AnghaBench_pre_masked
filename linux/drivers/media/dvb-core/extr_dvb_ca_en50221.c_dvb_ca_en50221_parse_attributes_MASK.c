
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct dvb_ca_slot {int config_base; int config_option; } ;
struct dvb_ca_private {TYPE_2__* dvbdev; struct dvb_ca_slot* slot_info; } ;
struct TYPE_4__ {TYPE_1__* adapter; } ;
struct TYPE_3__ {int num; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (struct dvb_ca_private*,int,int*,int*,int*,int*) ;
 char* FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,int ,char,char,char,char) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_ca_private *VAR_1, int VAR_2)
{
 struct dvb_ca_slot *VAR_3;
 int VAR_4 = 0;
 int VAR_5;
 int VAR_6;
 u8 VAR_7[257];
 char *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13;
 u16 VAR_14 = 0;
 u16 VAR_15 = 0;


 VAR_10 = FUNC_1(VAR_1, VAR_2, &VAR_4, &VAR_6,
        &VAR_5, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_6 != 0x1D)
  return -VAR_0;


 VAR_10 = FUNC_1(VAR_1, VAR_2, &VAR_4, &VAR_6,
        &VAR_5, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_6 != 0x1C)
  return -VAR_0;


 VAR_10 = FUNC_1(VAR_1, VAR_2, &VAR_4, &VAR_6,
        &VAR_5, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_6 != 0x15)
  return -VAR_0;


 VAR_10 = FUNC_1(VAR_1, VAR_2, &VAR_4, &VAR_6,
        &VAR_5, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_6 != 0x20)
  return -VAR_0;
 if (VAR_5 != 4)
  return -VAR_0;
 VAR_14 = (VAR_7[1] << 8) | VAR_7[0];
 VAR_15 = (VAR_7[3] << 8) | VAR_7[2];


 VAR_10 = FUNC_1(VAR_1, VAR_2, &VAR_4, &VAR_6,
        &VAR_5, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_6 != 0x1A)
  return -VAR_0;
 if (VAR_5 < 3)
  return -VAR_0;


 VAR_9 = VAR_7[0] & 3;
 if (VAR_5 < (3 + VAR_9 + 14))
  return -VAR_0;
 VAR_3 = &VAR_1->slot_info[VAR_2];
 VAR_3->config_base = 0;
 for (VAR_13 = 0; VAR_13 < VAR_9 + 1; VAR_13++)
  VAR_3->config_base |= (VAR_7[2 + VAR_13] << (8 * VAR_13));


 VAR_8 = FUNC_2((char *)VAR_7, VAR_5, "DVB_CI_V", 8);
 if (!VAR_8)
  return -VAR_0;
 if (VAR_5 < ((VAR_8 - (char *)VAR_7) + 12))
  return -VAR_0;


 if (FUNC_4(VAR_8 + 8, "1.00", 4)) {
  FUNC_3("dvb_ca adapter %d: Unsupported DVB CAM module version %c%c%c%c\n",
         VAR_1->dvbdev->adapter->num, VAR_8[8], VAR_8[9],
         VAR_8[10], VAR_8[11]);
  return -VAR_0;
 }


 while ((!VAR_12) && (VAR_4 < 0x1000)) {
  VAR_10 = FUNC_1(VAR_1, VAR_2, &VAR_4,
         &VAR_6, &VAR_5,
         VAR_7);
  if (VAR_10 < 0)
   return VAR_10;
  switch (VAR_6) {
  case 0x1B:
   if (VAR_5 < (2 + 11 + 17))
    break;


   if (VAR_11)
    break;


   VAR_3->config_option = VAR_7[0] & 0x3f;


   if (!FUNC_2((char *)VAR_7, VAR_5,
         "DVB_HOST", 8) ||
       !FUNC_2((char *)VAR_7, VAR_5,
         "DVB_CI_MODULE", 13))
    break;

   VAR_11 = 1;
   break;

  case 0x14:
   break;

  case 0xFF:
   VAR_12 = 1;
   break;

  default:
   FUNC_0("dvb_ca: Skipping unknown tuple type:0x%x length:0x%x\n",
    VAR_6, VAR_5);
   break;
  }
 }

 if ((VAR_4 > 0x1000) || (!VAR_11))
  return -VAR_0;

 FUNC_0("Valid DVB CAM detected MANID:%x DEVID:%x CONFIGBASE:0x%x CONFIGOPTION:0x%x\n",
  VAR_14, VAR_15, VAR_3->config_base, VAR_3->config_option);


 return 0;
}
