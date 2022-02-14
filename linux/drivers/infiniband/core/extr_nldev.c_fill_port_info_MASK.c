
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int name; int ifindex; } ;
struct net {int dummy; } ;
struct ib_port_attr {int port_cap_flags; int subnet_prefix; int phys_state; int state; int lmc; int sm_lid; int lid; scalar_t__ port_cap_flags2; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct ib_device*) ;
 struct net_device* FUNC_4 (struct ib_device*,int ) ;
 int FUNC_5 (struct ib_device*,int ,struct ib_port_attr*) ;
 scalar_t__ FUNC_6 (int ,struct net const*) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_11 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_12,
     struct ib_device *VAR_13, u32 VAR_14,
     const struct net *VAR_15)
{
 struct net_device *VAR_16 = ((void*)0);
 struct ib_port_attr VAR_17;
 int VAR_18;
 u64 VAR_19 = 0;

 if (FUNC_3(VAR_12, VAR_13))
  return -VAR_0;

 if (FUNC_8(VAR_12, VAR_7, VAR_14))
  return -VAR_0;

 VAR_18 = FUNC_5(VAR_13, VAR_14, &VAR_17);
 if (VAR_18)
  return VAR_18;

 if (FUNC_11(VAR_13, VAR_14)) {
  FUNC_0((sizeof(VAR_17.port_cap_flags) +
    sizeof(VAR_17.port_cap_flags2)) > sizeof(u64));
  VAR_19 = VAR_17.port_cap_flags |
   ((u64)VAR_17.port_cap_flags2 << 32);
  if (FUNC_9(VAR_12, VAR_1,
          VAR_19, VAR_6))
   return -VAR_0;
  if (FUNC_9(VAR_12, VAR_11,
          VAR_17.subnet_prefix, VAR_6))
   return -VAR_0;
  if (FUNC_8(VAR_12, VAR_2, VAR_17.lid))
   return -VAR_0;
  if (FUNC_8(VAR_12, VAR_10, VAR_17.sm_lid))
   return -VAR_0;
  if (FUNC_10(VAR_12, VAR_3, VAR_17.lmc))
   return -VAR_0;
 }
 if (FUNC_10(VAR_12, VAR_9, VAR_17.state))
  return -VAR_0;
 if (FUNC_10(VAR_12, VAR_8, VAR_17.phys_state))
  return -VAR_0;

 VAR_16 = FUNC_4(VAR_13, VAR_14);
 if (VAR_16 && FUNC_6(FUNC_1(VAR_16), VAR_15)) {
  VAR_18 = FUNC_8(VAR_12,
      VAR_4, VAR_16->ifindex);
  if (VAR_18)
   goto out;
  VAR_18 = FUNC_7(VAR_12,
         VAR_5, VAR_16->name);
 }

out:
 if (VAR_16)
  FUNC_2(VAR_16);
 return VAR_18;
}
