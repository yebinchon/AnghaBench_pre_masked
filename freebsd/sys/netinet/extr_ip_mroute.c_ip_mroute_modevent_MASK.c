
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;


 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int *) ;
 int * VAR_18 ;
 int * VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int VAR_24 ;
 int * VAR_25 ;
 int * VAR_26 ;
 int VAR_27 ;
 int * VAR_28 ;
 int VAR_29 ;
 int * VAR_30 ;
 int * VAR_31 ;
 int VAR_32 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,...) ;
 int * VAR_33 ;

__attribute__((used)) static int
FUNC_15(module_t VAR_34, int VAR_35, void *VAR_36)
{

    switch (VAR_35) {
    case 129:
 FUNC_6();

 VAR_15 = FUNC_1(VAR_17,
     VAR_16, ((void*)0), VAR_2);
 if (VAR_15 == ((void*)0)) {
  FUNC_14("ip_mroute: unable to register "
      "ifnet_departure_event handler\n");
  FUNC_5();
  return (VAR_0);
 }

 FUNC_3();
 FUNC_10();

 VAR_29 = VAR_3;
 if (FUNC_8("net.inet.ip.mfchashsize", &VAR_29) &&
     !FUNC_13(VAR_29)) {
  FUNC_14("WARNING: %s not a power of 2; using default\n",
      "net.inet.ip.mfchashsize");
  VAR_29 = VAR_3;
 }

 VAR_32 = 0;
 FUNC_8("net.inet.pim.squelch_wholepkt",
     &VAR_32);

 VAR_31 = FUNC_11(&VAR_27, ((void*)0), VAR_4);
 if (VAR_31 == ((void*)0)) {
  FUNC_14("ip_mroute: unable to attach pim encap\n");
  FUNC_9();
  FUNC_2();
  FUNC_5();
  return (VAR_0);
 }

 VAR_18 = VAR_5;
 VAR_19 = VAR_6;
 VAR_21 = VAR_7;
 VAR_22 = VAR_8;
 VAR_23 = VAR_9;

 VAR_25 = VAR_10;
 VAR_26 = VAR_11;

 VAR_28 = VAR_12;
 VAR_30 = VAR_13;
 VAR_33 = VAR_14;
 break;

    case 128:
 FUNC_4();
 if (VAR_20 != 0) {
     FUNC_7();
     return (VAR_0);
 }
 VAR_24 = 1;
 FUNC_7();

 FUNC_0(VAR_17, VAR_15);

 if (VAR_31) {
     FUNC_12(VAR_31);
     VAR_31 = ((void*)0);
 }

 VAR_18 = ((void*)0);
 VAR_19 = ((void*)0);
 VAR_21 = ((void*)0);
 VAR_22 = ((void*)0);
 VAR_23 = ((void*)0);

 VAR_25 = ((void*)0);
 VAR_26 = ((void*)0);

 VAR_28 = ((void*)0);
 VAR_30 = ((void*)0);
 VAR_33 = ((void*)0);

 FUNC_9();
 FUNC_2();
 FUNC_5();
 break;

    default:
 return VAR_1;
    }
    return 0;
}
