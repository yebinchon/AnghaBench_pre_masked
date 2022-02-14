
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct keep_mc_header {int num; int list_id; } ;
struct connection {TYPE_1__* Tmp; } ;
struct TYPE_3__ {scalar_t__ start; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_0 ;

int FUNC_3 (struct connection *VAR_1, int VAR_2) {
  if (!VAR_1->Tmp) {
    return -1;
  }
  struct keep_mc_header *VAR_3 = (struct keep_mc_header *) VAR_1->Tmp->start;
  FUNC_0 (VAR_1->Tmp, sizeof (struct keep_mc_header));
  int VAR_4 = VAR_3->num;
  FUNC_1 (FUNC_2 (VAR_1->Tmp, VAR_0, VAR_4 * 4) == 4 * VAR_4);
  if (VAR_3->list_id != VAR_2) {
    return -1;
  }
  return VAR_4;
}
