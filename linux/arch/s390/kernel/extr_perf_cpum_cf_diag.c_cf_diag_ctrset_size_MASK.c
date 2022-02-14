
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumf_ctr_info {int cfvn; int csvn; } ;
typedef enum cpumf_ctr_set { ____Placeholder_cpumf_ctr_set } cpumf_ctr_set ;
__attribute__((used)) static size_t FUNC_0(enum cpumf_ctr_set VAR_0,
     struct cpumf_ctr_info *VAR_1)
{
 size_t VAR_2 = 0;

 switch (VAR_0) {
 case 133:
  if (VAR_1->cfvn >= 1)
   VAR_2 = 6;
  break;
 case 128:
  if (VAR_1->cfvn == 1)
   VAR_2 = 6;
  else if (VAR_1->cfvn >= 3)
   VAR_2 = 2;
  break;
 case 132:
  if (VAR_1->csvn >= 1 && VAR_1->csvn <= 5)
   VAR_2 = 16;
  else if (VAR_1->csvn == 6)
   VAR_2 = 20;
  break;
 case 131:
  if (VAR_1->csvn == 1)
   VAR_2 = 32;
  else if (VAR_1->csvn == 2)
   VAR_2 = 48;
  else if (VAR_1->csvn >= 3 && VAR_1->csvn <= 5)
   VAR_2 = 128;
  else if (VAR_1->csvn == 6)
   VAR_2 = 160;
  break;
 case 129:
  if (VAR_1->csvn > 3)
   VAR_2 = 48;
  break;
 case 130:
  break;
 }

 return VAR_2;
}
