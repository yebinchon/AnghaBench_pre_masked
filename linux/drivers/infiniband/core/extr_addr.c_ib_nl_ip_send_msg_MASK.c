
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct rdma_ls_ip_resolve_header {int ifindex; } ;
struct rdma_dev_addr {int bound_dev_if; } ;
struct nlmsghdr {int dummy; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int size ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (struct sk_buff*,struct nlmsghdr**,int ,int ,int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_2 (struct sk_buff*,int,size_t,void const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,struct sk_buff*,int ,int ) ;
 struct rdma_ls_ip_resolve_header* FUNC_8 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct rdma_dev_addr *VAR_12,
        const void *VAR_13,
        u32 VAR_14, u16 VAR_15)
{
 struct sk_buff *VAR_16 = ((void*)0);
 struct nlmsghdr *VAR_17;
 struct rdma_ls_ip_resolve_header *VAR_18;
 void *VAR_19;
 size_t VAR_20;
 int VAR_21;
 int VAR_22;

 if (VAR_15 == VAR_0) {
  VAR_20 = sizeof(struct in_addr);
  VAR_21 = VAR_7 | VAR_4;
 } else {
  VAR_20 = sizeof(struct in6_addr);
  VAR_21 = VAR_7 | VAR_5;
 }

 VAR_22 = FUNC_3(sizeof(VAR_20));
 VAR_22 += FUNC_0(sizeof(*VAR_18));

 VAR_16 = FUNC_6(VAR_22, VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_19 = FUNC_1(VAR_16, &VAR_17, VAR_14, 0, VAR_9,
       VAR_10, VAR_6);
 if (!VAR_19) {
  FUNC_5(VAR_16);
  return -VAR_1;
 }


 VAR_18 = FUNC_8(VAR_16, FUNC_0(sizeof(*VAR_18)));
 VAR_18->ifindex = VAR_12->bound_dev_if;
 FUNC_2(VAR_16, VAR_21, VAR_20, VAR_13);


 FUNC_4(VAR_16, VAR_17);
 FUNC_7(&VAR_11, VAR_16, VAR_8, VAR_3);




 return -VAR_1;
}
