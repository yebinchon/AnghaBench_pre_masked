
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {scalar_t__ vendor; int device; TYPE_2__* bus; } ;
struct driver_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* parent; struct pci_dev* self; } ;
struct TYPE_3__ {struct pci_dev* self; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct driver_data*,struct pci_dev*) ;

__attribute__((used)) static void FUNC_1(struct driver_data *VAR_1, struct pci_dev *VAR_2)
{




 if (VAR_2->bus && VAR_2->bus->self) {
  if (VAR_2->bus->self->vendor == VAR_0 &&
      ((VAR_2->bus->self->device & 0xff00) == 0x5a00)) {
   FUNC_0(VAR_1, VAR_2->bus->self);
  } else {

   struct pci_dev *VAR_3 = VAR_2->bus->self;
   if (VAR_3->bus &&
    VAR_3->bus->parent &&
    VAR_3->bus->parent->self &&
    VAR_3->bus->parent->self->vendor ==
      VAR_0 &&
    (VAR_3->bus->parent->self->device &
     0xff00) == 0x5a00) {
    FUNC_0(VAR_1,
     VAR_3->bus->parent->self);
   }
  }
 }
}
