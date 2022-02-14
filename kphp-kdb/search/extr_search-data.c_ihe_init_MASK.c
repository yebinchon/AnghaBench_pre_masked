
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int item_t ;
struct TYPE_15__ {TYPE_1__* dec; } ;
struct TYPE_17__ {int field; scalar_t__ doc_id; TYPE_2__ dec; } ;
struct TYPE_16__ {int tag_word; int optional_tag_weight; int* Bt; int sp; int cur0; TYPE_6__** TS; TYPE_5__ Decoder; int cur_y1; int * cur1; int * ihe_skip_advance1; int word; } ;
typedef TYPE_3__ iheap_en_t ;
typedef int hash_t ;
struct TYPE_18__ {int item; } ;
struct TYPE_14__ {scalar_t__ tp; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_6__* VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_5__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_8 (iheap_en_t *VAR_5, hash_t VAR_6, int VAR_7, int VAR_8) {
  int VAR_9, VAR_10;
  FUNC_7 (VAR_5, 0, sizeof (*VAR_5));
  VAR_5->tag_word = VAR_7;
  VAR_5->optional_tag_weight = VAR_8;





  VAR_5->word = VAR_6;
  VAR_5->TS[0] = VAR_1;
  VAR_5->Bt[0] = -1;

  VAR_5->ihe_skip_advance1 = &VAR_3;
  if (FUNC_6 (&VAR_5->Decoder, VAR_6)) {
    if (VAR_5->Decoder.dec.dec->tp == VAR_4) {
      VAR_5->ihe_skip_advance1 = &VAR_2;
    }
    if (FUNC_1 (&VAR_5->Decoder) >= 0) {
      VAR_5->cur1 = (item_t *) (VAR_0 + VAR_5->Decoder.doc_id);
      VAR_5->cur_y1 = VAR_5->Decoder.field;

    }
  }

  if (!VAR_1) {
    VAR_9 = 1;
  } else {
    VAR_9 = FUNC_3 (VAR_5);
    VAR_10 = VAR_5->sp;

    if (VAR_9 < 0 && VAR_5->Bt[VAR_10] >= 0) {
      VAR_10 = VAR_5->Bt[VAR_10];
      VAR_9 = FUNC_5 (VAR_5->TS[VAR_10], VAR_5);
    }
  }

  if (VAR_9 != 0) {
    VAR_5->sp = -1;
    VAR_5->cur0 = 0;
    return FUNC_4 (VAR_5);
  }

  VAR_5->sp = VAR_10;
  VAR_5->cur0 = VAR_5->TS[VAR_10]->item;


  if (FUNC_0(VAR_5->cur0)) {
    FUNC_2 (VAR_5);
  }

  return FUNC_4 (VAR_5);
}
