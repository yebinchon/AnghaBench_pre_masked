
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_4__ {void* sub; void* sec; } ;
struct TYPE_5__ {TYPE_1__ bus; void* domain; void* pribus; void* bridgectl; } ;
struct TYPE_6__ {TYPE_2__ ops_pcib_sc; } ;
struct apb_softc {void* sc_memmap; void* sc_iomap; TYPE_3__ sc_bsc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,void**,int ,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (void*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 struct apb_softc* FUNC_5 (int ) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 void* FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,void*,int) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_11)
{
 struct apb_softc *VAR_12;
 struct sysctl_ctx_list *VAR_13;
 struct sysctl_oid *VAR_14;

 VAR_12 = FUNC_5(VAR_11);




 VAR_12->sc_bsc.ops_pcib_sc.domain = FUNC_11(VAR_11);
 VAR_12->sc_bsc.ops_pcib_sc.pribus = FUNC_10(VAR_11);
 FUNC_13(VAR_11, VAR_7, VAR_12->sc_bsc.ops_pcib_sc.pribus, 1);
 VAR_12->sc_bsc.ops_pcib_sc.bus.sec =
     FUNC_12(VAR_11, VAR_8, 1);
 VAR_12->sc_bsc.ops_pcib_sc.bus.sub =
     FUNC_12(VAR_11, VAR_9, 1);
 VAR_12->sc_bsc.ops_pcib_sc.bridgectl =
     FUNC_12(VAR_11, VAR_6, 2);
 VAR_12->sc_iomap = FUNC_12(VAR_11, VAR_0, 1);
 VAR_12->sc_memmap = FUNC_12(VAR_11, VAR_1, 1);




 VAR_13 = FUNC_6(VAR_11);
 VAR_14 = FUNC_7(VAR_11);
 FUNC_0(VAR_13, FUNC_1(VAR_14), VAR_5, "domain",
     VAR_4, &VAR_12->sc_bsc.ops_pcib_sc.domain, 0,
     "Domain number");
 FUNC_0(VAR_13, FUNC_1(VAR_14), VAR_5, "pribus",
     VAR_4, &VAR_12->sc_bsc.ops_pcib_sc.pribus, 0,
     "Primary bus number");
 FUNC_0(VAR_13, FUNC_1(VAR_14), VAR_5, "secbus",
     VAR_4, &VAR_12->sc_bsc.ops_pcib_sc.bus.sec, 0,
     "Secondary bus number");
 FUNC_0(VAR_13, FUNC_1(VAR_14), VAR_5, "subbus",
     VAR_4, &VAR_12->sc_bsc.ops_pcib_sc.bus.sub, 0,
     "Subordinate bus number");

 FUNC_9(VAR_11);

 if (VAR_10) {
  FUNC_8(VAR_11, "  domain            %d\n",
      VAR_12->sc_bsc.ops_pcib_sc.domain);
  FUNC_8(VAR_11, "  secondary bus     %d\n",
      VAR_12->sc_bsc.ops_pcib_sc.bus.sec);
  FUNC_8(VAR_11, "  subordinate bus   %d\n",
      VAR_12->sc_bsc.ops_pcib_sc.bus.sub);
  FUNC_8(VAR_11, "  I/O decode        ");
  FUNC_2(VAR_12->sc_iomap, VAR_2);
  FUNC_14("\n");
  FUNC_8(VAR_11, "  memory decode     ");
  FUNC_2(VAR_12->sc_memmap, VAR_3);
  FUNC_14("\n");
 }

 FUNC_4(VAR_11, "pci", -1);
 return (FUNC_3(VAR_11));
}
