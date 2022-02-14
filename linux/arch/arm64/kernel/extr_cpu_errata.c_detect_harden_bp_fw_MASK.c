
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct arm_smccc_res {scalar_t__ a0; } ;
typedef int bp_hardening_cb_t ;
struct TYPE_2__ {scalar_t__ smccc_version; int conduit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (int ,int ,struct arm_smccc_res*) ;
 int FUNC_2 (int ,int ,struct arm_smccc_res*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,void*,void*) ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void)
{
 bp_hardening_cb_t VAR_13;
 void *VAR_14, *VAR_15;
 struct arm_smccc_res VAR_16;
 u32 VAR_17 = FUNC_4();

 if (VAR_11.smccc_version == VAR_6)
  return -1;

 switch (VAR_11.conduit) {
 case 129:
  FUNC_1(VAR_0,
      VAR_1, &VAR_16);
  switch ((int)VAR_16.a0) {
  case 1:

   return 0;
  case 0:
   VAR_13 = VAR_9;

   VAR_14 = ((void*)0);
   VAR_15 = ((void*)0);
   break;
  default:
   return -1;
  }
  break;

 case 128:
  FUNC_2(VAR_0,
      VAR_1, &VAR_16);
  switch ((int)VAR_16.a0) {
  case 1:

   return 0;
  case 0:
   VAR_13 = VAR_10;
   VAR_14 = VAR_8;
   VAR_15 = VAR_7;
   break;
  default:
   return -1;
  }
  break;

 default:
  return -1;
 }

 if (((VAR_17 & VAR_3) == VAR_4) ||
     ((VAR_17 & VAR_3) == VAR_5))
  VAR_13 = VAR_12;

 if (FUNC_0(VAR_2))
  FUNC_3(VAR_13, VAR_14, VAR_15);

 return 1;
}
