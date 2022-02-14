
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct t4_cqe {int dummy; } ;
struct t4_cq {int sw_in_use; int sw_cidx; scalar_t__ sw_pidx; int size; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct t4_cqe*,int,char*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1, struct t4_cq *VAR_2,
         struct t4_cqe *VAR_3)
{
 u16 VAR_4;

 if (!VAR_2->sw_in_use)
  return 0;

 VAR_4 = VAR_2->sw_cidx;
 if (FUNC_0(VAR_1, VAR_3, VAR_4, "swcq_idx"))
  goto err;
 if (VAR_2->sw_in_use == 1)
  goto out;
 VAR_4 = (VAR_2->sw_pidx > 0) ? VAR_2->sw_pidx - 1 : VAR_2->size - 1;
 if (FUNC_0(VAR_1, VAR_3 + 1, VAR_4, "swcq_idx"))
  goto err;
out:
 return 0;
err:
 return -VAR_0;
}
