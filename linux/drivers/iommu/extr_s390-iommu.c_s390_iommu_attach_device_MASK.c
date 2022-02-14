
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct zpci_dev {scalar_t__ start_dma; scalar_t__ end_dma; struct s390_domain* s390_domain; scalar_t__ dma_table; } ;
struct s390_domain_device {int list; struct zpci_dev* zdev; } ;
struct s390_domain {int list_lock; int devices; scalar_t__ dma_table; } ;
struct TYPE_3__ {scalar_t__ aperture_start; scalar_t__ aperture_end; int force_aperture; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct zpci_dev* sysdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct s390_domain_device*) ;
 struct s390_domain_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 TYPE_2__* FUNC_6 (struct device*) ;
 struct s390_domain* FUNC_7 (struct iommu_domain*) ;
 int FUNC_8 (struct zpci_dev*) ;
 int FUNC_9 (struct zpci_dev*) ;
 int FUNC_10 (struct zpci_dev*,int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_11(struct iommu_domain *VAR_4,
        struct device *VAR_5)
{
 struct s390_domain *VAR_6 = FUNC_7(VAR_4);
 struct zpci_dev *VAR_7 = FUNC_6(VAR_5)->sysdata;
 struct s390_domain_device *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 if (VAR_7->dma_table)
  FUNC_8(VAR_7);

 VAR_7->dma_table = VAR_6->dma_table;
 VAR_10 = FUNC_10(VAR_7, 0, VAR_7->start_dma, VAR_7->end_dma,
    (u64) VAR_7->dma_table);
 if (VAR_10)
  goto out_restore;

 FUNC_4(&VAR_6->list_lock, VAR_9);

 if (FUNC_3(&VAR_6->devices)) {
  VAR_4->geometry.aperture_start = VAR_7->start_dma;
  VAR_4->geometry.aperture_end = VAR_7->end_dma;
  VAR_4->geometry.force_aperture = 1;

 } else if (VAR_4->geometry.aperture_start != VAR_7->start_dma ||
     VAR_4->geometry.aperture_end != VAR_7->end_dma) {
  VAR_10 = -VAR_0;
  FUNC_5(&VAR_6->list_lock, VAR_9);
  goto out_restore;
 }
 VAR_8->zdev = VAR_7;
 VAR_7->s390_domain = VAR_6;
 FUNC_2(&VAR_8->list, &VAR_6->devices);
 FUNC_5(&VAR_6->list_lock, VAR_9);

 return 0;

out_restore:
 FUNC_9(VAR_7);
 FUNC_0(VAR_8);

 return VAR_10;
}
