
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int tc_quality; char* tc_name; int tc_frequency; void* tc_priv; int tc_get_timecount; int tc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int VAR_13 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 TYPE_1__ VAR_24 ;

__attribute__((used)) static void
FUNC_4(void)
{
 uint64_t VAR_25;
 int VAR_26;

 if ((VAR_10 & VAR_2) == 0 || VAR_14)
  return;





 VAR_25 = VAR_7;
 if (FUNC_0() == VAR_5) {
  VAR_24.tc_quality = -1000;
  if (VAR_9)
   FUNC_1("TSC timecounter disabled: APM enabled.\n");
  goto init;
 }
 if (VAR_11 == VAR_4 &&
     (VAR_8 & VAR_0) == 0) {
  VAR_24.tc_flags |= VAR_6;
  if (VAR_9)
   FUNC_1("TSC timecounter disables C2 and C3.\n");
 }
 if (VAR_22)
  VAR_24.tc_quality = 1000;
 VAR_25 >>= VAR_23;

init:
 for (VAR_26 = 0; VAR_26 <= 31 && (VAR_15 >> VAR_26) > VAR_25; VAR_26++)
  ;
 if ((VAR_10 & VAR_1) != 0 && VAR_12 > 1) {
  if (VAR_11 == VAR_3) {
   VAR_24.tc_get_timecount = VAR_26 > 0 ?
       VAR_20 :
       VAR_21;
  } else {
   VAR_24.tc_get_timecount = VAR_26 > 0 ?
       VAR_19 :
       VAR_17;
  }
 } else {
  VAR_24.tc_get_timecount = VAR_26 > 0 ?
      VAR_18 : VAR_16;
 }
 if (VAR_26 > 0) {
  VAR_24.tc_name = "TSC-low";
  if (VAR_9)
   FUNC_1("TSC timecounter discards lower %d bit(s)\n",
       VAR_26);
 }
 if (VAR_15 != 0) {
  VAR_24.tc_frequency = VAR_15 >> VAR_26;
  VAR_24.tc_priv = (void *)(intptr_t)VAR_26;
  FUNC_2(&VAR_24);
 }
}
