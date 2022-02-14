
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef enum cpumf_ctr_set { ____Placeholder_cpumf_ctr_set } cpumf_ctr_set ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum cpumf_ctr_set FUNC_0(u64 VAR_6)
{
 int VAR_7 = VAR_3;

 if (VAR_6 < 32)
  VAR_7 = VAR_0;
 else if (VAR_6 < 64)
  VAR_7 = VAR_5;
 else if (VAR_6 < 128)
  VAR_7 = VAR_1;
 else if (VAR_6 < 288)
  VAR_7 = VAR_2;
 else if (VAR_6 >= 448 && VAR_6 < 496)
  VAR_7 = VAR_4;

 return VAR_7;
}
