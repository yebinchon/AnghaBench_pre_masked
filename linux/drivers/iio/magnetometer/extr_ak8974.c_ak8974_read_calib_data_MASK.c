
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ak8974 {TYPE_1__* i2c; int map; } ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,int) ;
 int FUNC_2 (int *,int,size_t) ;
 int FUNC_3 (int ,unsigned int,int *,size_t) ;

__attribute__((used)) static void FUNC_4(struct ak8974 *VAR_0, unsigned int VAR_1,
       __le16 *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_3(VAR_0->map, VAR_1, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_2, 0xFF, VAR_3);
  FUNC_1(&VAR_0->i2c->dev,
    "can't read calibration data (regs %u..%zu): %d\n",
    VAR_1, VAR_1 + VAR_3 - 1, VAR_4);
 } else {
  FUNC_0(VAR_2, VAR_3);
 }
}
