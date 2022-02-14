
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct t4_cqe {int dummy; } ;
struct t4_cq {scalar_t__ cidx; int size; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct t4_cqe*,int,char*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1, struct t4_cq *VAR_2,
         struct t4_cqe *VAR_3)
{
 u16 VAR_4;

 VAR_4 = (VAR_2->cidx > 0) ? VAR_2->cidx - 1 : VAR_2->size - 1;
 if (FUNC_0(VAR_1, VAR_3, VAR_4, "hwcq_idx"))
  goto err;
 VAR_4 = VAR_2->cidx;
 if (FUNC_0(VAR_1, VAR_3 + 1, VAR_4, "hwcq_idx"))
  goto err;

 return 0;
err:
 return -VAR_0;
}
