
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct skx_dev {int mcroute; struct pci_dev* util_all; struct pci_dev* sad_all; TYPE_2__* imc; } ;
struct pci_dev {scalar_t__ devfn; int bus; } ;
struct munit {int per_socket; scalar_t__* devfn; int mtype; int did; int busidx; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct TYPE_3__ {struct pci_dev* cdev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 struct skx_dev* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ,int ,struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int,int *) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(const struct munit *VAR_4)
{
 struct pci_dev *VAR_5, *VAR_6;
 struct skx_dev *VAR_7;
 u32 VAR_8;
 int VAR_9 = 0, VAR_10 = 0;

 VAR_6 = ((void*)0);
 for (;;) {
  VAR_5 = FUNC_4(VAR_2, VAR_4->did, VAR_6);
  if (!VAR_5)
   break;
  VAR_10++;
  if (VAR_4->per_socket == VAR_3) {
   for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
    if (VAR_4->devfn[VAR_9] == VAR_5->devfn)
     break;
   if (VAR_9 == VAR_3)
    goto fail;
  }
  VAR_7 = FUNC_0(VAR_5->bus, VAR_4->busidx);
  if (!VAR_7)
   goto fail;


  if (FUNC_7(FUNC_3(VAR_5) < 0)) {
   FUNC_6(VAR_1, "Couldn't enable device %04x:%04x\n",
       VAR_2, VAR_4->did);
   goto fail;
  }

  switch (VAR_4->mtype) {
  case 133: case 132: case 131:
   FUNC_1(VAR_5);
   VAR_7->imc[VAR_9].chan[VAR_4->mtype].cdev = VAR_5;
   break;
  case 129:
   FUNC_1(VAR_5);
   VAR_7->sad_all = VAR_5;
   break;
  case 128:
   FUNC_1(VAR_5);
   VAR_7->util_all = VAR_5;
   break;
  case 130:






   FUNC_5(VAR_5, 0xB4, &VAR_8);
   if (VAR_8 != 0) {
    if (VAR_7->mcroute == 0) {
     VAR_7->mcroute = VAR_8;
    } else if (VAR_7->mcroute != VAR_8) {
     FUNC_6(VAR_1, "mcroute mismatch\n");
     goto fail;
    }
   }
   VAR_10--;
   break;
  }

  VAR_6 = VAR_5;
 }

 return VAR_10;
fail:
 FUNC_2(VAR_5);
 return -VAR_0;
}
