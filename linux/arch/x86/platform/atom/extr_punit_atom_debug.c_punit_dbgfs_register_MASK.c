
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct punit_device {int dummy; } ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,int ,struct punit_device*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct punit_device *VAR_2)
{
 VAR_0 = FUNC_0("punit_atom", ((void*)0));

 FUNC_1("dev_power_state", 0444, VAR_0,
       VAR_2, &VAR_1);
}
