
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int irq; int name; int node; int seq_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct intel_iommu*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ,int ,int ,struct intel_iommu*) ;

int FUNC_3(struct intel_iommu *VAR_3)
{
 int VAR_4, VAR_5;




 if (VAR_3->irq)
  return 0;

 VAR_4 = FUNC_0(VAR_3->seq_id, VAR_3->node, VAR_3);
 if (VAR_4 > 0) {
  VAR_3->irq = VAR_4;
 } else {
  FUNC_1("No free IRQ vectors\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_1, VAR_3->name, VAR_3);
 if (VAR_5)
  FUNC_1("Can't request irq\n");
 return VAR_5;
}
