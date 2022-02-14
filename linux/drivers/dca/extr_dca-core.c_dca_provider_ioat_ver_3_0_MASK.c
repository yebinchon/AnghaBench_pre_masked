
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct pci_dev* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_9)
{
 struct pci_dev *VAR_10 = FUNC_0(VAR_9);

 return ((VAR_10->vendor == VAR_8) &&
  ((VAR_10->device == VAR_0) ||
  (VAR_10->device == VAR_1) ||
  (VAR_10->device == VAR_2) ||
  (VAR_10->device == VAR_3) ||
  (VAR_10->device == VAR_4) ||
  (VAR_10->device == VAR_5) ||
  (VAR_10->device == VAR_6) ||
  (VAR_10->device == VAR_7)));
}
