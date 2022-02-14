
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct ib_sa_query {int seq; TYPE_1__* mad_buf; } ;
struct TYPE_4__ {int comp_mask; } ;
struct ib_sa_mad {TYPE_2__ sa_hdr; } ;
typedef int gfp_t ;
struct TYPE_3__ {struct ib_sa_mad* mad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct ib_sa_query*) ;
 void* FUNC_2 (struct sk_buff*,struct nlmsghdr**,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ib_sa_query *VAR_7, gfp_t VAR_8)
{
 struct sk_buff *VAR_9 = ((void*)0);
 struct nlmsghdr *VAR_10;
 void *VAR_11;
 struct ib_sa_mad *VAR_12;
 int VAR_13;

 VAR_12 = VAR_7->mad_buf->mad;
 VAR_13 = FUNC_0(VAR_12->sa_hdr.comp_mask);
 if (VAR_13 <= 0)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_13, VAR_8);
 if (!VAR_9)
  return -VAR_1;


 VAR_11 = FUNC_2(VAR_9, &VAR_10, VAR_7->seq, 0, VAR_4,
       VAR_5, VAR_2);
 if (!VAR_11) {
  FUNC_4(VAR_9);
  return -VAR_0;
 }


 FUNC_1(VAR_9, VAR_7);


 FUNC_3(VAR_9, VAR_10);

 return FUNC_6(&VAR_6, VAR_9, VAR_3, VAR_8);
}
