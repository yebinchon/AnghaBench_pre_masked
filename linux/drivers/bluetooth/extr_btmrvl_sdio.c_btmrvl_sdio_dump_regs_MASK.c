
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btmrvl_sdio_card {int func; } ;
struct TYPE_2__ {struct btmrvl_sdio_card* card; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;
typedef int buf ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct btmrvl_private*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int,int*) ;
 int FUNC_5 (int ,unsigned int,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*,...) ;

__attribute__((used)) static void FUNC_8(struct btmrvl_private *VAR_0)
{
 struct btmrvl_sdio_card *VAR_1 = VAR_0->btmrvl_dev.card;
 int VAR_2 = 0;
 unsigned int VAR_3, VAR_4, VAR_5;
 char VAR_6[256], *VAR_7;
 u8 VAR_8, VAR_9, VAR_10;
 int VAR_11 = 2;

 FUNC_1(VAR_0);
 FUNC_3(VAR_1->func);

 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
  FUNC_2(VAR_6, 0, sizeof(VAR_6));
  VAR_7 = VAR_6;

  if (VAR_8 == 0) {

   VAR_9 = VAR_8;
   VAR_4 = 0;
   VAR_5 = 9;
  } else {
   VAR_9 = 2;
   VAR_4 = 0;
   VAR_5 = 0x09;
  }

  VAR_7 += FUNC_7(VAR_7, "SDIO Func%d (%#x-%#x): ",
          VAR_9, VAR_4, VAR_5);
  for (VAR_3 = VAR_4; VAR_3 <= VAR_5; VAR_3++) {
   if (VAR_9 == 0)
    VAR_10 = FUNC_4(VAR_1->func, VAR_3, &VAR_2);
   else
    VAR_10 = FUNC_5(VAR_1->func, VAR_3, &VAR_2);

   if (!VAR_2) {
    VAR_7 += FUNC_7(VAR_7, "%02x ", VAR_10);
   } else {
    VAR_7 += FUNC_7(VAR_7, "ERR");
    break;
   }
  }

  FUNC_0("%s", VAR_6);
 }

 FUNC_6(VAR_1->func);
}
