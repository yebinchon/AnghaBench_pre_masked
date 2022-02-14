
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nl_msg {int dummy; } ;
struct TYPE_7__ {unsigned long s_addr; } ;
struct TYPE_8__ {TYPE_3__ in; } ;
struct TYPE_5__ {unsigned long s_addr; } ;
struct TYPE_6__ {TYPE_1__ in; } ;
struct fast_classifier_tuple {unsigned char proto; unsigned short sport; unsigned short dport; char* smac; float* dmac; TYPE_4__ dst_saddr; TYPE_2__ src_saddr; } ;
typedef int fc_msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct nl_msg*,int ,int ,int ,int ,int ,int ,int ) ;
 char* FUNC_3 (int ,unsigned long*,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct nl_msg*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct nl_msg*,int,int,struct fast_classifier_tuple*) ;
 struct nl_msg* FUNC_9 () ;
 int FUNC_10 (struct nl_msg*) ;
 int FUNC_11 (char*,...) ;
 int VAR_9 ;

void FUNC_12(unsigned char VAR_10, unsigned long VAR_11,
      unsigned long VAR_12, unsigned short VAR_13,
      unsigned short VAR_14)
{
 struct nl_msg *VAR_15;
 int VAR_16;




 struct fast_classifier_tuple VAR_17;
 VAR_17.proto = VAR_10;
 VAR_17.src_saddr.in.s_addr = VAR_11;
 VAR_17.dst_saddr.in.s_addr = VAR_12;
 VAR_17.sport = VAR_13;
 VAR_17.dport = VAR_14;
 VAR_17.smac[0] = 'a';
 VAR_17.smac[1] = 'b';
 VAR_17.smac[2] = 'c';
 VAR_17.smac[3] = 'd';
 VAR_17.smac[4] = 'e';
 VAR_17.smac[5] = 'f';
 VAR_17.dmac[0] = 'f';
 VAR_17.dmac[1] = 'e';
 VAR_17.dmac[2] = 'd';
 VAR_17.dmac[3] = 'c';
 VAR_17.dmac[4] = 'b';
 VAR_17.dmac[5] = 'a';

 if (FUNC_1() < 0) {
  FUNC_11("Unable to init generic netlink\n");
  FUNC_0(1);
 }

 VAR_15 = FUNC_9();
 if (!VAR_15) {
  FUNC_6(VAR_9);
  FUNC_11("Unable to allocate message\n");
  return;
 }

 FUNC_2(VAR_15, VAR_6, VAR_7, VAR_8,
      VAR_2, VAR_5,
      VAR_1, VAR_3);
 FUNC_8(VAR_15, 1, sizeof(VAR_17), &VAR_17);

 VAR_16 = FUNC_5(VAR_9, VAR_15);

 FUNC_10(VAR_15);
 if (VAR_16 < 0) {
  FUNC_11("nlmsg_free failed");
  FUNC_4(VAR_9);
  FUNC_6(VAR_9);
  return;
 }

 VAR_16 = FUNC_7(VAR_9);
 if (VAR_16 < 0) {
  FUNC_11("wait for ack failed");
  FUNC_4(VAR_9);
  FUNC_6(VAR_9);
  return;
 }
}
