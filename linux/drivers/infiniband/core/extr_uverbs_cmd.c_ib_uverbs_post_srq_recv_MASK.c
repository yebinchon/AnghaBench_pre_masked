
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uverbs_req_iter {int dummy; } ;
struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_post_srq_recv_resp {int bad_wr; } ;
struct ib_uverbs_post_srq_recv {int srq_handle; int sge_count; int wqe_size; int wr_count; } ;
struct ib_srq {TYPE_2__* device; } ;
typedef struct ib_recv_wr {struct ib_recv_wr const* next; } const ib_recv_wr ;
typedef int resp ;
typedef int cmd ;
struct TYPE_3__ {int (* post_srq_recv ) (struct ib_srq*,struct ib_recv_wr const*,struct ib_recv_wr const**) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_recv_wr const*) ;
 int FUNC_1 (struct ib_recv_wr const*) ;
 int VAR_1 ;
 struct ib_recv_wr const* FUNC_2 (struct uverbs_req_iter*,int ,int ,int ) ;
 int FUNC_3 (struct ib_recv_wr const*) ;
 int FUNC_4 (struct ib_srq*,struct ib_recv_wr const*,struct ib_recv_wr const**) ;
 struct ib_srq* FUNC_5 (struct ib_srq*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_6 (struct ib_srq*) ;
 int FUNC_7 (struct uverbs_attr_bundle*,struct uverbs_req_iter*,struct ib_uverbs_post_srq_recv*,int) ;
 int FUNC_8 (struct uverbs_attr_bundle*,struct ib_uverbs_post_srq_recv_resp*,int) ;

__attribute__((used)) static int FUNC_9(struct uverbs_attr_bundle *VAR_2)
{
 struct ib_uverbs_post_srq_recv VAR_3;
 struct ib_uverbs_post_srq_recv_resp VAR_4;
 struct ib_recv_wr *VAR_5, *VAR_6;
 const struct ib_recv_wr *VAR_7;
 struct ib_srq *VAR_8;
 int VAR_9, VAR_10;
 struct uverbs_req_iter VAR_11;

 VAR_9 = FUNC_7(VAR_2, &VAR_11, &VAR_3, sizeof(VAR_3));
 if (VAR_9)
  return VAR_9;

 VAR_5 = FUNC_2(&VAR_11, VAR_3.wr_count, VAR_3.wqe_size,
           VAR_3.sge_count);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_8 = FUNC_5(VAR_8, VAR_1, VAR_3.srq_handle, VAR_2);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_4.bad_wr = 0;
 VAR_9 = VAR_8->device->ops.post_srq_recv(VAR_8, VAR_5, &VAR_7);

 FUNC_6(VAR_8);

 if (VAR_9)
  for (VAR_6 = VAR_5; VAR_6; VAR_6 = VAR_6->next) {
   ++VAR_4.bad_wr;
   if (VAR_6 == VAR_7)
    break;
  }

 VAR_10 = FUNC_8(VAR_2, &VAR_4, sizeof(VAR_4));
 if (VAR_10)
  VAR_9 = VAR_10;

out:
 while (VAR_5) {
  VAR_6 = VAR_5->next;
  FUNC_3(VAR_5);
  VAR_5 = VAR_6;
 }

 return VAR_9;
}
