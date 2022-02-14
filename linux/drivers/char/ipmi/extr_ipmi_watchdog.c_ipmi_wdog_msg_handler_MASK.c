
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmd; scalar_t__* data; } ;
struct ipmi_recv_msg {TYPE_1__ msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ipmi_recv_msg*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct ipmi_recv_msg *VAR_2,
      void *VAR_3)
{
 if (VAR_2->msg.cmd == VAR_0 &&
   VAR_2->msg.data[0] == VAR_1)
  FUNC_2("response: The IPMI controller appears to have been reset, will attempt to reinitialize the watchdog timer\n");
 else if (VAR_2->msg.data[0] != 0)
  FUNC_1("response: Error %x on cmd %x\n",
         VAR_2->msg.data[0],
         VAR_2->msg.cmd);

 FUNC_0(VAR_2);
}
