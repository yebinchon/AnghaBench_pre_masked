
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_ipmi_msg {int dummy; } ;
struct ipmi_user {int intf; } ;
struct ipmi_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipmi_user* FUNC_0 (struct ipmi_user*,int*) ;
 int FUNC_1 (int ,struct ipmi_addr*,unsigned char*,unsigned char*) ;
 int FUNC_2 (struct ipmi_user*,int ,struct ipmi_addr*,long,struct kernel_ipmi_msg*,void*,int *,int *,int,unsigned char,unsigned char,int,unsigned int) ;
 int FUNC_3 (struct ipmi_user*,int) ;

int FUNC_4(struct ipmi_user *VAR_2,
    struct ipmi_addr *VAR_3,
    long VAR_4,
    struct kernel_ipmi_msg *VAR_5,
    void *VAR_6,
    int VAR_7,
    int VAR_8,
    unsigned int VAR_9)
{
 unsigned char VAR_10 = 0, VAR_11 = 0;
 int VAR_12, VAR_13;

 if (!VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_2, &VAR_13);
 if (!VAR_2)
  return -VAR_1;

 VAR_12 = FUNC_1(VAR_2->intf, VAR_3, &VAR_10, &VAR_11);
 if (!VAR_12)
  VAR_12 = FUNC_2(VAR_2,
        VAR_2->intf,
        VAR_3,
        VAR_4,
        VAR_5,
        VAR_6,
        ((void*)0), ((void*)0),
        VAR_7,
        VAR_10,
        VAR_11,
        VAR_8,
        VAR_9);

 FUNC_3(VAR_2, VAR_13);
 return VAR_12;
}
