
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_ip_desc {int* offset; int* must_have; int (* init ) (struct lima_ip*) ;scalar_t__ irq_name; } ;
struct lima_ip {int id; int irq; int present; scalar_t__ iomem; struct lima_device* dev; } ;
struct lima_device {size_t id; int pdev; scalar_t__ iomem; struct lima_ip* ip; } ;


 struct lima_ip_desc* VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct lima_ip*) ;

__attribute__((used)) static int FUNC_2(struct lima_device *VAR_1, int VAR_2)
{
 struct lima_ip_desc *VAR_3 = VAR_0 + VAR_2;
 struct lima_ip *VAR_4 = VAR_1->ip + VAR_2;
 int VAR_5 = VAR_3->offset[VAR_1->id];
 bool VAR_6 = VAR_3->must_have[VAR_1->id];
 int VAR_7;

 if (VAR_5 < 0)
  return 0;

 VAR_4->dev = VAR_1;
 VAR_4->id = VAR_2;
 VAR_4->iomem = VAR_1->iomem + VAR_5;
 if (VAR_3->irq_name) {
  VAR_7 = FUNC_0(VAR_1->pdev, VAR_3->irq_name);
  if (VAR_7 < 0)
   goto out;
  VAR_4->irq = VAR_7;
 }

 VAR_7 = VAR_3->init(VAR_4);
 if (!VAR_7) {
  VAR_4->present = 1;
  return 0;
 }

out:
 return VAR_6 ? VAR_7 : 0;
}
