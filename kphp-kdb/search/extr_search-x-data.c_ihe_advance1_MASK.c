
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct item {int dummy; } ;
struct TYPE_6__ {scalar_t__ doc_id; } ;
struct TYPE_5__ {struct item* cur1; TYPE_4__ Decoder; } ;
typedef TYPE_1__ iheap_en_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2 (iheap_en_t *VAR_1) {
  if (FUNC_0 (&VAR_1->Decoder) >= 0) {
    VAR_1->cur1 = (struct item *) (VAR_0 + VAR_1->Decoder.doc_id);
  } else {
    VAR_1->cur1 = 0;
  }
  return FUNC_1 (VAR_1);
}
