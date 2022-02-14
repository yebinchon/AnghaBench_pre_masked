
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bt3c_info {TYPE_2__* p_dev; } ;
typedef int b ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {unsigned int start; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,int,int) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,int,unsigned int*) ;
 scalar_t__ FUNC_6 (char*,int,unsigned long*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct bt3c_info *VAR_4,
         const unsigned char *VAR_5,
         int VAR_6)
{
 char *VAR_7 = (char *) VAR_5;
 char VAR_8[9];
 unsigned int VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16 = 0;

 VAR_9 = VAR_4->p_dev->resource[0]->start;


 FUNC_2(VAR_9, 0x8040, 0x0404);
 FUNC_2(VAR_9, 0x8040, 0x0400);

 FUNC_10(1);

 FUNC_2(VAR_9, 0x8040, 0x0404);

 FUNC_10(17);


 while (VAR_6) {
  if (VAR_7[0] != 'S') {
   FUNC_0("Bad address in firmware");
   VAR_16 = -VAR_1;
   goto error;
  }

  FUNC_8(VAR_8, 0, sizeof(VAR_8));
  FUNC_7(VAR_8, VAR_7 + 2, 2);
  if (FUNC_6(VAR_8, 16, &VAR_12) < 0)
   return -VAR_3;

  FUNC_8(VAR_8, 0, sizeof(VAR_8));
  FUNC_7(VAR_8, VAR_7 + 4, 8);
  if (FUNC_6(VAR_8, 16, &VAR_13) < 0)
   return -VAR_3;

  FUNC_8(VAR_8, 0, sizeof(VAR_8));
  FUNC_7(VAR_8, VAR_7 + (VAR_12 * 2) + 2, 2);
  if (FUNC_6(VAR_8, 16, &VAR_14) < 0)
   return -VAR_3;

  FUNC_8(VAR_8, 0, sizeof(VAR_8));
  for (VAR_10 = 0, VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
   FUNC_7(VAR_8, VAR_7 + (VAR_15 * 2) + 2, 2);
   if (FUNC_5(VAR_8, 16, &VAR_11))
    return -VAR_3;
   VAR_10 += VAR_11;
  }

  if (((VAR_10 + VAR_14) & 0xff) != 0xff) {
   FUNC_0("Checksum error in firmware");
   VAR_16 = -VAR_2;
   goto error;
  }

  if (VAR_7[1] == '3') {
   FUNC_1(VAR_9, VAR_13);

   FUNC_8(VAR_8, 0, sizeof(VAR_8));
   for (VAR_15 = 0; VAR_15 < (VAR_12 - 4) / 2; VAR_15++) {
    FUNC_7(VAR_8, VAR_7 + (VAR_15 * 4) + 12, 4);
    if (FUNC_5(VAR_8, 16, &VAR_10))
     return -VAR_3;
    FUNC_3(VAR_9, VAR_10);
   }
  }

  VAR_7 += (VAR_12 * 2) + 6;
  VAR_6 -= (VAR_12 * 2) + 6;
 }

 FUNC_10(17);


 FUNC_1(VAR_9, 0x3000);
 FUNC_9(FUNC_4(VAR_9 + VAR_0) | 0x40, VAR_9 + VAR_0);

error:
 FUNC_10(17);


 FUNC_2(VAR_9, 0x7006, 0x0000);
 FUNC_2(VAR_9, 0x7005, 0x0000);
 FUNC_2(VAR_9, 0x7001, 0x0000);

 return VAR_16;
}
