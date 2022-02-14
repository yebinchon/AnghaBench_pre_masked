
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* extended_id; int id; } ;
typedef TYPE_1__ mm_context_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(mm_context_t *VAR_1)
{
 int VAR_2, VAR_3;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->extended_id); VAR_2++) {
  if (VAR_2 == 0 || VAR_1->extended_id[VAR_2]) {
   VAR_3 = FUNC_1();
   if (VAR_3 < 0)
    goto error;

   VAR_1->extended_id[VAR_2] = VAR_3;
  }
 }


 return VAR_1->id;

error:
 for (VAR_2--; VAR_2 >= 0; VAR_2--) {
  if (VAR_1->extended_id[VAR_2])
   FUNC_2(&VAR_0, VAR_1->extended_id[VAR_2]);
 }

 return VAR_3;
}
