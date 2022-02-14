
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct t4_swsqe {int dummy; } ;
struct t4_sq {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct t4_sq*,int ,struct t4_swsqe*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1, struct t4_sq *VAR_2,
         u16 VAR_3, struct t4_swsqe *VAR_4,
         u16 VAR_5, struct t4_swsqe *VAR_6)
{
 if (!VAR_4)
  goto out;
 if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4))
  goto err;
 if (!VAR_6)
  goto out;
 if (FUNC_0(VAR_1, VAR_2, VAR_5, VAR_6))
  goto err;
out:
 return 0;
err:
 return -VAR_0;
}
