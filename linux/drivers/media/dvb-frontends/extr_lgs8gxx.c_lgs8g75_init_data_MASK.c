
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgs8gxx_state {TYPE_1__* i2c; } ;
struct firmware {int size; int* data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct lgs8gxx_state*,int,int) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct lgs8gxx_state *VAR_1)
{
 const struct firmware *VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(&VAR_2, VAR_0, &VAR_1->i2c->dev);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_1, 0xC6, 0x40);

 FUNC_0(VAR_1, 0x3D, 0x04);
 FUNC_0(VAR_1, 0x39, 0x00);

 FUNC_0(VAR_1, 0x3A, 0x00);
 FUNC_0(VAR_1, 0x38, 0x00);
 FUNC_0(VAR_1, 0x3B, 0x00);
 FUNC_0(VAR_1, 0x38, 0x00);

 for (VAR_4 = 0; VAR_4 < VAR_2->size; VAR_4++) {
  FUNC_0(VAR_1, 0x38, 0x00);
  FUNC_0(VAR_1, 0x3A, (u8)(VAR_4&0xff));
  FUNC_0(VAR_1, 0x3B, (u8)(VAR_4>>8));
  FUNC_0(VAR_1, 0x3C, VAR_2->data[VAR_4]);
 }

 FUNC_0(VAR_1, 0x38, 0x00);

 FUNC_1(VAR_2);
 return 0;
}
