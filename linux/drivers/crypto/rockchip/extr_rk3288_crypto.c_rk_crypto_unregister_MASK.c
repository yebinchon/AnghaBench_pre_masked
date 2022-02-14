
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hash; int crypto; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ alg; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__** VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  if (VAR_1[VAR_2]->type == VAR_0)
   FUNC_2(&VAR_1[VAR_2]->alg.crypto);
  else
   FUNC_1(&VAR_1[VAR_2]->alg.hash);
 }
}
