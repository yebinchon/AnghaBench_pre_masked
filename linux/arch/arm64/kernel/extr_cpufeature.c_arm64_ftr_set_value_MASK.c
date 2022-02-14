
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct arm64_ftr_bits {int shift; } ;
typedef int s64 ;


 int FUNC_0 (struct arm64_ftr_bits const*) ;

__attribute__((used)) static u64 FUNC_1(const struct arm64_ftr_bits *VAR_0, s64 VAR_1,
          s64 VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_0);

 VAR_1 &= ~VAR_3;
 VAR_1 |= (VAR_2 << VAR_0->shift) & VAR_3;
 return VAR_1;
}
