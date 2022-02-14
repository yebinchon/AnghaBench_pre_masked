
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int quality; int read; int name; } ;
struct cavium_rng {TYPE_1__ ops; int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 struct cavium_rng* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct pci_dev*,struct cavium_rng*) ;
 int FUNC_6 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_3,
    const struct pci_device_id *VAR_4)
{
 struct cavium_rng *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;


 VAR_5->result = FUNC_6(VAR_3, 0, 0);
 if (!VAR_5->result) {
  FUNC_0(&VAR_3->dev, "Error iomap failed retrieving result.\n");
  return -VAR_0;
 }

 VAR_5->ops.name = FUNC_3(&VAR_3->dev, VAR_1,
           "cavium-rng-%s", FUNC_1(&VAR_3->dev));
 if (!VAR_5->ops.name)
  return -VAR_0;

 VAR_5->ops.read = VAR_2;
 VAR_5->ops.quality = 1000;

 FUNC_5(VAR_3, VAR_5);

 VAR_6 = FUNC_2(&VAR_3->dev, &VAR_5->ops);
 if (VAR_6) {
  FUNC_0(&VAR_3->dev, "Error registering device as HWRNG.\n");
  return VAR_6;
 }

 return 0;
}
