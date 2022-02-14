
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_smi {int send_info; TYPE_1__* handlers; } ;
struct TYPE_2__ {int (* poll ) (int ) ;} ;


 int FUNC_0 (struct ipmi_smi*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ipmi_smi *VAR_0)
{
 if (VAR_0->handlers->poll)
  VAR_0->handlers->poll(VAR_0->send_info);

 FUNC_0(VAR_0);
}
