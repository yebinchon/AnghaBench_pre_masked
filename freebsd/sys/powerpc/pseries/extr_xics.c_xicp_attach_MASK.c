
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xicp_softc {int* cpu_range; int xics_emu; scalar_t__ nintvecs; int sc_mtx; int ** mem; void* ibm_get_xive; void* ibm_set_xive; void* ibm_int_off; void* ibm_int_on; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_2__ {int pc_hwref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int*,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int *,int,int) ;
 struct xicp_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 () ;
 int VAR_11 ;
 int FUNC_8 (int *,char*,int *,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int,...) ;
 scalar_t__ FUNC_12 () ;
 TYPE_1__* FUNC_13 (int) ;
 int VAR_12 ;
 int FUNC_14 (int ,int ,int ,int,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_15 () ;
 void* FUNC_16 (char*) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_17(device_t VAR_15)
{
 struct xicp_softc *VAR_16 = FUNC_5(VAR_15);
 phandle_t VAR_17 = FUNC_9(VAR_15);

 if (FUNC_15()) {
  VAR_16->ibm_int_on = FUNC_16("ibm,int-on");
  VAR_16->ibm_int_off = FUNC_16("ibm,int-off");
  VAR_16->ibm_set_xive = FUNC_16("ibm,set-xive");
  VAR_16->ibm_get_xive = FUNC_16("ibm,get-xive");




 } else {
  FUNC_6(VAR_15, "Cannot attach without RTAS or OPAL\n");
  return (VAR_0);
 }

 if (FUNC_1(VAR_17, "ibm,interrupt-server-ranges")) {
  FUNC_0(VAR_17, "ibm,interrupt-server-ranges",
      VAR_16->cpu_range, sizeof(VAR_16->cpu_range));
  VAR_16->cpu_range[1] += VAR_16->cpu_range[0];
  FUNC_6(VAR_15, "Handling CPUs %d-%d\n", VAR_16->cpu_range[0],
      VAR_16->cpu_range[1]-1);
 } else {
  VAR_16->cpu_range[0] = 0;
  VAR_16->cpu_range[1] = VAR_11;
 }
 FUNC_8(&VAR_16->sc_mtx, "XICP", ((void*)0), VAR_3);
 VAR_16->nintvecs = 0;

 FUNC_14(VAR_15, FUNC_2(VAR_17), VAR_2,
     1 , VAR_1);
 VAR_13 = VAR_15;






 return (0);
}
