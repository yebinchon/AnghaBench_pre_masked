
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct fetch_pack_args {scalar_t__ stateless_rpc; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct fetch_pack_args *VAR_1,
    int VAR_2, struct strbuf *VAR_3)
{
 if (VAR_1->stateless_rpc) {
  FUNC_3(VAR_2, -1, VAR_3->buf, VAR_3->len, VAR_0);
  FUNC_2(VAR_2);
 } else {
  if (FUNC_4(VAR_2, VAR_3->buf, VAR_3->len) < 0)
   FUNC_1(FUNC_0("unable to write to remote"));
 }
}
