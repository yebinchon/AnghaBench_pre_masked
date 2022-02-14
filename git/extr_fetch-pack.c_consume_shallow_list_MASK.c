
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_reader {scalar_t__ status; int line; } ;
struct fetch_pack_args {scalar_t__ deepen; scalar_t__ stateless_rpc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct packet_reader*) ;
 scalar_t__ FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct fetch_pack_args *VAR_2,
     struct packet_reader *VAR_3)
{
 if (VAR_2->stateless_rpc && VAR_2->deepen) {




  while (FUNC_2(VAR_3) == VAR_1) {
   if (FUNC_3(VAR_3->line, "shallow "))
    continue;
   if (FUNC_3(VAR_3->line, "unshallow "))
    continue;
   FUNC_1(FUNC_0("git fetch-pack: expected shallow list"));
  }
  if (VAR_3->status != VAR_0)
   FUNC_1(FUNC_0("git fetch-pack: expected a flush packet after shallow list"));
 }
}
