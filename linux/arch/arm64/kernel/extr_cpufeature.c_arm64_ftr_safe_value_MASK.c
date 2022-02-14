
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm64_ftr_bits {int type; int safe_val; } ;
typedef int s64 ;


 int FUNC_0 () ;





__attribute__((used)) static s64 FUNC_1(const struct arm64_ftr_bits *VAR_0, s64 VAR_1,
    s64 VAR_2)
{
 s64 VAR_3 = 0;

 switch (VAR_0->type) {
 case 131:
  VAR_3 = VAR_0->safe_val;
  break;
 case 128:
  VAR_3 = VAR_1 < VAR_2 ? VAR_1 : VAR_2;
  break;
 case 130:
  if (!VAR_2 || !VAR_1)
   break;

 case 129:
  VAR_3 = VAR_1 > VAR_2 ? VAR_1 : VAR_2;
  break;
 default:
  FUNC_0();
 }

 return VAR_3;
}
