
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct chtls_hws {int mfs; int compute; int expansion; int fcplenmax; unsigned short pdus; int adjustlen; int tx_seq_no; } ;
struct chtls_sock {struct chtls_hws tlshws; } ;


 int FUNC_0 (int,int) ;
 void* FUNC_1 (struct sock*,int,int,unsigned short*) ;
 struct chtls_sock* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int,int,int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0, struct sk_buff *VAR_1,
          int VAR_2, int VAR_3, u32 VAR_4)
{
 unsigned short VAR_5 = 0;
 struct chtls_sock *VAR_6;
 struct chtls_hws *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_2(VAR_0);
 VAR_7 = &VAR_6->tlshws;
 VAR_9 = FUNC_0(VAR_3, VAR_7->mfs);
 VAR_8 = FUNC_1(VAR_0, VAR_3, 0, ((void*)0));
 if (!VAR_7->compute) {
  VAR_7->expansion = FUNC_1(VAR_0,
            VAR_7->fcplenmax,
            1, &VAR_5);
  VAR_7->pdus = VAR_5;
  VAR_7->adjustlen = VAR_7->pdus *
   ((VAR_7->expansion / VAR_7->pdus) + VAR_7->mfs);
  VAR_7->compute = 1;
 }
 if (FUNC_3(VAR_0, VAR_1))
  return;
 FUNC_4(VAR_0, VAR_1);
 FUNC_5(VAR_0, VAR_1, VAR_3, VAR_2, VAR_4, VAR_8, VAR_9);
 VAR_7->tx_seq_no += (VAR_9 - 1);
}
