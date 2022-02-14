
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int u_int32_t ;
struct TYPE_4__ {int sc_io_rman; int sc_quirks; } ;
struct cpcht_softc {TYPE_2__* htirq_map; int htirq_mtx; TYPE_1__ pci_sc; scalar_t__ sc_data; scalar_t__ sc_populated_slots; } ;
typedef int reg ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;
struct TYPE_5__ {int irq_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 TYPE_2__* VAR_5 ;
 struct cpcht_softc* FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_6)
{
 struct cpcht_softc *VAR_7;
 phandle_t VAR_8, VAR_9;
 u_int32_t VAR_10[3];
 int VAR_11;

 VAR_8 = FUNC_8(VAR_6);
 VAR_7 = FUNC_6(VAR_6);

 if (FUNC_1(VAR_8, "reg", VAR_10, sizeof(VAR_10)) < 12)
  return (VAR_1);

 if (FUNC_2(VAR_8, "ranges") <= 0)
  VAR_7->pci_sc.sc_quirks = VAR_4;
 VAR_7->sc_populated_slots = 0;
 VAR_7->sc_data = (vm_offset_t)FUNC_10(VAR_10[1], VAR_10[2]);
 FUNC_4(VAR_7->htirq_map, sizeof(VAR_7->htirq_map));
 FUNC_7(&VAR_7->htirq_mtx, "cpcht irq", ((void*)0), VAR_3);
 for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
  VAR_7->htirq_map[VAR_11].irq_type = VAR_2;
 for (VAR_9 = FUNC_0(VAR_8); VAR_9 != 0; VAR_9 = FUNC_3(VAR_9))
  FUNC_5(VAR_6, VAR_9);


 VAR_5 = VAR_7->htirq_map;

 return (FUNC_9(VAR_6));
}
