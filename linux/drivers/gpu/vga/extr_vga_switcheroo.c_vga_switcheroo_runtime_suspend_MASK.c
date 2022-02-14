
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int bus; } ;
struct device {TYPE_2__* bus; } ;
struct TYPE_8__ {int mux_hw_lock; TYPE_3__* handler; } ;
struct TYPE_7__ {int (* switchto ) (int ) ;} ;
struct TYPE_6__ {TYPE_1__* pm; } ;
struct TYPE_5__ {int (* runtime_suspend ) (struct device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 struct pci_dev* FUNC_5 (struct device*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static int FUNC_7(struct device *VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;

 VAR_7 = VAR_5->bus->pm->runtime_suspend(VAR_5);
 if (VAR_7)
  return VAR_7;
 FUNC_0(&VAR_3);
 if (VAR_4.handler->switchto) {
  FUNC_0(&VAR_4.mux_hw_lock);
  VAR_4.handler->switchto(VAR_1);
  FUNC_1(&VAR_4.mux_hw_lock);
 }
 FUNC_2(VAR_6->bus, VAR_0);
 FUNC_6(VAR_6, VAR_2);
 FUNC_1(&VAR_3);
 return 0;
}
