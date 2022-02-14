
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct amd_iommu {int max_banks; int max_counters; scalar_t__ mmio_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct amd_iommu *VAR_4, u8 VAR_5, u8 VAR_6,
    u8 VAR_7, u64 *VAR_8, bool VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;


 if (!VAR_3)
  return -VAR_1;


 if (FUNC_1(!VAR_4 || (VAR_7 > 0x28) || (VAR_7 & 7)))
  return -VAR_1;

 VAR_10 = (u32)(((0x40 | VAR_5) << 12) | (VAR_6 << 8) | VAR_7);


 VAR_11 = (u32)(((0x40 | VAR_4->max_banks) << 12) |
    (VAR_4->max_counters << 8) | 0x28);
 if ((VAR_10 < VAR_2) ||
     (VAR_10 > VAR_11))
  return -VAR_0;

 if (VAR_9) {
  u64 VAR_12 = *VAR_8 & FUNC_0(47, 0);

  FUNC_3((u32)VAR_12, VAR_4->mmio_base + VAR_10);
  FUNC_3((VAR_12 >> 32), VAR_4->mmio_base + VAR_10 + 4);
 } else {
  *VAR_8 = FUNC_2(VAR_4->mmio_base + VAR_10 + 4);
  *VAR_8 <<= 32;
  *VAR_8 |= FUNC_2(VAR_4->mmio_base + VAR_10);
  *VAR_8 &= FUNC_0(47, 0);
 }

 return 0;
}
