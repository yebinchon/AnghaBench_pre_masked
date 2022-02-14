
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cxd {int lastaddress; unsigned int* regs; int regmap; } ;


 int FUNC_0 (int ,int,unsigned int*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct cxd *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5;

 if (VAR_0->lastaddress != VAR_1)
  VAR_4 = FUNC_1(VAR_0->regmap, 0, VAR_1);
 if (!VAR_4 && VAR_1 >= 6 && VAR_1 <= 8 && VAR_3 != 0xff) {
  VAR_4 = FUNC_0(VAR_0->regmap, 1, &VAR_5);
  VAR_0->regs[VAR_1] = VAR_5;
 }
 VAR_0->lastaddress = VAR_1;
 VAR_0->regs[VAR_1] = (VAR_0->regs[VAR_1] & (~VAR_3)) | VAR_2;
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_0->regmap, 1, VAR_0->regs[VAR_1]);
 if (VAR_1 == 0x20)
  VAR_0->regs[VAR_1] &= 0x7f;
 return VAR_4;
}
