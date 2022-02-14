
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ peeked; } ;
struct fw_ofld_tx_data_wr {int dummy; } ;
struct chtls_sock {scalar_t__ ulp_mode; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (struct chtls_sock*,struct sk_buff const*,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_4(struct chtls_sock *VAR_4, const struct sk_buff *VAR_5)
{
 int VAR_6 = VAR_5->len;

 if (VAR_5->peeked || VAR_5->len > VAR_1)
  return 0;

 if (FUNC_2(FUNC_0(VAR_5)->flags & VAR_2)) {

  if (VAR_4->ulp_mode == VAR_3 &&
      FUNC_3(VAR_5))
   VAR_6 += FUNC_1(VAR_4, VAR_5, 1);
  else
   VAR_6 += sizeof(struct fw_ofld_tx_data_wr);

  return VAR_6 <= VAR_0;
 }
 return 1;
}
