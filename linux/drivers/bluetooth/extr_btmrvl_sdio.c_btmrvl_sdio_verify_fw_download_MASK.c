
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct btmrvl_sdio_card {int func; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct btmrvl_sdio_card*,scalar_t__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct btmrvl_sdio_card *VAR_2,
        int VAR_3)
{
 u16 VAR_4;
 int VAR_5, VAR_6;


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  FUNC_2(VAR_2->func);
  VAR_6 = FUNC_0(VAR_2, &VAR_4);
  FUNC_3(VAR_2->func);
  if (VAR_6 < 0)
   continue;

  if (VAR_4 == VAR_1)
   return 0;

  FUNC_1(100);
 }

 return -VAR_0;
}
