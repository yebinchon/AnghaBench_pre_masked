
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cxd {int regmap; } ;


 int FUNC_0 (int ,int,int*,int) ;
 int FUNC_1 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct cxd *VAR_0, u16 VAR_1, unsigned int *VAR_2)
{
 int VAR_3;
 u8 VAR_4[2] = {VAR_1 & 0xff, VAR_1 >> 8};

 VAR_3 = FUNC_0(VAR_0->regmap, 2, VAR_4, 2);
 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_0->regmap, 3, VAR_2);
 return VAR_3;
}
