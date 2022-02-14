
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int item_t ;
struct TYPE_5__ {int field; scalar_t__ doc_id; } ;
struct TYPE_4__ {int * cur1; TYPE_3__ Decoder; int cur_y1; } ;
typedef TYPE_1__ iheap_en_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1 (iheap_en_t *VAR_1) {
  if (FUNC_0 (&VAR_1->Decoder) >= 0) {
    VAR_1->cur1 = (item_t *) (VAR_0 + VAR_1->Decoder.doc_id);
    VAR_1->cur_y1 = VAR_1->Decoder.field;
    return 1;
  } else {
    VAR_1->cur1 = 0;

    return 0;
  }
}
