
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,int *) ;
 int VAR_8 ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int * FUNC_7 (struct pci_dev*,int ,int ) ;
 int FUNC_8 (struct pci_dev*,int *) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,char*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_9, const struct pci_device_id *VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_10(VAR_9, "geode-aes");
 if (VAR_11)
  goto eenable;

 VAR_4 = FUNC_7(VAR_9, 0, 0);

 if (VAR_4 == ((void*)0)) {
  VAR_11 = -VAR_3;
  goto erequest;
 }

 FUNC_11(&VAR_8);


 FUNC_4(VAR_1 | VAR_0, VAR_4 + VAR_2);

 VAR_11 = FUNC_0(&VAR_5);
 if (VAR_11)
  goto eiomap;

 VAR_11 = FUNC_0(&VAR_7);
 if (VAR_11)
  goto ealg;

 VAR_11 = FUNC_0(&VAR_6);
 if (VAR_11)
  goto eecb;

 FUNC_3(&VAR_9->dev, "GEODE AES engine enabled.\n");
 return 0;

 eecb:
 FUNC_1(&VAR_7);

 ealg:
 FUNC_1(&VAR_5);

 eiomap:
 FUNC_8(VAR_9, VAR_4);

 erequest:
 FUNC_9(VAR_9);

 eenable:
 FUNC_5(VAR_9);

 FUNC_2(&VAR_9->dev, "GEODE AES initialization failed.\n");
 return VAR_11;
}
