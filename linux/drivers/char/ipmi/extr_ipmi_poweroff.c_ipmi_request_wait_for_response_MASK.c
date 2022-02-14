
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kernel_ipmi_msg {int dummy; } ;
struct ipmi_user {int dummy; } ;
struct ipmi_addr {int dummy; } ;
struct completion {int dummy; } ;
struct TYPE_4__ {int* data; } ;
struct TYPE_5__ {TYPE_1__ msg; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (struct ipmi_user*,struct ipmi_addr*,int ,struct kernel_ipmi_msg*,struct completion*,int *,TYPE_2__*,int ) ;
 int FUNC_2 (struct completion*) ;

__attribute__((used)) static int FUNC_3(struct ipmi_user *VAR_2,
       struct ipmi_addr *VAR_3,
       struct kernel_ipmi_msg *VAR_4)
{
 int VAR_5;
 struct completion VAR_6;

 FUNC_0(&VAR_6);

 VAR_5 = FUNC_1(VAR_2, VAR_3, 0, VAR_4, &VAR_6,
          &VAR_1, &VAR_0, 0);
 if (VAR_5)
  return VAR_5;

 FUNC_2(&VAR_6);

 return VAR_0.msg.data[0];
}
