
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iotlb_entry {int mixed; int endian; int elsz; scalar_t__ pgsz; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct iotlb_entry *VAR_2)
{
 u32 VAR_3;

 VAR_3 = VAR_2->mixed << 5;
 VAR_3 |= VAR_2->endian;
 VAR_3 |= VAR_2->elsz >> 3;
 VAR_3 <<= (((VAR_2->pgsz == VAR_0) ||
   (VAR_2->pgsz == VAR_1)) ? 0 : 6);
 return VAR_3;
}
