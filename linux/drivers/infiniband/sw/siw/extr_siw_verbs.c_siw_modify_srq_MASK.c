
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siw_srq {scalar_t__ num_rqe; int armed; scalar_t__ limit; int lock; } ;
struct ib_udata {int dummy; } ;
struct ib_srq_attr {scalar_t__ srq_limit; } ;
struct ib_srq {int dummy; } ;
typedef enum ib_srq_attr_mask { ____Placeholder_ib_srq_attr_mask } ib_srq_attr_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct siw_srq* FUNC_2 (struct ib_srq*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct ib_srq *VAR_4, struct ib_srq_attr *VAR_5,
     enum ib_srq_attr_mask VAR_6, struct ib_udata *VAR_7)
{
 struct siw_srq *VAR_8 = FUNC_2(VAR_4);
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_0(&VAR_8->lock, VAR_9);

 if (VAR_6 & VAR_3) {

  VAR_10 = -VAR_1;
  goto out;
 }
 if (VAR_6 & VAR_2) {
  if (VAR_5->srq_limit) {
   if (FUNC_3(VAR_5->srq_limit > VAR_8->num_rqe)) {
    VAR_10 = -VAR_0;
    goto out;
   }
   VAR_8->armed = 1;
  } else {
   VAR_8->armed = 0;
  }
  VAR_8->limit = VAR_5->srq_limit;
 }
out:
 FUNC_1(&VAR_8->lock, VAR_9);

 return VAR_10;
}
