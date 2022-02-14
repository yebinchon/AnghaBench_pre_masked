
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct cis_info {int man_id; int prod_id; int max_block_size; } ;
struct cam_device {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct cam_device*,int ,int,int*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,int) ;

int
FUNC_5(struct cam_device *VAR_1, uint8_t VAR_2,
     uint32_t VAR_3, struct cis_info *VAR_4) {
 uint8_t VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8;

 char *VAR_9[4];
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 char VAR_15[256];

 VAR_7 = 0;
 FUNC_0(VAR_15, 0, 256);
 do {
  VAR_8 = VAR_3;
  VAR_5 = FUNC_2(VAR_1, 0, VAR_8++, &VAR_14);
  if (VAR_5 == VAR_0)
   break;
  if (VAR_5 == 0) {
   VAR_3++;
   continue;
  }
  VAR_6 = FUNC_2(VAR_1, 0, VAR_8++, &VAR_14);
  if (VAR_6 == 0 && VAR_5 != 0x00) {
   FUNC_3("Parse error: 0-length tuple %02X\n", VAR_5);
   return -1;
  }

  switch (VAR_5) {
  case 128:
   VAR_8 += 2;
   for (VAR_13 = 0, VAR_10 = 0, VAR_11 = 0;
        (VAR_13 < 4) && ((VAR_11 + 4) < 256); VAR_11++) {
    VAR_12 = FUNC_2(VAR_1, 0, VAR_8 + VAR_11, &VAR_14);
    FUNC_1("count=%d, start=%d, i=%d, Got %c (0x%02x)\n", VAR_13, VAR_10, VAR_11, VAR_12, VAR_12);
    if (VAR_12 == 0xff)
     break;
    VAR_15[VAR_11] = VAR_12;
    if (VAR_12 == 0) {
     VAR_9[VAR_13] =
      VAR_15 + VAR_10;
     VAR_10 = VAR_11 + 1;
     VAR_13++;
    }
   }
   FUNC_1("Card info:");
   for (VAR_11=0; VAR_11<4; VAR_11++)
    if (VAR_9[VAR_11])
     FUNC_1(" %s", VAR_9[VAR_11]);
   FUNC_1("\n");
   break;
  case 129:
   VAR_4->man_id = FUNC_2(VAR_1, 0, VAR_8++, &VAR_14);
   VAR_4->man_id |= FUNC_2(VAR_1, 0, VAR_8++, &VAR_14) << 8;

   VAR_4->prod_id = FUNC_2(VAR_1, 0, VAR_8++, &VAR_14);
   VAR_4->prod_id |= FUNC_2(VAR_1, 0, VAR_8++, &VAR_14) << 8;
   break;
  case 130:

   break;
  case 131:
   if (VAR_6 < 4) {
    FUNC_1("FUNCE is too short: %d\n", VAR_6);
    break;
   }
   if (VAR_2 == 0) {

    VAR_8++;
    VAR_4->max_block_size = FUNC_2(VAR_1, 0, VAR_8++, &VAR_14);
    VAR_4->max_block_size |= FUNC_2(VAR_1, 0, VAR_8++, &VAR_14) << 8;
   } else {
    VAR_4->max_block_size = FUNC_2(VAR_1, 0, VAR_8 + 0xC, &VAR_14);
    VAR_4->max_block_size |= FUNC_2(VAR_1, 0, VAR_8 + 0xD, &VAR_14) << 8;
   }
   break;
  default:
   FUNC_4("Skipping tuple ID %02X len %02X\n", VAR_5, VAR_6);
  }
  VAR_3 += VAR_6 + 2;
  VAR_7++;
 } while (VAR_7 < 20);

 return 0;
}
