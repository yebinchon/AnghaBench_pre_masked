
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernel_ipmi_msg {int dummy; } ;
struct ipmi_smi_msg {int done; } ;
struct ipmi_smi {int send_info; TYPE_2__* handlers; TYPE_1__* addrinfo; } ;
struct ipmi_recv_msg {int done; } ;
struct ipmi_addr {int dummy; } ;
struct TYPE_4__ {int (* flush_messages ) (int ) ;} ;
struct TYPE_3__ {int lun; int address; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,struct ipmi_smi*,struct ipmi_addr*,int ,struct kernel_ipmi_msg*,struct ipmi_smi*,struct ipmi_smi_msg*,struct ipmi_recv_msg*,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct ipmi_smi*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ipmi_smi *VAR_3,
     struct ipmi_addr *VAR_4,
     struct kernel_ipmi_msg *VAR_5)
{
 struct ipmi_smi_msg VAR_6;
 struct ipmi_recv_msg VAR_7;
 int VAR_8;

 VAR_6.done = VAR_1;
 VAR_7.done = VAR_0;
 FUNC_0(2, &VAR_2);
 VAR_8 = FUNC_3(((void*)0),
       VAR_3,
       VAR_4,
       0,
       VAR_5,
       VAR_3,
       &VAR_6,
       &VAR_7,
       0,
       VAR_3->addrinfo[0].address,
       VAR_3->addrinfo[0].lun,
       0, 1);
 if (VAR_8)
  FUNC_2(2, &VAR_2);
 else if (VAR_3->handlers->flush_messages)
  VAR_3->handlers->flush_messages(VAR_3->send_info);

 while (FUNC_1(&VAR_2) != 0)
  FUNC_4(VAR_3);
}
