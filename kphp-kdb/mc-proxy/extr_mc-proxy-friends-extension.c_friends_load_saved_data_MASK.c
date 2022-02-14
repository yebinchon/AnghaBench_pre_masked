
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keep_mc_store {scalar_t__ magic; int num; scalar_t__ list_id; } ;
struct connection {TYPE_1__* Tmp; } ;
typedef int nb_iterator_t ;
struct TYPE_2__ {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4 (struct connection *VAR_4) {
  struct keep_mc_store *VAR_5 = 0;
  if (VAR_4->Tmp) {
    VAR_5 = (struct keep_mc_store *) VAR_4->Tmp->start;
    FUNC_0 (VAR_5->magic == VAR_0);
    VAR_2 = VAR_5->num;
  } else {
    VAR_2 = 0;
    VAR_1 = 0;
    return;
  }
  nb_iterator_t VAR_6;
  FUNC_3 (&VAR_6, VAR_4->Tmp);
  FUNC_0 (FUNC_1 (&VAR_6, sizeof (struct keep_mc_store)) == sizeof (struct keep_mc_store));
  FUNC_0 (FUNC_2 (&VAR_6, VAR_3, 4 * VAR_5->num) == 4 * VAR_5->num);
  VAR_1 = VAR_5->list_id;

}
