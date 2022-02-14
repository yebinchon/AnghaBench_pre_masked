
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static inline int FUNC_0(struct pci_dev *VAR_5)
{
 return ((VAR_5->vendor == VAR_3 &&
   (VAR_5->device == VAR_0 ||
    VAR_5->device == VAR_1)) ||
  (VAR_5->vendor == VAR_4 &&
   VAR_5->device == VAR_2));

}
