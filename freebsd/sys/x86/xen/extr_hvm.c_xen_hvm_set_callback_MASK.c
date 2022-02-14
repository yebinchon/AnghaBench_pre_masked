
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct xen_hvm_param {int value; int index; int domid; } ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,struct xen_hvm_param*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_6 ;

void
FUNC_11(device_t VAR_7)
{
 struct xen_hvm_param VAR_8;
 int VAR_9;

 if (VAR_6)
  return;

 VAR_8.domid = VAR_0;
 VAR_8.index = VAR_2;
 if (FUNC_10(VAR_4) != 0) {
  int VAR_10;

  VAR_10 = FUNC_9(0);
  if (VAR_10 == 0) {
   VAR_5 = 1;

   VAR_8.value = 1;
  } else
   VAR_8.value = FUNC_2(VAR_3);
  VAR_10 = FUNC_3(VAR_1, &VAR_8);
  if (VAR_10 == 0) {
   VAR_6 = 1;
   return;
  } else if (VAR_5)
   FUNC_4("Unable to setup fake HVM param: %d", VAR_10);

  FUNC_8("Xen HVM callback vector registration failed (%d). "
      "Falling back to emulated device interrupt\n", VAR_10);
 }
 VAR_6 = 0;
 if (VAR_7 == ((void*)0)) {




  return;
 }

 VAR_9 = FUNC_6(VAR_7);
 if (VAR_9 < 16) {
  VAR_8.value = FUNC_0(VAR_9);
 } else {
  u_int VAR_11;
  u_int VAR_12;

  VAR_11 = FUNC_7(VAR_7);
  VAR_12 = FUNC_5(VAR_7) - 1;
  VAR_8.value = FUNC_1(VAR_11, VAR_12);
 }

 if (FUNC_3(VAR_1, &VAR_8) != 0)
  FUNC_4("Can't set evtchn callback");
}
