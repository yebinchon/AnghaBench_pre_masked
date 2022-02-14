
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct TYPE_14__ {unsigned long qid; int flags; } ;
struct TYPE_11__ {int qid; } ;
struct TYPE_13__ {TYPE_7__ sq; TYPE_4__ rq; } ;
struct TYPE_12__ {scalar_t__ state; } ;
struct c4iw_qp {TYPE_6__ wq; TYPE_5__ attr; TYPE_2__* srq; struct c4iw_ep* ep; } ;
struct TYPE_8__ {scalar_t__ ss_family; } ;
struct TYPE_10__ {scalar_t__ state; TYPE_1__ local_addr; } ;
struct c4iw_ep {int hwtid; TYPE_3__ com; } ;
struct c4iw_debugfs_data {int bufsize; int pos; int buf; } ;
struct TYPE_9__ {int idx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct c4iw_ep*,struct sockaddr_in6**,struct sockaddr_in6**,struct sockaddr_in6**,struct sockaddr_in6**) ;
 int FUNC_2 (struct c4iw_ep*,struct sockaddr_in**,struct sockaddr_in**,struct sockaddr_in**,struct sockaddr_in**) ;
 int FUNC_3 (int,int,char*,int,...) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_2, struct c4iw_qp *VAR_3,
     struct c4iw_debugfs_data *VAR_4)
{
 int VAR_5;
 int VAR_6;
 if (VAR_2 != VAR_3->wq.sq.qid)
  return 0;

 VAR_5 = VAR_4->bufsize - VAR_4->pos - 1;
 if (VAR_5 == 0)
  return 1;

 if (VAR_3->ep) {
  struct c4iw_ep *VAR_7 = VAR_3->ep;

  if (VAR_7->com.local_addr.ss_family == VAR_0) {
   struct sockaddr_in *VAR_8;
   struct sockaddr_in *VAR_9;
   struct sockaddr_in *VAR_10;
   struct sockaddr_in *VAR_11;

   FUNC_2(VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11);
   VAR_6 = FUNC_3(VAR_4->buf + VAR_4->pos, VAR_5,
          "rc qp sq id %u %s id %u state %u "
          "onchip %u ep tid %u state %u "
          "%pI4:%u/%u->%pI4:%u/%u\n",
          VAR_3->wq.sq.qid, VAR_3->srq ? "srq" : "rq",
          VAR_3->srq ? VAR_3->srq->idx : VAR_3->wq.rq.qid,
          (int)VAR_3->attr.state,
          VAR_3->wq.sq.flags & VAR_1,
          VAR_7->hwtid, (int)VAR_7->com.state,
          &VAR_8->sin_addr, FUNC_0(VAR_8->sin_port),
          FUNC_0(VAR_10->sin_port),
          &VAR_9->sin_addr, FUNC_0(VAR_9->sin_port),
          FUNC_0(VAR_11->sin_port));
  } else {
   struct sockaddr_in6 *VAR_12;
   struct sockaddr_in6 *VAR_13;
   struct sockaddr_in6 *VAR_14;
   struct sockaddr_in6 *VAR_15;

   FUNC_1(VAR_7, &VAR_12, &VAR_13, &VAR_14,
       &VAR_15);
   VAR_6 = FUNC_3(VAR_4->buf + VAR_4->pos, VAR_5,
          "rc qp sq id %u rq id %u state %u "
          "onchip %u ep tid %u state %u "
          "%pI6:%u/%u->%pI6:%u/%u\n",
          VAR_3->wq.sq.qid, VAR_3->wq.rq.qid,
          (int)VAR_3->attr.state,
          VAR_3->wq.sq.flags & VAR_1,
          VAR_7->hwtid, (int)VAR_7->com.state,
          &VAR_12->sin6_addr,
          FUNC_0(VAR_12->sin6_port),
          FUNC_0(VAR_14->sin6_port),
          &VAR_13->sin6_addr,
          FUNC_0(VAR_13->sin6_port),
          FUNC_0(VAR_15->sin6_port));
  }
 } else
  VAR_6 = FUNC_3(VAR_4->buf + VAR_4->pos, VAR_5,
        "qp sq id %u rq id %u state %u onchip %u\n",
         VAR_3->wq.sq.qid, VAR_3->wq.rq.qid,
         (int)VAR_3->attr.state,
         VAR_3->wq.sq.flags & VAR_1);
 if (VAR_6 < VAR_5)
  VAR_4->pos += VAR_6;
 return 0;
}
