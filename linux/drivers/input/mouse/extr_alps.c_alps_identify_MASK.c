
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
struct alps_protocol_info {int dummy; } ;
struct alps_data {int fw_ver; int dev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct psmouse*) ;
 struct alps_protocol_info* FUNC_1 (unsigned char*,unsigned char*) ;
 scalar_t__ FUNC_2 (struct psmouse*,int ,int ,unsigned char*) ;
 int FUNC_3 (struct psmouse*,struct alps_data*,struct alps_protocol_info const*) ;
 struct alps_protocol_info VAR_6 ;
 struct alps_protocol_info VAR_7 ;
 struct alps_protocol_info VAR_8 ;
 struct alps_protocol_info VAR_9 ;
 struct alps_protocol_info VAR_10 ;
 struct alps_protocol_info VAR_11 ;
 struct alps_protocol_info VAR_12 ;
 int FUNC_4 (int ,unsigned char*,int) ;
 int FUNC_5 (struct psmouse*,char*,unsigned char*,unsigned char*) ;
 int FUNC_6 (struct psmouse*,char*,unsigned char*,unsigned char*) ;

__attribute__((used)) static int FUNC_7(struct psmouse *VAR_13, struct alps_data *VAR_14)
{
 const struct alps_protocol_info *VAR_15;
 unsigned char VAR_16[4], VAR_17[4], VAR_18[4];
 int VAR_19;







 if (FUNC_2(VAR_13, VAR_3,
    VAR_4, VAR_16))
  return -VAR_1;

 if ((VAR_16[0] & 0xf8) != 0 || VAR_16[1] != 0 || (VAR_16[2] != 10 && VAR_16[2] != 100))
  return -VAR_0;





 if (FUNC_2(VAR_13, VAR_3,
    VAR_5, VAR_17) ||
     FUNC_2(VAR_13, VAR_3,
    VAR_2, VAR_18) ||
     FUNC_0(VAR_13))
  return -VAR_1;

 VAR_15 = FUNC_1(VAR_17, VAR_18);
 if (!VAR_15) {
  if (VAR_17[0] == 0x73 && VAR_17[1] == 0x02 && VAR_17[2] == 0x64 &&
      VAR_18[2] == 0x8a) {
   VAR_15 = &VAR_8;
  } else if (VAR_17[0] == 0x73 && VAR_17[1] == 0x03 && VAR_17[2] == 0x50 &&
      VAR_18[0] == 0x73 && (VAR_18[1] == 0x01 || VAR_18[1] == 0x02)) {
   VAR_15 = &VAR_9;
  } else if (VAR_18[0] == 0x88 &&
      ((VAR_18[1] & 0xf0) == 0xb0 || (VAR_18[1] & 0xf0) == 0xc0)) {
   VAR_15 = &VAR_10;
  } else if (VAR_18[0] == 0x88 && VAR_18[1] == 0x08) {
   VAR_15 = &VAR_7;
  } else if (VAR_18[0] == 0x88 && VAR_18[1] == 0x07 &&
      VAR_18[2] >= 0x90 && VAR_18[2] <= 0x9d) {
   VAR_15 = &VAR_6;
  } else if (VAR_17[0] == 0x73 && VAR_17[1] == 0x03 &&
      (VAR_17[2] == 0x14 || VAR_17[2] == 0x28)) {
   VAR_15 = &VAR_11;
  } else if (VAR_17[0] == 0x73 && VAR_17[1] == 0x03 && VAR_17[2] == 0xc8) {
   VAR_15 = &VAR_12;
   FUNC_6(VAR_13,
         "Unsupported ALPS V9 touchpad: E7=%3ph, EC=%3ph\n",
         VAR_17, VAR_18);
   return -VAR_0;
  } else {
   FUNC_5(VAR_13,
        "Likely not an ALPS touchpad: E7=%3ph, EC=%3ph\n", VAR_17, VAR_18);
   return -VAR_0;
  }
 }

 if (VAR_14) {

  FUNC_4(VAR_14->dev_id, VAR_17, 3);
  FUNC_4(VAR_14->fw_ver, VAR_18, 3);
  VAR_19 = FUNC_3(VAR_13, VAR_14, VAR_15);
  if (VAR_19)
   return VAR_19;
 }

 return 0;
}
