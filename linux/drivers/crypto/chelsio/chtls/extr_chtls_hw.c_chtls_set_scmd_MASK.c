
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seqno_numivs; int ivgen_hdrlen; } ;
struct chtls_hws {TYPE_1__ scmd; } ;
struct chtls_sock {struct chtls_hws tlshws; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct chtls_sock *VAR_0)
{
 struct chtls_hws *VAR_1 = &VAR_0->tlshws;

 VAR_1->scmd.seqno_numivs =
  FUNC_10(3) |
  FUNC_9(0) |
  FUNC_3(0) |
  FUNC_1(1) |
  FUNC_2(2) |
  FUNC_0(4) |
  FUNC_4(0) |
  FUNC_6(4) |
  FUNC_8(1);

 VAR_1->scmd.ivgen_hdrlen =
  FUNC_5(1) |
  FUNC_7(0) |
  FUNC_11(1);
}
