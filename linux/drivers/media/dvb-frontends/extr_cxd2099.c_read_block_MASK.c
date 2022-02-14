
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int max_i2c; } ;
struct cxd {scalar_t__ lastaddress; int regmap; TYPE_1__ cfg; } ;


 int FUNC_0 (int ,int,scalar_t__*,int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct cxd *VAR_0, u8 VAR_1, u8 *VAR_2, u16 VAR_3)
{
 int VAR_4 = 0;

 if (VAR_0->lastaddress != VAR_1)
  VAR_4 = FUNC_1(VAR_0->regmap, 0, VAR_1);
 if (!VAR_4) {
  VAR_0->lastaddress = VAR_1;

  while (VAR_3) {
   int VAR_5 = VAR_3;

   if (VAR_0->cfg.max_i2c && VAR_5 > VAR_0->cfg.max_i2c)
    VAR_5 = VAR_0->cfg.max_i2c;
   VAR_4 = FUNC_0(VAR_0->regmap, 1, VAR_2, VAR_5);
   if (VAR_4)
    return VAR_4;
   VAR_2 += VAR_5;
   VAR_3 -= VAR_5;
  }
 }
 return VAR_4;
}
