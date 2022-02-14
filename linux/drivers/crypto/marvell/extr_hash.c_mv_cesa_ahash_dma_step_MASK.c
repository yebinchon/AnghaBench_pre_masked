
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* first; } ;
struct mv_cesa_req {struct mv_cesa_engine* engine; TYPE_2__ chain; } ;
struct mv_cesa_engine {scalar_t__ regs; } ;
struct mv_cesa_ahash_req {int * state; struct mv_cesa_req base; } ;
struct ahash_request {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 struct mv_cesa_ahash_req* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct mv_cesa_req*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ahash_request *VAR_1)
{
 struct mv_cesa_ahash_req *VAR_2 = FUNC_2(VAR_1);
 struct mv_cesa_req *VAR_3 = &VAR_2->base;


 if (VAR_3->chain.first->flags & VAR_0) {
  struct mv_cesa_engine *VAR_4 = VAR_3->engine;
  int VAR_5;


  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->state); VAR_5++)
   FUNC_4(VAR_2->state[VAR_5], VAR_4->regs +
           FUNC_1(VAR_5));
 }

 FUNC_3(VAR_3);
}
