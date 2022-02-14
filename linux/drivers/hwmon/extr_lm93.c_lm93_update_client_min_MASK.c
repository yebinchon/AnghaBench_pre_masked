
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_6__ {void** offset; void** base; } ;
struct lm93_data {TYPE_3__ block10; int block1; void*** block9; void** block8; void** block5; TYPE_2__* block4; void** block2; TYPE_1__* block7; void** block3; } ;
struct i2c_client {int dev; } ;
struct TYPE_5__ {void* avg; void* cur; } ;
struct TYPE_4__ {void* max; void* min; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *,char*) ;
 void* FUNC_12 (struct i2c_client*,scalar_t__) ;
 void* FUNC_13 (struct i2c_client*,int ) ;
 int FUNC_14 (struct lm93_data*,struct i2c_client*) ;

__attribute__((used)) static void FUNC_15(struct lm93_data *VAR_1,
       struct i2c_client *VAR_2)
{
 int VAR_3, VAR_4;
 u8 *VAR_5;

 FUNC_11(&VAR_2->dev, "starting device update (block data disabled)\n");


 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  VAR_1->block3[VAR_3] =
   FUNC_12(VAR_2, FUNC_2(VAR_3));
  VAR_1->block7[VAR_3].min =
   FUNC_12(VAR_2, FUNC_4(VAR_3));
  VAR_1->block7[VAR_3].max =
   FUNC_12(VAR_2, FUNC_3(VAR_3));
 }


 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_1->block2[VAR_3] =
   FUNC_12(VAR_2, FUNC_8(VAR_3));
 }


 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_1->block4[VAR_3].cur =
   FUNC_12(VAR_2, FUNC_6(VAR_3));
  VAR_1->block4[VAR_3].avg =
   FUNC_12(VAR_2, FUNC_5(VAR_3));
 }


 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_1->block5[VAR_3] =
   FUNC_13(VAR_2, FUNC_0(VAR_3));
  VAR_1->block8[VAR_3] =
   FUNC_13(VAR_2, FUNC_1(VAR_3));
 }


 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
   VAR_1->block9[VAR_3][VAR_4] =
    FUNC_12(VAR_2, FUNC_7(VAR_3, VAR_4));
  }
 }


 for (VAR_3 = 0, VAR_5 = (u8 *)(&VAR_1->block1); VAR_3 < 8; VAR_3++) {
  *(VAR_5 + VAR_3) =
   FUNC_12(VAR_2, VAR_0 + VAR_3);
 }


 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_1->block10.base[VAR_3] =
   FUNC_12(VAR_2, FUNC_9(VAR_3));
 }


 for (VAR_3 = 0; VAR_3 < 12; VAR_3++) {
  VAR_1->block10.offset[VAR_3] =
   FUNC_12(VAR_2, FUNC_10(VAR_3));
 }

 FUNC_14(VAR_1, VAR_2);
}
