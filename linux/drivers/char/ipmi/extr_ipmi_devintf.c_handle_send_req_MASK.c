
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernel_ipmi_msg {int data_len; struct ipmi_addr* data; int cmd; int netfn; } ;
struct ipmi_user {int dummy; } ;
struct TYPE_2__ {int data_len; int * data; int cmd; int netfn; } ;
struct ipmi_req {int addr_len; int msgid; TYPE_1__ msg; int * addr; } ;
struct ipmi_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ipmi_addr*,int *,int) ;
 int FUNC_1 (struct ipmi_user*,struct ipmi_addr*,int ,struct kernel_ipmi_msg*,int *,int ,int,unsigned int) ;
 int FUNC_2 (struct ipmi_addr*,int) ;
 int FUNC_3 (struct ipmi_addr*) ;
 struct ipmi_addr* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct ipmi_user *VAR_6,
      struct ipmi_req *VAR_7,
      int VAR_8,
      unsigned int VAR_9)
{
 int VAR_10;
 struct ipmi_addr VAR_11;
 struct kernel_ipmi_msg VAR_12;

 if (VAR_7->addr_len > sizeof(struct ipmi_addr))
  return -VAR_1;

 if (FUNC_0(&VAR_11, VAR_7->addr, VAR_7->addr_len))
  return -VAR_0;

 VAR_12.netfn = VAR_7->msg.netfn;
 VAR_12.cmd = VAR_7->msg.cmd;
 VAR_12.data_len = VAR_7->msg.data_len;
 VAR_12.data = FUNC_4(VAR_5, VAR_4);
 if (!VAR_12.data)
  return -VAR_3;




 VAR_10 = FUNC_2(&VAR_11, VAR_7->addr_len);
 if (VAR_10)
  goto out;

 if (VAR_7->msg.data != ((void*)0)) {
  if (VAR_7->msg.data_len > VAR_5) {
   VAR_10 = -VAR_2;
   goto out;
  }

  if (FUNC_0(VAR_12.data,
       VAR_7->msg.data,
       VAR_7->msg.data_len)) {
   VAR_10 = -VAR_0;
   goto out;
  }
 } else {
  VAR_12.data_len = 0;
 }

 VAR_10 = FUNC_1(VAR_6,
      &VAR_11,
      VAR_7->msgid,
      &VAR_12,
      ((void*)0),
      0,
      VAR_8,
      VAR_9);
 out:
 FUNC_3(VAR_12.data);
 return VAR_10;
}
