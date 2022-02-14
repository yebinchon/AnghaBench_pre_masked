
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int copied_seq; int rcv_wup; int rcv_wnd; } ;
struct sock {int dummy; } ;
struct chtls_sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 struct chtls_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct chtls_sock*,int) ;
 int FUNC_3 (struct sock*,int ) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1, int VAR_2)
{
 struct chtls_sock *VAR_3 = FUNC_1(VAR_1);
 struct tcp_sock *VAR_4;
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 VAR_7 = 15 * 1024;

 if (!FUNC_3(VAR_1, VAR_0))
  return;

 FUNC_0(VAR_1);
 VAR_4 = FUNC_4(VAR_1);
 VAR_6 = VAR_4->copied_seq - VAR_4->rcv_wup;
 if (FUNC_5(!VAR_6))
  return;





 VAR_5 = VAR_6 + 16384 >= VAR_4->rcv_wnd;

 if (VAR_5 || VAR_6 >= VAR_7)
  VAR_4->rcv_wup += FUNC_2(VAR_3, VAR_6);
}
