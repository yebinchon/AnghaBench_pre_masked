
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_cq {int flags; int bits_type_ts; int error; int gen; int vector; int sw_in_use; int sw_pidx; int sw_cidx; int cidx_inc; int cidx; int size; int memsize; int cqid; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,char*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct t4_cq *VAR_2)
{
 if (FUNC_1(VAR_1, "cqid", VAR_2->cqid))
  goto err;
 if (FUNC_1(VAR_1, "memsize", VAR_2->memsize))
  goto err;
 if (FUNC_1(VAR_1, "size", VAR_2->size))
  goto err;
 if (FUNC_1(VAR_1, "cidx", VAR_2->cidx))
  goto err;
 if (FUNC_1(VAR_1, "cidx_inc", VAR_2->cidx_inc))
  goto err;
 if (FUNC_1(VAR_1, "sw_cidx", VAR_2->sw_cidx))
  goto err;
 if (FUNC_1(VAR_1, "sw_pidx", VAR_2->sw_pidx))
  goto err;
 if (FUNC_1(VAR_1, "sw_in_use", VAR_2->sw_in_use))
  goto err;
 if (FUNC_1(VAR_1, "vector", VAR_2->vector))
  goto err;
 if (FUNC_1(VAR_1, "gen", VAR_2->gen))
  goto err;
 if (FUNC_1(VAR_1, "error", VAR_2->error))
  goto err;
 if (FUNC_2(VAR_1, "bits_type_ts",
      FUNC_0(VAR_2->bits_type_ts)))
  goto err;
 if (FUNC_2(VAR_1, "flags", VAR_2->flags))
  goto err;

 return 0;

err:
 return -VAR_0;
}
