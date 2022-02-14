
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nokia_modem_device {scalar_t__ ssi_protocol; int device; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct nokia_modem_device *VAR_1 = (struct nokia_modem_device *)VAR_0;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1->device, "CMT rst line change detected\n");

 if (VAR_1->ssi_protocol)
  FUNC_1(VAR_1->ssi_protocol);
}
