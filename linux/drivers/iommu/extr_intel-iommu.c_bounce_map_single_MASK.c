
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_iommu {int cap; } ;
struct dmar_domain {int iovad; } ;
struct device {int dummy; } ;
typedef size_t phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef size_t dma_addr_t ;


 size_t FUNC_0 (size_t,int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (size_t,int ) ;
 unsigned long VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct device*,int ) ;
 unsigned long FUNC_4 (int ,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,char*,size_t,unsigned long long,int) ;
 int FUNC_7 (unsigned long) ;
 struct intel_iommu* FUNC_8 (struct dmar_domain*) ;
 int FUNC_9 (struct dmar_domain*,int ,size_t,unsigned long,int) ;
 struct dmar_domain* FUNC_10 (struct device*) ;
 int FUNC_11 (int *,unsigned long,int ) ;
 unsigned long FUNC_12 (struct device*,struct dmar_domain*,int ,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_13 (size_t) ;
 int FUNC_14 (void*,int ,size_t) ;
 int FUNC_15 (unsigned long) ;
 void* FUNC_16 (size_t) ;
 size_t FUNC_17 (struct device*,int ,size_t,size_t,size_t,int,unsigned long) ;
 int FUNC_18 (struct device*,size_t,size_t,size_t,int,unsigned long) ;
 int FUNC_19 (struct device*,unsigned long,size_t,size_t) ;

__attribute__((used)) static dma_addr_t
FUNC_20(struct device *VAR_12, phys_addr_t VAR_13, size_t VAR_14,
    enum dma_data_direction VAR_15, unsigned long VAR_16,
    u64 VAR_17)
{
 size_t VAR_18 = FUNC_0(VAR_14, VAR_10);
 struct dmar_domain *VAR_19;
 struct intel_iommu *VAR_20;
 unsigned long VAR_21;
 unsigned long VAR_22;
 phys_addr_t VAR_23;
 int VAR_24 = 0;
 int VAR_25;

 VAR_19 = FUNC_10(VAR_12);
 if (FUNC_2(VAR_15 == VAR_4 || !VAR_19))
  return VAR_3;

 VAR_20 = FUNC_8(VAR_19);
 if (FUNC_2(!VAR_20))
  return VAR_3;

 VAR_22 = FUNC_4(0, VAR_14);
 VAR_21 = FUNC_12(VAR_12, VAR_19,
        FUNC_7(VAR_22), VAR_17);
 if (!VAR_21)
  return VAR_3;





 if (VAR_15 == VAR_7 || VAR_15 == VAR_1 ||
   !FUNC_5(VAR_20->cap))
  VAR_24 |= VAR_5;
 if (VAR_15 == VAR_2 || VAR_15 == VAR_1)
  VAR_24 |= VAR_6;





 if (!FUNC_1(VAR_13 | VAR_14, VAR_10)) {
  VAR_23 = FUNC_17(VAR_12,
    FUNC_3(VAR_12, VAR_11),
    VAR_13, VAR_14, VAR_18, VAR_15, VAR_16);
  if (VAR_23 == VAR_3) {
   goto swiotlb_error;
  } else {

   void *VAR_26 = FUNC_16(VAR_23);
   size_t VAR_27 = VAR_18;

   if (!(VAR_16 & VAR_0) &&
       (VAR_15 == VAR_7 ||
        VAR_15 == VAR_1)) {
    VAR_26 += VAR_14;
    VAR_27 -= VAR_14;
   }

   FUNC_14(VAR_26, 0, VAR_27);
  }
 } else {
  VAR_23 = VAR_13;
 }

 VAR_25 = FUNC_9(VAR_19, FUNC_15(VAR_21),
     VAR_23 >> VAR_9, VAR_22, VAR_24);
 if (VAR_25)
  goto mapping_error;

 FUNC_19(VAR_12, VAR_21 << VAR_8, VAR_13, VAR_14);

 return (phys_addr_t)VAR_21 << VAR_8;

mapping_error:
 if (FUNC_13(VAR_23))
  FUNC_18(VAR_12, VAR_23, VAR_14,
      VAR_18, VAR_15, VAR_16);
swiotlb_error:
 FUNC_11(&VAR_19->iovad, VAR_21, FUNC_7(VAR_22));
 FUNC_6(VAR_12, "Device bounce map: %zx@%llx dir %d --- failed\n",
  VAR_14, (unsigned long long)VAR_13, VAR_15);

 return VAR_3;
}
