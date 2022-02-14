
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btmrvl_sdio_card {int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btmrvl_sdio_card*,int ) ;
 int FUNC_1 (struct btmrvl_sdio_card*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct btmrvl_sdio_card *VAR_2)
{
 int VAR_3;

 if (!VAR_2 || !VAR_2->func)
  return -VAR_0;

 FUNC_2(VAR_2->func);

 VAR_3 = FUNC_0(VAR_2, VAR_1);

 FUNC_1(VAR_2);

 FUNC_3(VAR_2->func);

 return VAR_3;
}
