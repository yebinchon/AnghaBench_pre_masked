
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_table {int it_indirect_levels; int it_level_size; int it_nid; scalar_t__ it_base; int * it_userspace; } ;
typedef int __be64 ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int *) ;
 int * FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int ,int) ;
 int FUNC_8 (int *,int,int) ;

__attribute__((used)) static __be64 *FUNC_9(struct iommu_table *VAR_2, bool VAR_3, long VAR_4, bool VAR_5)
{
 __be64 *VAR_6 = VAR_3 ? VAR_2->it_userspace : (__be64 *) VAR_2->it_base;
 int VAR_7 = VAR_2->it_indirect_levels;
 const long VAR_8 = FUNC_6(VAR_2->it_level_size);
 unsigned long VAR_9 = (VAR_2->it_level_size - 1) << (VAR_7 * VAR_8);

 while (VAR_7) {
  int VAR_10 = (VAR_4 & VAR_9) >> (VAR_7 * VAR_8);
  unsigned long VAR_11, VAR_12 = FUNC_3(FUNC_0(VAR_6[VAR_10]));

  if (!VAR_12) {
   __be64 *VAR_13;

   if (!VAR_5)
    return ((void*)0);

   VAR_13 = FUNC_7(VAR_2->it_nid,
     FUNC_6(VAR_2->it_level_size) + 3);
   if (!VAR_13)
    return ((void*)0);

   VAR_12 = FUNC_1(VAR_13) | VAR_0 | VAR_1;
   VAR_11 = FUNC_3(FUNC_4(&VAR_6[VAR_10], 0,
     FUNC_5(VAR_12)));
   if (VAR_11) {
    FUNC_8(VAR_13,
     FUNC_6(VAR_2->it_level_size) + 3, 1);
    VAR_12 = VAR_11;
   }
  }

  VAR_6 = FUNC_2(VAR_12 & ~(VAR_0 | VAR_1));
  VAR_4 &= ~VAR_9;
  VAR_9 >>= VAR_8;
  --VAR_7;
 }

 return VAR_6 + VAR_4;
}
