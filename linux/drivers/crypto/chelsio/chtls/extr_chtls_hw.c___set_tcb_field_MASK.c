
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct ulptx_idata {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cpl_set_tcb_field {int dummy; } ;
struct chtls_sock {int port_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct chtls_sock*,struct cpl_set_tcb_field*,int ,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int) ;
 struct chtls_sock* FUNC_2 (struct sock*) ;
 unsigned int FUNC_3 (int,int) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1, struct sk_buff *VAR_2, u16 VAR_3,
       u64 VAR_4, u64 VAR_5, u8 VAR_6, int VAR_7)
{
 struct cpl_set_tcb_field *VAR_8;
 struct chtls_sock *VAR_9;
 struct ulptx_idata *VAR_10;
 unsigned int VAR_11;

 VAR_11 = FUNC_3(sizeof(*VAR_8) + sizeof(*VAR_10), 16);
 VAR_9 = FUNC_2(VAR_1);

 VAR_8 = (struct cpl_set_tcb_field *)FUNC_1(VAR_2, VAR_11);
 FUNC_0(VAR_9, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_4(VAR_2, VAR_0, VAR_9->port_id);
}
