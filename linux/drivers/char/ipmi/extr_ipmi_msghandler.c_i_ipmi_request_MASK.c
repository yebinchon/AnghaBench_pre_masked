
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_ipmi_msg {int dummy; } ;
struct ipmi_user {int refcount; } ;
struct ipmi_smi_msg {int data_size; int data; } ;
struct ipmi_smi {int handlers; scalar_t__ in_shutdown; } ;
struct ipmi_recv_msg {long msgid; struct kernel_ipmi_msg msg; struct ipmi_user* user; void* user_msg_data; } ;
struct ipmi_addr {scalar_t__ addr_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ipmi_smi*,struct ipmi_addr*,long,struct kernel_ipmi_msg*,struct ipmi_smi_msg*,struct ipmi_recv_msg*,unsigned char,unsigned char,int,unsigned int) ;
 int FUNC_1 (struct ipmi_smi*,struct ipmi_addr*,long,struct kernel_ipmi_msg*,struct ipmi_smi_msg*,struct ipmi_recv_msg*,unsigned char,int,unsigned int) ;
 int FUNC_2 (struct ipmi_smi*,struct ipmi_addr*,long,struct kernel_ipmi_msg*,struct ipmi_smi_msg*,struct ipmi_recv_msg*,int,unsigned int) ;
 struct ipmi_recv_msg* FUNC_3 () ;
 struct ipmi_smi_msg* FUNC_4 () ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct ipmi_recv_msg*) ;
 int FUNC_7 (struct ipmi_smi_msg*) ;
 int FUNC_8 (struct ipmi_smi*,int ) ;
 scalar_t__ FUNC_9 (struct ipmi_addr*) ;
 scalar_t__ FUNC_10 (struct ipmi_addr*) ;
 scalar_t__ FUNC_11 (struct ipmi_addr*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_4 ;
 int FUNC_15 (struct ipmi_smi*,int ,struct ipmi_smi_msg*,int) ;

__attribute__((used)) static int FUNC_16(struct ipmi_user *VAR_5,
     struct ipmi_smi *VAR_6,
     struct ipmi_addr *VAR_7,
     long VAR_8,
     struct kernel_ipmi_msg *VAR_9,
     void *VAR_10,
     void *VAR_11,
     struct ipmi_recv_msg *VAR_12,
     int VAR_13,
     unsigned char VAR_14,
     unsigned char VAR_15,
     int VAR_16,
     unsigned int VAR_17)
{
 struct ipmi_smi_msg *VAR_18;
 struct ipmi_recv_msg *VAR_19;
 int VAR_20 = 0;

 if (VAR_12)
  VAR_19 = VAR_12;
 else {
  VAR_19 = FUNC_3();
  if (VAR_19 == ((void*)0)) {
   VAR_20 = -VAR_2;
   goto out;
  }
 }
 VAR_19->user_msg_data = VAR_10;

 if (VAR_11)
  VAR_18 = (struct ipmi_smi_msg *) VAR_11;
 else {
  VAR_18 = FUNC_4();
  if (VAR_18 == ((void*)0)) {
   if (!VAR_12)
    FUNC_6(VAR_19);
   VAR_20 = -VAR_2;
   goto out;
  }
 }

 FUNC_13();
 if (VAR_6->in_shutdown) {
  VAR_20 = -VAR_1;
  goto out_err;
 }

 VAR_19->user = VAR_5;
 if (VAR_5)

  FUNC_12(&VAR_5->refcount);
 VAR_19->msgid = VAR_8;




 VAR_19->msg = *VAR_9;

 if (VAR_7->addr_type == VAR_3) {
  VAR_20 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_18,
     VAR_19, VAR_16, VAR_17);
 } else if (FUNC_9(VAR_7) || FUNC_10(VAR_7)) {
  VAR_20 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_18, VAR_19,
         VAR_14, VAR_15,
         VAR_16, VAR_17);
 } else if (FUNC_11(VAR_7)) {
  VAR_20 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_18, VAR_19,
        VAR_15, VAR_16, VAR_17);
 } else {

  FUNC_8(VAR_6, VAR_4);
  VAR_20 = -VAR_0;
 }

 if (VAR_20) {
out_err:
  FUNC_7(VAR_18);
  FUNC_6(VAR_19);
 } else {
  FUNC_5("Send", VAR_18->data, VAR_18->data_size);

  FUNC_15(VAR_6, VAR_6->handlers, VAR_18, VAR_13);
 }
 FUNC_14();

out:
 return VAR_20;
}
