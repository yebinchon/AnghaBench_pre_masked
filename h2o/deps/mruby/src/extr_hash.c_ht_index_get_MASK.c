
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__** table; } ;
typedef TYPE_2__ segindex ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_bool ;
struct TYPE_10__ {TYPE_2__* index; } ;
typedef TYPE_3__ htable ;
struct TYPE_8__ {int val; int key; } ;


 int VAR_0 ;
 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,int ,int ) ;
 size_t FUNC_2 (int *,TYPE_3__*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static mrb_bool
FUNC_4(mrb_state *VAR_2, htable *VAR_3, mrb_value VAR_4, mrb_value *VAR_5)
{
  segindex *VAR_6 = VAR_3->index;
  size_t VAR_7 = FUNC_0(VAR_6);
  size_t VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4) & VAR_7;
  size_t VAR_9 = 0;

  while (VAR_6->table[VAR_8]) {
    mrb_value VAR_10 = VAR_6->table[VAR_8]->key;
    if (!FUNC_3(VAR_10) && FUNC_1(VAR_2, VAR_3, VAR_4, VAR_10)) {
      if (VAR_5) *VAR_5 = VAR_6->table[VAR_8]->val;
      return VAR_1;
    }
    VAR_8 = (VAR_8+(++VAR_9)) & VAR_7;
  }
  return VAR_0;
}
