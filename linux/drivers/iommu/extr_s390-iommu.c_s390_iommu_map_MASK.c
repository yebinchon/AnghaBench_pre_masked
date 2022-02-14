
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_domain {int dummy; } ;
struct iommu_domain {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct s390_domain*,unsigned long,unsigned long,size_t,int) ;
 struct s390_domain* FUNC_1 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_2(struct iommu_domain *VAR_5, unsigned long VAR_6,
     phys_addr_t VAR_7, size_t VAR_8, int VAR_9)
{
 struct s390_domain *VAR_10 = FUNC_1(VAR_5);
 int VAR_11 = VAR_3, VAR_12 = 0;

 if (!(VAR_9 & VAR_1))
  return -VAR_0;

 if (!(VAR_9 & VAR_2))
  VAR_11 |= VAR_4;

 VAR_12 = FUNC_0(VAR_10, (unsigned long) VAR_7, VAR_6,
         VAR_8, VAR_11);

 return VAR_12;
}
