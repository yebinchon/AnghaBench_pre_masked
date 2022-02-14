
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct switch_dev {int dummy; } ;
struct rtl_reg {int bits; unsigned int shift; int reg; int phy; int page; scalar_t__ inverted; } ;
typedef enum rtl_regidx { ____Placeholder_rtl_regidx } rtl_regidx ;


 int FUNC_0 (struct rtl_reg*) ;
 int FUNC_1 (int) ;
 struct rtl_reg* VAR_0 ;
 int FUNC_2 (struct switch_dev*,int ,int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct switch_dev *VAR_1, enum rtl_regidx VAR_2, unsigned int VAR_3)
{
 const struct rtl_reg *VAR_4 = &VAR_0[VAR_2];
 u16 VAR_5 = 0xffff;

 FUNC_1(VAR_2 >= FUNC_0(VAR_0));

 if (VAR_4->bits == 0)
  return 0;

 if (VAR_4->shift > 0)
  VAR_3 <<= VAR_4->shift;

 if (VAR_4->inverted)
  VAR_3 = ~VAR_3;

 if (VAR_4->bits != 16) {
  VAR_5 = (1 << VAR_4->bits) - 1;
  VAR_5 <<= VAR_4->shift;
 }
 VAR_3 &= VAR_5;
 return FUNC_2(VAR_1, VAR_4->page, VAR_4->phy, VAR_4->reg, VAR_5, VAR_3);
}
