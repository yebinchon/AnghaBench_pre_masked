
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** kids; int op; } ;
struct dag {struct dag* hlink; TYPE_2__ node; } ;
struct TYPE_3__ {scalar_t__* syms; int op; } ;
typedef scalar_t__ Symbol ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dag**) ;
 struct dag** VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(Symbol VAR_3) {
 int VAR_4;
 struct dag **VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  for (VAR_5 = &VAR_1[VAR_4]; *VAR_5; )
   if (FUNC_1((*VAR_5)->node.op) == VAR_0 &&
       (!FUNC_2((*VAR_5)->node.kids[0]->op)
        || (*VAR_5)->node.kids[0]->syms[0] == VAR_3)) {
    *VAR_5 = (*VAR_5)->hlink;
    --VAR_2;
   } else
    VAR_5 = &(*VAR_5)->hlink;
}
