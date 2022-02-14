
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct pci_dev {int dev; } ;
struct i5k_amb_data {int amb_len; void* amb_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,unsigned long,int *) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int ,void**) ;

__attribute__((used)) static int FUNC_4(struct i5k_amb_data *VAR_6,
         unsigned long VAR_7)
{
 struct pci_dev *VAR_8;
 u32 VAR_9;
 int VAR_10 = -VAR_1;


 VAR_8 = FUNC_2(VAR_5,
    VAR_7,
    ((void*)0));
 if (!VAR_8)
  return -VAR_1;

 if (FUNC_3(VAR_8, VAR_2, &VAR_9))
  goto out;
 VAR_6->amb_base = VAR_9;

 if (FUNC_3(VAR_8, VAR_3, &VAR_9))
  goto out;
 VAR_6->amb_len = VAR_9;


 if (VAR_6->amb_len < VAR_0 * VAR_4) {
  FUNC_0(&VAR_8->dev, "AMB region too small!\n");
  goto out;
 }

 VAR_10 = 0;
out:
 FUNC_1(VAR_8);
 return VAR_10;
}
