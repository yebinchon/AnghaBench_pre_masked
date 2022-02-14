
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct eventtimer {int dummy; } ;
struct TYPE_3__ {char* et_name; int et_flags; int et_frequency; int et_min_period; int et_max_period; int et_priv; int et_stop; int et_start; scalar_t__ et_quality; } ;
struct atrtc_softc {TYPE_1__ et; int * intr_res; int intr_handler; scalar_t__ intr_rid; int * port_res; scalar_t__ port_rid; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 void* FUNC_1 (int ,int ,scalar_t__*,int,int,int,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int*,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ,int *,struct atrtc_softc*,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 struct atrtc_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (int ,int ,char*,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_13(device_t VAR_11)
{
 struct atrtc_softc *VAR_12;
 rman_res_t VAR_13;
 int VAR_14;

 VAR_12 = FUNC_8(VAR_11);
 VAR_12->port_res = FUNC_1(VAR_11, VAR_5, &VAR_12->port_rid,
     VAR_3, VAR_3 + 1, 2, VAR_4);
 if (VAR_12->port_res == ((void*)0))
  FUNC_10(VAR_11, "Warning: Couldn't map I/O.\n");
 FUNC_0();
 FUNC_6(VAR_11, 1000000);
 FUNC_5(&VAR_12->et, sizeof(struct eventtimer));
 if (!VAR_7 &&
     (FUNC_12(FUNC_7(VAR_11), FUNC_9(VAR_11),
      "clock", &VAR_14) != 0 || VAR_14 != 0)) {
  VAR_12->intr_rid = 0;
  while (FUNC_3(VAR_11, VAR_6, VAR_12->intr_rid,
      &VAR_13, ((void*)0)) == 0 && VAR_13 != 8)
   VAR_12->intr_rid++;
  VAR_12->intr_res = FUNC_1(VAR_11, VAR_6,
      &VAR_12->intr_rid, 8, 8, 1, VAR_4);
  if (VAR_12->intr_res == ((void*)0)) {
   FUNC_10(VAR_11, "Can't map interrupt.\n");
   return (0);
  } else if ((FUNC_4(VAR_11, VAR_12->intr_res, VAR_2,
      VAR_8, ((void*)0), VAR_12, &VAR_12->intr_handler))) {
   FUNC_10(VAR_11, "Can't setup interrupt.\n");
   return (0);
  } else {

   FUNC_2(VAR_11, VAR_12->intr_res, 0);
  }
  VAR_12->et.et_name = "RTC";
  VAR_12->et.et_flags = VAR_0 | VAR_1;
  VAR_12->et.et_quality = 0;
  VAR_12->et.et_frequency = 32768;
  VAR_12->et.et_min_period = 0x00080000;
  VAR_12->et.et_max_period = 0x80000000;
  VAR_12->et.et_start = VAR_9;
  VAR_12->et.et_stop = VAR_10;
  VAR_12->et.et_priv = VAR_11;
  FUNC_11(&VAR_12->et);
 }
 return(0);
}
