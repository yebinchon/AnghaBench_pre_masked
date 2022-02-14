
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct vio_dev {TYPE_1__ dev; } ;
struct iommu_table {unsigned long it_page_shift; unsigned long it_size; unsigned long it_offset; int it_blocksize; int * it_ops; int it_type; scalar_t__ it_busno; int it_index; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct iommu_table* FUNC_1 (struct iommu_table*,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct iommu_table* FUNC_2 (int,int ) ;
 int * FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ,int const*,int *,unsigned long*,unsigned long*) ;

__attribute__((used)) static struct iommu_table *FUNC_5(struct vio_dev *VAR_6)
{
 const __be32 *VAR_7;
 struct iommu_table *VAR_8;
 unsigned long VAR_9, VAR_10;

 VAR_7 = FUNC_3(VAR_6->dev.of_node,
      "ibm,my-dma-window", ((void*)0));
 if (!VAR_7)
  return ((void*)0);

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_6->dev.of_node, VAR_7,
       &VAR_8->it_index, &VAR_9, &VAR_10);


 VAR_8->it_page_shift = VAR_2;
 VAR_8->it_size = VAR_10 >> VAR_8->it_page_shift;

 VAR_8->it_offset = VAR_9 >> VAR_8->it_page_shift;
 VAR_8->it_busno = 0;
 VAR_8->it_type = VAR_3;
 VAR_8->it_blocksize = 16;

 if (FUNC_0(VAR_0))
  VAR_8->it_ops = &VAR_4;
 else
  VAR_8->it_ops = &VAR_5;

 return FUNC_1(VAR_8, -1, 0, 0);
}
