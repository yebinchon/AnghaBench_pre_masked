
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (char*,char*,struct device_node*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device_node *VAR_12)
{
 if (FUNC_0("enabled", "inst-spec-barrier-ori31,31,0", VAR_12))
  FUNC_2(VAR_11);

 if (FUNC_0("enabled", "fw-bcctrl-serialized", VAR_12))
  FUNC_2(VAR_0);

 if (FUNC_0("enabled", "inst-l1d-flush-ori30,30,0", VAR_12))
  FUNC_2(VAR_7);

 if (FUNC_0("enabled", "inst-l1d-flush-trig2", VAR_12))
  FUNC_2(VAR_9);

 if (FUNC_0("enabled", "fw-l1d-thread-split", VAR_12))
  FUNC_2(VAR_10);

 if (FUNC_0("enabled", "fw-count-cache-disabled", VAR_12))
  FUNC_2(VAR_3);

 if (FUNC_0("enabled", "fw-count-cache-flush-bcctr2,0,0", VAR_12))
  FUNC_2(VAR_1);

 if (FUNC_0("enabled", "needs-count-cache-flush-on-context-switch", VAR_12))
  FUNC_2(VAR_5);





 if (FUNC_0("disabled", "speculation-policy-favor-security", VAR_12))
  FUNC_1(VAR_4);

 if (FUNC_0("disabled", "needs-l1d-flush-msr-pr-0-to-1", VAR_12))
  FUNC_1(VAR_8);

 if (FUNC_0("disabled", "needs-l1d-flush-msr-hv-1-to-0", VAR_12))
  FUNC_1(VAR_6);

 if (FUNC_0("disabled", "needs-spec-barrier-for-bound-checks", VAR_12))
  FUNC_1(VAR_2);
}
