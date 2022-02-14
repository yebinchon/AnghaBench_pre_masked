
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct hidma_dev* private; } ;
struct hidma_dev {TYPE_1__* evca_resource; int dev_evca; TYPE_1__* trca_resource; int dev_trca; int * nr_descriptors; } ;
typedef int resource_size_t ;
struct TYPE_2__ {int start; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct seq_file*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct hidma_dev *VAR_2 = VAR_0->private;
 resource_size_t VAR_3;

 FUNC_1(VAR_0, "nr_descriptors=%d\n", VAR_2->nr_descriptors);
 FUNC_1(VAR_0, "dev_trca=%p\n", &VAR_2->dev_trca);
 FUNC_1(VAR_0, "dev_trca_phys=%pa\n", &VAR_2->trca_resource->start);
 VAR_3 = FUNC_0(VAR_2->trca_resource);
 FUNC_1(VAR_0, "dev_trca_size=%pa\n", &VAR_3);
 FUNC_1(VAR_0, "dev_evca=%p\n", &VAR_2->dev_evca);
 FUNC_1(VAR_0, "dev_evca_phys=%pa\n", &VAR_2->evca_resource->start);
 VAR_3 = FUNC_0(VAR_2->evca_resource);
 FUNC_1(VAR_0, "dev_evca_size=%pa\n", &VAR_3);
 return 0;
}
