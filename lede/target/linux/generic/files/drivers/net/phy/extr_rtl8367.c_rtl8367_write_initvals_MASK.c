
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8367_initval {int val; int reg; } ;
struct rtl8366_smi {int dummy; } ;


 int FUNC_0 (struct rtl8366_smi*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct rtl8366_smi *VAR_0,
      const struct rtl8367_initval *VAR_1,
      int VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(VAR_0, VAR_1[VAR_4].reg, VAR_1[VAR_4].val);

 return 0;
}
