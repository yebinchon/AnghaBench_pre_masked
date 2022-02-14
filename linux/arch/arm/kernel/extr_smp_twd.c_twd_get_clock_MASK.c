
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device_node*,int ) ;
 int FUNC_7 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(struct device_node *VAR_2)
{
 int VAR_3;

 if (VAR_2)
  VAR_0 = FUNC_6(VAR_2, 0);
 else
  VAR_0 = FUNC_3("smp_twd", ((void*)0));

 if (FUNC_0(VAR_0)) {
  FUNC_7("smp_twd: clock not found %d\n", (int) FUNC_1(VAR_0));
  return;
 }

 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3) {
  FUNC_7("smp_twd: clock failed to prepare+enable: %d\n", VAR_3);
  FUNC_5(VAR_0);
  return;
 }

 VAR_1 = FUNC_2(VAR_0);
}
