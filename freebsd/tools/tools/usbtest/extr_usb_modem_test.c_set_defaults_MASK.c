
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modem {int data_stress_test; int control_ep_test; int duration; } ;


 int FUNC_0 (struct modem*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct modem *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->data_stress_test = 1;
 VAR_0->control_ep_test = 1;
 VAR_0->duration = 60;
}
