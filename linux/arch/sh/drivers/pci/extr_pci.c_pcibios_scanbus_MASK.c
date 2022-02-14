
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int flags; } ;
struct TYPE_6__ {int * parent; } ;
struct pci_host_bridge {int busnr; TYPE_3__* bus; int map_irq; int swizzle_irq; int ops; struct pci_channel* sysdata; TYPE_1__ dev; int windows; } ;
struct pci_channel {int nr_resources; int need_domain_info; TYPE_3__* bus; scalar_t__ index; int pci_ops; scalar_t__ mem_offset; scalar_t__ io_offset; struct resource* resources; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_7__ {int end; } ;
struct TYPE_8__ {TYPE_2__ busn_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,struct resource*,scalar_t__) ;
 struct pci_host_bridge* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_7 (struct pci_host_bridge*) ;
 int FUNC_8 (struct pci_host_bridge*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(struct pci_channel *VAR_6)
{
 static int VAR_7;
 static int VAR_8;
 FUNC_0(VAR_5);
 struct resource *VAR_9;
 resource_size_t VAR_10;
 int VAR_11, VAR_12;
 struct pci_host_bridge *VAR_13;

 VAR_13 = FUNC_3(0);
 if (!VAR_13)
  return;

 for (VAR_11 = 0; VAR_11 < VAR_6->nr_resources; VAR_11++) {
  VAR_9 = VAR_6->resources + VAR_11;
  VAR_10 = 0;
  if (VAR_9->flags & VAR_0)
   continue;
  if (VAR_9->flags & VAR_1)
   VAR_10 = VAR_6->io_offset;
  else if (VAR_9->flags & VAR_2)
   VAR_10 = VAR_6->mem_offset;
  FUNC_2(&VAR_5, VAR_9, VAR_10);
 }

 FUNC_1(&VAR_5, &VAR_13->windows);
 VAR_13->dev.parent = ((void*)0);
 VAR_13->sysdata = VAR_6;
 VAR_13->busnr = VAR_7;
 VAR_13->ops = VAR_6->pci_ops;
 VAR_13->swizzle_irq = VAR_3;
 VAR_13->map_irq = VAR_4;

 VAR_12 = FUNC_8(VAR_13);
 if (VAR_12) {
  FUNC_7(VAR_13);
  return;
 }

 VAR_6->bus = VAR_13->bus;

 VAR_8 = VAR_8 || VAR_6->index;
 VAR_6->need_domain_info = VAR_8;

 VAR_7 = VAR_6->bus->busn_res.end + 1;


 if (VAR_7 > 224) {
  VAR_7 = 0;
  VAR_8 = 1;
 }

 FUNC_6(VAR_6->bus);
 FUNC_5(VAR_6->bus);
 FUNC_4(VAR_6->bus);
}
