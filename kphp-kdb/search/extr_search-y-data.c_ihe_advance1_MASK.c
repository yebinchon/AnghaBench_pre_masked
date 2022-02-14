
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int item_t ;
struct TYPE_7__ {scalar_t__ doc_id; } ;
struct TYPE_6__ {int * cur1; TYPE_5__ Decoder; } ;
typedef TYPE_1__ iheap_en_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3 (iheap_en_t *VAR_1) {
  if (FUNC_0 (&VAR_1->Decoder) >= 0) {
    VAR_1->cur1 = (item_t *) (VAR_0 + VAR_1->Decoder.doc_id);
    return FUNC_2 (VAR_1);
  }
  VAR_1->cur1 = ((void*)0);
  return FUNC_1 (VAR_1);
}
