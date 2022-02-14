
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* extended_id; int hash_context; } ;
typedef TYPE_1__ mm_context_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(mm_context_t *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->extended_id); VAR_2++) {
  VAR_3 = VAR_1->extended_id[VAR_2];
  if (VAR_3)
   FUNC_1(&VAR_0, VAR_3);
 }
 FUNC_2(VAR_1->hash_context);
}
