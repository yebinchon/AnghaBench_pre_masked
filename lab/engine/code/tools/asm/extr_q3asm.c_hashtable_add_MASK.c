
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buckets; TYPE_2__** table; } ;
typedef TYPE_1__ hashtable_t ;
struct TYPE_5__ {struct TYPE_5__* next; void* data; } ;
typedef TYPE_2__ hashchain_t ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2 (hashtable_t *VAR_0, int VAR_1, void *VAR_2)
{
  hashchain_t *VAR_3, **VAR_4;

  VAR_1 = (FUNC_0(VAR_1) % VAR_0->buckets);
  VAR_4 = &(VAR_0->table[VAR_1]);
  if (*VAR_4 == 0)
    {

      *VAR_4 = FUNC_1(1, sizeof(**VAR_4));
      VAR_3 = *VAR_4;
    }
  else
    {

      for (VAR_3 = *VAR_4; VAR_3 && VAR_3->next; VAR_3 = VAR_3->next);
      VAR_3->next = FUNC_1(1, sizeof(*VAR_3));
      VAR_3 = VAR_3->next;
    }
  VAR_3->data = VAR_2;
  VAR_3->next = 0;
}
