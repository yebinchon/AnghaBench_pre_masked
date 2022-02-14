
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip_device {int index; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct zip_device* FUNC_0 (int *,int,int ) ;
 struct zip_device** VAR_2 ;

__attribute__((used)) static struct zip_device *FUNC_1(struct pci_dev *VAR_3)
{
 struct zip_device *VAR_4 = ((void*)0);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (!VAR_2[VAR_5])
   break;
 }


 if (VAR_5 < VAR_1)
  VAR_4 = FUNC_0(&VAR_3->dev, sizeof(*VAR_4), VAR_0);

 if (!VAR_4)
  return ((void*)0);

 VAR_2[VAR_5] = VAR_4;
 VAR_4->index = VAR_5;
 return VAR_4;
}
