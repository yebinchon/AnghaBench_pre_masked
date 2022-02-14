
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_msg {int dummy; } ;
struct nl_classifier_tuple {int af; unsigned char proto; unsigned short sport; unsigned short dport; int dst_ip; int src_ip; } ;
struct nl_classifier_instance {int sock; int family_id; } ;
typedef int classifier_msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nl_msg*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long*,int) ;
 int FUNC_2 (struct nl_classifier_tuple*,int ,int) ;
 int FUNC_3 (int ,struct nl_msg*) ;
 int FUNC_4 (struct nl_msg*,int ,int,struct nl_classifier_tuple*) ;
 struct nl_msg* FUNC_5 () ;
 int FUNC_6 (struct nl_msg*) ;
 int FUNC_7 (char*) ;

void FUNC_8(struct nl_classifier_instance *VAR_8,
      unsigned char VAR_9, unsigned long *VAR_10,
      unsigned long *VAR_11, unsigned short VAR_12,
      unsigned short VAR_13, int VAR_14)
{
 struct nl_msg *VAR_15;
 int VAR_16;
 struct nl_classifier_tuple VAR_17;

 FUNC_2(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.af = VAR_14;
 VAR_17.proto = VAR_9;
 FUNC_1(&VAR_17.src_ip, VAR_10, (VAR_14 == VAR_0 ? 4 : 16));
 FUNC_1(&VAR_17.dst_ip, VAR_11, (VAR_14 == VAR_0 ? 4 : 16));
 VAR_17.sport = VAR_12;
 VAR_17.dport = VAR_13;

 VAR_15 = FUNC_5();
 if (!VAR_15) {
  FUNC_7("Unable to allocate message\n");
  return;
 }

 FUNC_0(VAR_15, VAR_2, VAR_3, VAR_8->family_id,
      VAR_6, VAR_1,
      VAR_5, VAR_7);
 FUNC_4(VAR_15, VAR_4, sizeof(VAR_17), &VAR_17);

 VAR_16 = FUNC_3(VAR_8->sock, VAR_15);
 if (VAR_16 < 0) {
  FUNC_7("send netlink message failed.\n");
  FUNC_6(VAR_15);
  return;
 }

 FUNC_6(VAR_15);
 FUNC_7("nl classifier offload connection successful\n");
}
