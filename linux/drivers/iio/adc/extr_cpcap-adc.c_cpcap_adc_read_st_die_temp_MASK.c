
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_adc {int reg; } ;


 int FUNC_0 (int ,int,int*) ;

__attribute__((used)) static int FUNC_1(struct cpcap_adc *VAR_0,
          int VAR_1, int *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->reg, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 *VAR_2 -= 282;
 *VAR_2 *= 114;
 *VAR_2 += 25000;

 return 0;
}
