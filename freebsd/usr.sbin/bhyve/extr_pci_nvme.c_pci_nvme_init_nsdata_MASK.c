
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int size; int sectsz; int sectsz_bits; } ;
struct pci_nvme_softc {TYPE_2__ nvstore; TYPE_1__* nsc_pi; } ;
struct nvme_namespace_data {int nsze; int ncap; int nuse; int* lbaf; int eui64; scalar_t__ flbas; scalar_t__ nlbaf; } ;
struct TYPE_3__ {int pi_func; int pi_slot; int pi_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct pci_nvme_softc *VAR_3,
    struct nvme_namespace_data *VAR_4, uint32_t VAR_5,
    uint64_t VAR_6)
{

 VAR_4->nsze = VAR_3->nvstore.size / VAR_3->nvstore.sectsz;
 VAR_4->ncap = VAR_4->nsze;
 VAR_4->nuse = VAR_4->nsze;


 VAR_4->nlbaf = 0;
 VAR_4->flbas = 0;


 if (VAR_6 == 0) {
  char *VAR_7 = ((void*)0);

  FUNC_0(&VAR_7, "%d%u%u%u", VAR_2, VAR_3->nsc_pi->pi_bus,
      VAR_3->nsc_pi->pi_slot, VAR_3->nsc_pi->pi_func);

  if (VAR_7 != ((void*)0)) {
   VAR_6 = VAR_1 | FUNC_2(0, VAR_7, FUNC_4(VAR_7));
   FUNC_3(VAR_7);
  }
  VAR_6 = (VAR_6 << 16) | (VAR_5 & 0xffff);
 }
 FUNC_1(VAR_4->eui64, VAR_6);


 VAR_4->lbaf[0] = VAR_3->nvstore.sectsz_bits << VAR_0;
}
