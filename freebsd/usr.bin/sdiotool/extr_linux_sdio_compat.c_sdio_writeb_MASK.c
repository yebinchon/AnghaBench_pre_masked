
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdio_func {int num; int dev; } ;


 int FUNC_0 (int ,int ,unsigned int,int ) ;

void FUNC_1(struct sdio_func *VAR_0, u8 VAR_1,
   unsigned int VAR_2, int *VAR_3) {
 *VAR_3 = FUNC_0(VAR_0->dev, VAR_0->num, VAR_2, VAR_1);
}
