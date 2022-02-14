
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tl_compiler {scalar_t__ magic; int flag_output_magic; TYPE_3__* hm_composite_typename; TYPE_2__** hm_combinator; TYPE_1__** hm_magic; int * expr; int tmp_error_buff; } ;
struct TYPE_6__ {int compute_hash; int compare; } ;
struct TYPE_5__ {int compute_hash; int compare; } ;
struct TYPE_4__ {int compute_hash; int compare; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tl_compiler*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4 (struct tl_compiler *VAR_8) {
  int VAR_9;
  if (VAR_8->magic == VAR_0) {
    return;
  }
  FUNC_0 (VAR_8, 0, sizeof (*VAR_8));
  VAR_8->magic = VAR_0;
  FUNC_3 (&VAR_8->tmp_error_buff);
  for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
    FUNC_2 (&VAR_8->expr[VAR_9]);
    VAR_8->hm_magic[VAR_9] = FUNC_1 (VAR_1);
    VAR_8->hm_magic[VAR_9]->compare = VAR_4;
    VAR_8->hm_magic[VAR_9]->compute_hash = VAR_5;
    VAR_8->hm_combinator[VAR_9] = FUNC_1 (VAR_1);
    VAR_8->hm_combinator[VAR_9]->compare = VAR_2;
    VAR_8->hm_combinator[VAR_9]->compute_hash = VAR_3;
  }
  VAR_8->hm_composite_typename = FUNC_1 (VAR_1);
  VAR_8->hm_composite_typename->compare = VAR_6;
  VAR_8->hm_composite_typename->compute_hash = VAR_7;
  VAR_8->flag_output_magic = 1;
}
