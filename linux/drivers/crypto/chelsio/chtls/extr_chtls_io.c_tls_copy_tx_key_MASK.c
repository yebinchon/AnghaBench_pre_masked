
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ulptx_sc_memrd {void* addr; void* cmd_to_len; } ;
struct ulptx_idata {void* len; void* cmd_more; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct chtls_hws {int keylen; int txkey; } ;
struct chtls_sock {struct chtls_dev* cdev; struct chtls_hws tlshws; } ;
struct TYPE_2__ {int start; } ;
struct chtls_dev {TYPE_1__ kmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 struct chtls_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct ulptx_sc_memrd *VAR_4;
 struct chtls_sock *VAR_5;
 struct chtls_dev *VAR_6;
 struct ulptx_idata *VAR_7;
 struct chtls_hws *VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_5 = FUNC_6(VAR_2);
 VAR_8 = &VAR_5->tlshws;
 VAR_6 = VAR_5->cdev;

 VAR_9 = sizeof(*VAR_7) + sizeof(*VAR_4);
 VAR_10 = FUNC_5(VAR_6->kmap.start, VAR_8->txkey);
 VAR_7 = (struct ulptx_idata *)FUNC_3(VAR_3, VAR_9);
 if (VAR_7) {
  VAR_7->cmd_more = FUNC_4(FUNC_0(VAR_1));
  VAR_7->len = FUNC_4(0);
  VAR_4 = (struct ulptx_sc_memrd *)(VAR_7 + 1);
  VAR_4->cmd_to_len =
    FUNC_4(FUNC_0(VAR_0) |
    FUNC_2(1) |
    FUNC_1(VAR_8->keylen >> 4));
  VAR_4->addr = FUNC_4(VAR_10);
 }
}
