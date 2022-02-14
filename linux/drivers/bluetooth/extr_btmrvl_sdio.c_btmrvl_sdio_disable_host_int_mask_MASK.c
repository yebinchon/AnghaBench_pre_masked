
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct btmrvl_sdio_card {TYPE_1__* reg; int func; } ;
struct TYPE_2__ {int host_int_mask; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct btmrvl_sdio_card *VAR_1,
        u8 VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1->func, VAR_1->reg->host_int_mask, &VAR_4);
 if (VAR_4)
  return -VAR_0;

 VAR_3 &= ~VAR_2;

 FUNC_2(VAR_1->func, VAR_3, VAR_1->reg->host_int_mask, &VAR_4);
 if (VAR_4 < 0) {
  FUNC_0("Unable to disable the host interrupt!");
  return -VAR_0;
 }

 return 0;
}
