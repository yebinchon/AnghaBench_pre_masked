
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct protection_domain {unsigned long long mode; int flags; unsigned long long glx; unsigned long long id; int gcr3_tbl; int pt_root; } ;
struct amd_iommu {int dummy; } ;
struct TYPE_2__ {unsigned long long* data; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long FUNC_0 (unsigned long long) ;
 unsigned long long FUNC_1 (unsigned long long) ;
 unsigned long long FUNC_2 (unsigned long long) ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 int VAR_15 ;
 unsigned long long VAR_16 ;
 int VAR_17 ;
 TYPE_1__* VAR_18 ;
 int FUNC_3 (struct amd_iommu*,int) ;
 struct amd_iommu** VAR_19 ;
 scalar_t__ FUNC_4 (struct amd_iommu*,int ) ;
 unsigned long long FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(u16 VAR_20, struct protection_domain *VAR_21,
     bool VAR_22, bool VAR_23)
{
 u64 VAR_24 = 0;
 u64 VAR_25 = 0;
 u32 VAR_26;

 if (VAR_21->mode != VAR_16)
  VAR_24 = FUNC_5(VAR_21->pt_root);

 VAR_24 |= (VAR_21->mode & VAR_1)
      << VAR_2;
 VAR_24 |= VAR_6 | VAR_7 | VAR_9 | VAR_8;

 VAR_25 = VAR_18[VAR_20].data[1];

 if (VAR_22)
  VAR_25 |= VAR_5;

 if (VAR_23) {
  struct amd_iommu *VAR_27 = VAR_19[VAR_20];

  if (FUNC_4(VAR_27, VAR_15))
   VAR_24 |= 1ULL << VAR_3;
 }

 if (VAR_21->flags & VAR_17) {
  u64 VAR_28 = FUNC_5(VAR_21->gcr3_tbl);
  u64 VAR_29 = VAR_21->glx;
  u64 VAR_30;

  VAR_24 |= VAR_4;
  VAR_24 |= (VAR_29 & VAR_13) << VAR_14;


  VAR_30 = FUNC_1(~0ULL) << VAR_11;
  VAR_25 &= ~VAR_30;

  VAR_30 = FUNC_2(~0ULL) << VAR_12;
  VAR_25 &= ~VAR_30;


  VAR_30 = FUNC_0(VAR_28) << VAR_10;
  VAR_24 |= VAR_30;

  VAR_30 = FUNC_1(VAR_28) << VAR_11;
  VAR_25 |= VAR_30;

  VAR_30 = FUNC_2(VAR_28) << VAR_12;
  VAR_25 |= VAR_30;
 }

 VAR_25 &= ~VAR_0;
 VAR_25 |= VAR_21->id;

 VAR_26 = VAR_18[VAR_20].data[1] & VAR_0;
 VAR_18[VAR_20].data[1] = VAR_25;
 VAR_18[VAR_20].data[0] = VAR_24;






 if (VAR_26) {
  struct amd_iommu *VAR_31 = VAR_19[VAR_20];

  FUNC_3(VAR_31, VAR_26);
 }
}
