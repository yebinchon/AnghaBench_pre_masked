
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dev; } ;
struct fs_dev {struct fs_dev* next; int flags; struct atm_dev* atm_dev; struct pci_dev* pci_dev; } ;
struct atm_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atm_dev*) ;
 struct atm_dev* FUNC_1 (char*,int *,int *,int,int *) ;
 struct fs_dev* VAR_3 ;
 int FUNC_2 (int ,char*,struct fs_dev*,int) ;
 scalar_t__ FUNC_3 (struct fs_dev*) ;
 int FUNC_4 (struct fs_dev*) ;
 struct fs_dev* FUNC_5 (int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_5,
          const struct pci_device_id *VAR_6)
{
 struct atm_dev *VAR_7;
 struct fs_dev *VAR_8;

 if (FUNC_6(VAR_5))
  goto err_out;

 VAR_8 = FUNC_5 (sizeof (struct fs_dev), VAR_2);
 FUNC_2 (VAR_1, "Alloc fs-dev: %p(%zd)\n",
      VAR_8, sizeof (struct fs_dev));
 if (!VAR_8)
  goto err_out;
 VAR_7 = FUNC_1("fs", &VAR_5->dev, &VAR_4, -1, ((void*)0));
 if (!VAR_7)
  goto err_out_free_fs_dev;

 VAR_8->pci_dev = VAR_5;
 VAR_8->atm_dev = VAR_7;
 VAR_8->flags = VAR_6->driver_data;

 if (FUNC_3(VAR_8))
  goto err_out_free_atm_dev;

 VAR_8->next = VAR_3;
 VAR_3 = VAR_8;
 return 0;

 err_out_free_atm_dev:
 FUNC_0(VAR_7);
 err_out_free_fs_dev:
  FUNC_4(VAR_8);
 err_out:
 return -VAR_0;
}
