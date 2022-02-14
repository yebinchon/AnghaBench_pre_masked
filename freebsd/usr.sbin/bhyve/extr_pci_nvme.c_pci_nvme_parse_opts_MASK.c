
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ type; int size; int sectsz; int sectsz_bits; int * ctx; int eui64; } ;
struct TYPE_4__ {char* sn; } ;
struct pci_nvme_softc {void* max_queues; void* num_squeues; void* num_cqueues; void* ioslots; void* max_qentries; TYPE_3__ nvstore; TYPE_2__* nsc_pi; TYPE_1__ ctrldata; } ;
typedef int bident ;
struct TYPE_5__ {int pi_slot; int pi_func; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (char*) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int) ;
 int FUNC_5 (char*,int,char*,char) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,char*,int,int) ;
 int VAR_5 ;
 char* FUNC_11 (char*,char) ;
 int FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*) ;
 char* FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_16(struct pci_nvme_softc *VAR_6, char *VAR_7)
{
 char VAR_8[sizeof("XX:X:X")];
 char *VAR_9, *VAR_10, *VAR_11;
 uint32_t VAR_12;
 int VAR_13;

 VAR_6->max_queues = VAR_2;
 VAR_6->max_qentries = VAR_1;
 VAR_6->ioslots = VAR_0;
 VAR_6->num_squeues = VAR_6->max_queues;
 VAR_6->num_cqueues = VAR_6->max_queues;
 VAR_12 = 0;

 VAR_9 = FUNC_13(VAR_7);
 VAR_13 = 0;
 FUNC_10(VAR_6->ctrldata.sn, sizeof(VAR_6->ctrldata.sn),
          "NVME-%d-%d", VAR_6->nsc_pi->pi_slot, VAR_6->nsc_pi->pi_func);
 for (VAR_10 = FUNC_14(VAR_9, ",");
      VAR_10 != ((void*)0);
      VAR_10 = FUNC_14(((void*)0), ",")) {

  if ((VAR_11 = FUNC_11(VAR_10, '=')) != ((void*)0))
   *VAR_11++ = '\0';

  if (!FUNC_12("maxq", VAR_10)) {
   VAR_6->max_queues = FUNC_0(VAR_11);
  } else if (!FUNC_12("qsz", VAR_10)) {
   VAR_6->max_qentries = FUNC_0(VAR_11);
  } else if (!FUNC_12("ioslots", VAR_10)) {
   VAR_6->ioslots = FUNC_0(VAR_11);
  } else if (!FUNC_12("sectsz", VAR_10)) {
   VAR_12 = FUNC_0(VAR_11);
  } else if (!FUNC_12("ser", VAR_10)) {





   FUNC_5((char *)VAR_6->ctrldata.sn,
              sizeof(VAR_6->ctrldata.sn), VAR_11, ' ');
  } else if (!FUNC_12("ram", VAR_10)) {
   uint64_t VAR_14 = FUNC_15(&VAR_10[4], ((void*)0), 10);

   VAR_6->nvstore.type = VAR_4;
   VAR_6->nvstore.size = VAR_14 * 1024 * 1024;
   VAR_6->nvstore.ctx = FUNC_4(1, VAR_6->nvstore.size);
   VAR_6->nvstore.sectsz = 4096;
   VAR_6->nvstore.sectsz_bits = 12;
   if (VAR_6->nvstore.ctx == ((void*)0)) {
    FUNC_9("Unable to allocate RAM");
    FUNC_7(VAR_9);
    return (-1);
   }
  } else if (!FUNC_12("eui64", VAR_10)) {
   VAR_6->nvstore.eui64 = FUNC_8(FUNC_15(VAR_11, ((void*)0), 0));
  } else if (VAR_13 == 0) {
   FUNC_10(VAR_8, sizeof(VAR_8), "%d:%d",
            VAR_6->nsc_pi->pi_slot, VAR_6->nsc_pi->pi_func);
   VAR_6->nvstore.ctx = FUNC_1(VAR_10, VAR_8);
   if (VAR_6->nvstore.ctx == ((void*)0)) {
    FUNC_9("Could not open backing file");
    FUNC_7(VAR_9);
    return (-1);
   }
   VAR_6->nvstore.type = VAR_3;
   VAR_6->nvstore.size = FUNC_3(VAR_6->nvstore.ctx);
  } else {
   FUNC_6(VAR_5, "Invalid option %s\n", VAR_10);
   FUNC_7(VAR_9);
   return (-1);
  }

  VAR_13++;
 }
 FUNC_7(VAR_9);

 if (VAR_6->nvstore.ctx == ((void*)0) || VAR_6->nvstore.size == 0) {
  FUNC_6(VAR_5, "backing store not specified\n");
  return (-1);
 }
 if (VAR_12 == 512 || VAR_12 == 4096 || VAR_12 == 8192)
  VAR_6->nvstore.sectsz = VAR_12;
 else if (VAR_6->nvstore.type != VAR_4)
  VAR_6->nvstore.sectsz = FUNC_2(VAR_6->nvstore.ctx);
 for (VAR_6->nvstore.sectsz_bits = 9;
      (1 << VAR_6->nvstore.sectsz_bits) < VAR_6->nvstore.sectsz;
      VAR_6->nvstore.sectsz_bits++);

 if (VAR_6->max_queues <= 0 || VAR_6->max_queues > VAR_2)
  VAR_6->max_queues = VAR_2;

 if (VAR_6->max_qentries <= 0) {
  FUNC_6(VAR_5, "Invalid qsz option\n");
  return (-1);
 }
 if (VAR_6->ioslots <= 0) {
  FUNC_6(VAR_5, "Invalid ioslots option\n");
  return (-1);
 }

 return (0);
}
