
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zpci_dev*) ;
 int FUNC_1 (struct zpci_dev*,int ) ;
 int FUNC_2 (struct zpci_dev*) ;

int FUNC_3(struct zpci_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  goto out_dma;

 VAR_2->state = VAR_0;
 return 0;

out_dma:
 FUNC_0(VAR_2);
out:
 return VAR_3;
}
