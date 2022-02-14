
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int regex_t ;
struct TYPE_9__ {int next_sub_idx; scalar_t__ look_in_sub; int next_parent_idx; int next_idx; } ;
struct TYPE_8__ {TYPE_1__* metrics; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_3__* head; } ;
struct TYPE_6__ {int data; } ;
typedef TYPE_2__ GSubList ;
typedef TYPE_3__ GSubItem ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int *,int ,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_1 (GSubList * VAR_1, regex_t * VAR_2)
{
  GSubItem *VAR_3;
  int VAR_4 = 0, VAR_5;

  if (VAR_1 == ((void*)0))
    goto out;

  for (VAR_3 = VAR_1->head; VAR_3; VAR_3 = VAR_3->next) {
    if (VAR_4 >= VAR_0.next_sub_idx) {
      VAR_5 = FUNC_0 (VAR_2, VAR_3->metrics->data, 0, ((void*)0), 0);
      if (VAR_5 == 0) {
        VAR_0.next_idx++;
        VAR_0.next_sub_idx = (1 + VAR_4);
        return 0;
      }
      VAR_0.next_idx++;
    }
    VAR_4++;
  }
out:
  VAR_0.next_parent_idx++;
  VAR_0.next_sub_idx = 0;
  VAR_0.look_in_sub = 0;

  return 1;
}
