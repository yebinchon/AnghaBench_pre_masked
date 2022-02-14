
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct op_msrs {TYPE_2__* controls; TYPE_1__* counters; } ;
struct TYPE_10__ {int x86_model; } ;
struct TYPE_9__ {int enabled; } ;
struct TYPE_8__ {unsigned int counter_address; unsigned int cccr_address; } ;
struct TYPE_7__ {unsigned int addr; } ;
struct TYPE_6__ {unsigned int addr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 size_t FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 () ;
 TYPE_5__ VAR_14 ;
 TYPE_4__* VAR_15 ;
 unsigned int FUNC_2 () ;
 unsigned int VAR_16 ;
 int FUNC_3 (unsigned int) ;
 TYPE_3__* VAR_17 ;
 int FUNC_4 (struct op_msrs* const) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct op_msrs * const VAR_18)
{
 unsigned int VAR_19;
 unsigned int VAR_20, VAR_21, VAR_22;

 FUNC_7();
 VAR_22 = FUNC_2();


 for (VAR_19 = 0; VAR_19 < VAR_16; ++VAR_19) {
  VAR_20 = VAR_17[FUNC_0(VAR_22, VAR_19)].counter_address;
  VAR_21 = VAR_17[FUNC_0(VAR_22, VAR_19)].cccr_address;
  if (FUNC_6(VAR_20)) {
   VAR_18->counters[VAR_19].addr = VAR_20;
   VAR_18->controls[VAR_19].addr = VAR_21;
  }
 }


 for (VAR_20 = VAR_1 + VAR_22;
      VAR_20 < VAR_6; ++VAR_19, VAR_20 += FUNC_1()) {
  if (FUNC_5(VAR_20))
   VAR_18->controls[VAR_19].addr = VAR_20;
 }



 if (VAR_14.x86_model >= 0x3) {
  for (VAR_20 = VAR_1 + VAR_22;
       VAR_20 <= VAR_2; ++VAR_19, VAR_20 += FUNC_1()) {
   if (FUNC_5(VAR_20))
    VAR_18->controls[VAR_19].addr = VAR_20;
  }
 } else {
  for (VAR_20 = VAR_6 + VAR_22;
       VAR_20 <= VAR_7; ++VAR_19, VAR_20 += FUNC_1()) {
   if (FUNC_5(VAR_20))
    VAR_18->controls[VAR_19].addr = VAR_20;
  }
 }

 for (VAR_20 = VAR_10 + VAR_22;
      VAR_20 <= VAR_11; ++VAR_19, VAR_20 += FUNC_1()) {
  if (FUNC_5(VAR_20))
   VAR_18->controls[VAR_19].addr = VAR_20;
 }

 for (VAR_20 = VAR_9 + VAR_22;
      VAR_20 <= VAR_12; ++VAR_19, VAR_20 += FUNC_1()) {
  if (FUNC_5(VAR_20))
   VAR_18->controls[VAR_19].addr = VAR_20;
 }

 for (VAR_20 = VAR_8 + VAR_22;
      VAR_20 <= VAR_3; ++VAR_19, VAR_20 += FUNC_1()) {
  if (FUNC_5(VAR_20))
   VAR_18->controls[VAR_19].addr = VAR_20;
 }



 if (VAR_16 == VAR_13) {

  if (FUNC_5(VAR_5))
   VAR_18->controls[VAR_19++].addr = VAR_5;
  if (FUNC_5(VAR_4))
   VAR_18->controls[VAR_19++].addr = VAR_4;

 } else if (VAR_22 == 0) {


  if (FUNC_5(VAR_4))
   VAR_18->controls[VAR_19++].addr = VAR_4;

 } else {


  if (FUNC_5(VAR_5)) {
   VAR_18->controls[VAR_19++].addr = VAR_5;
   VAR_18->controls[VAR_19++].addr = VAR_5;
  }
 }

 for (VAR_19 = 0; VAR_19 < VAR_16; ++VAR_19) {
  if (!VAR_15[VAR_19].enabled)
   continue;
  if (VAR_18->controls[VAR_19].addr)
   continue;
  FUNC_3(VAR_19);
  FUNC_4(VAR_18);
  return -VAR_0;
 }

 return 0;
}
