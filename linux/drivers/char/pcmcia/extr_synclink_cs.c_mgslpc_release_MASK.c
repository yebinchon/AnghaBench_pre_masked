
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct pcmcia_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (char*,struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_2(u_long VAR_2)
{
 struct pcmcia_device *VAR_3 = (struct pcmcia_device *)VAR_2;

 if (VAR_1 >= VAR_0)
  FUNC_1("mgslpc_release(0x%p)\n", VAR_3);

 FUNC_0(VAR_3);
}
