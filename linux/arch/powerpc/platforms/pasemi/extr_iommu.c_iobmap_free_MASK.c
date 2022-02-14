
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iommu_table {long it_offset; scalar_t__ it_base; } ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,unsigned long) ;
 int FUNC_1 (char*,long,long) ;

__attribute__((used)) static void FUNC_2(struct iommu_table *VAR_5, long VAR_6,
   long VAR_7)
{
 u32 *VAR_8;
 unsigned long VAR_9;

 FUNC_1("iobmap: free at: %lx, %lx\n", VAR_6, VAR_7);

 VAR_9 = (VAR_5->it_offset + VAR_6) << VAR_0;

 VAR_8 = ((u32 *)VAR_5->it_base) + VAR_6;

 while (VAR_7--) {
  *(VAR_8++) = VAR_4;

  FUNC_0(VAR_3+VAR_2, VAR_9 >> 14);
  VAR_9 += VAR_1;
 }
}
