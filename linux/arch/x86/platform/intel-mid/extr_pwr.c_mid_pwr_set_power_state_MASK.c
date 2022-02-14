
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mid_pwr {int lock; } ;
typedef scalar_t__ pci_power_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mid_pwr*,struct pci_dev*,scalar_t__,int,int,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mid_pwr *VAR_3, struct pci_dev *VAR_4,
       pci_power_t VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = (VAR_6 * VAR_0) / 32;
 VAR_8 = (VAR_6 * VAR_0) % 32;


 if (VAR_5 < VAR_1)
  VAR_5 = VAR_1;
 if (VAR_5 > VAR_2)
  VAR_5 = VAR_2;

 FUNC_2(&VAR_3->lock);
 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_3(&VAR_3->lock);
 return VAR_9;
}
