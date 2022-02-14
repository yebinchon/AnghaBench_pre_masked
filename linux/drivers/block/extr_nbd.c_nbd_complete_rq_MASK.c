
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nbd_cmd {scalar_t__ status; int nbd; } ;


 int FUNC_0 (struct request*,scalar_t__) ;
 struct nbd_cmd* FUNC_1 (struct request*) ;
 int FUNC_2 (int ,char*,struct request*,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct request *VAR_0)
{
 struct nbd_cmd *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(FUNC_3(VAR_1->nbd), "request %p: %s\n", VAR_0,
  VAR_1->status ? "failed" : "done");

 FUNC_0(VAR_0, VAR_1->status);
}
