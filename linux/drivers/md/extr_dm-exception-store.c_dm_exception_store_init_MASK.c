
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(void)
{
 int VAR_0;

 VAR_0 = FUNC_3();
 if (VAR_0) {
  FUNC_0("Unable to register transient exception store type.");
  goto transient_fail;
 }

 VAR_0 = FUNC_1();
 if (VAR_0) {
  FUNC_0("Unable to register persistent exception store type");
  goto persistent_fail;
 }

 return 0;

persistent_fail:
 FUNC_2();
transient_fail:
 return VAR_0;
}
