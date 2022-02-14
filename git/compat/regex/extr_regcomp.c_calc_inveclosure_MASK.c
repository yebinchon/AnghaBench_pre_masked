
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int reg_errcode_t ;
struct TYPE_5__ {int nodes_len; scalar_t__ inveclosures; TYPE_1__* eclosures; } ;
typedef TYPE_2__ re_dfa_t ;
struct TYPE_4__ {int* elems; int nelem; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static reg_errcode_t
FUNC_3 (re_dfa_t *VAR_2)
{
  int VAR_3, VAR_4, VAR_5;
  for (VAR_4 = 0; VAR_4 < VAR_2->nodes_len; ++VAR_4)
    FUNC_1 (VAR_2->inveclosures + VAR_4);

  for (VAR_3 = 0; VAR_3 < VAR_2->nodes_len; ++VAR_3)
    {
      int *VAR_6 = VAR_2->eclosures[VAR_3].elems;
      for (VAR_4 = 0; VAR_4 < VAR_2->eclosures[VAR_3].nelem; ++VAR_4)
 {
   VAR_5 = FUNC_2 (VAR_2->inveclosures + VAR_6[VAR_4], VAR_3);
   if (FUNC_0 (VAR_5 == -1, 0))
     return VAR_0;
 }
    }

  return VAR_1;
}
