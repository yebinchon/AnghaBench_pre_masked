
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int wrid_low; int wrid_hi; } ;
struct TYPE_4__ {TYPE_1__ gen; } ;
struct t4_cqe {int bits_type_ts; TYPE_2__ u; int len; int header; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,char const*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,char*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, struct t4_cqe *VAR_2, u16 VAR_3,
      const char *VAR_4)
{
 if (FUNC_2(VAR_1, VAR_4, VAR_3))
  goto err;
 if (FUNC_3(VAR_1, "header",
      FUNC_0(VAR_2->header)))
  goto err;
 if (FUNC_2(VAR_1, "len", FUNC_0(VAR_2->len)))
  goto err;
 if (FUNC_3(VAR_1, "wrid_hi",
      FUNC_0(VAR_2->u.gen.wrid_hi)))
  goto err;
 if (FUNC_3(VAR_1, "wrid_low",
      FUNC_0(VAR_2->u.gen.wrid_low)))
  goto err;
 if (FUNC_4(VAR_1, "bits_type_ts",
      FUNC_1(VAR_2->bits_type_ts)))
  goto err;

 return 0;

err:
 return -VAR_0;
}
