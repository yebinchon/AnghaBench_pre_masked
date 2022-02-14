
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct iommu_state {unsigned long long is_ptsb; int is_flags; unsigned long long is_tsbsize; unsigned long long is_cr; scalar_t__* is_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long FUNC_0 (struct iommu_state*,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct iommu_state*,int ,int ,unsigned long long) ;
 int VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;

void
FUNC_2(struct iommu_state *VAR_10)
{
 uint64_t VAR_11;
 int VAR_12;

 VAR_11 = VAR_10->is_ptsb;
 if ((VAR_10->is_flags & VAR_3) != 0) {
  VAR_11 |= VAR_10->is_tsbsize;
  FUNC_1(VAR_10, VAR_8, VAR_0, ~0ULL);
 }
 FUNC_1(VAR_10, VAR_8, VAR_2, VAR_11);
 FUNC_1(VAR_10, VAR_8, VAR_1, VAR_10->is_cr);

 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  if (VAR_10->is_sb[VAR_12] != 0) {
   FUNC_1(VAR_10, VAR_9[VAR_12], VAR_5, VAR_6 |
       ((VAR_10->is_flags & VAR_4) != 0 ?
       VAR_7 : 0));


   if ((FUNC_0(VAR_10, VAR_9[VAR_12], VAR_5) &
       VAR_6) == 0)
    VAR_10->is_sb[VAR_12] = 0;
  }
 }

 (void)FUNC_0(VAR_10, VAR_8, VAR_1);
}
