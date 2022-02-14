
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int doc_id; TYPE_4__* sword; } ;
typedef TYPE_1__ ilist_decoder_t ;
typedef int iheap_en_t ;
typedef scalar_t__ hash_t ;
struct TYPE_6__ {scalar_t__ word; int file_offset; int len; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int ,int *,int ) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2 (iheap_en_t *VAR_3, ilist_decoder_t *VAR_4, hash_t VAR_5) {



  VAR_4->doc_id = -1;

  int VAR_6 = -1, VAR_7 = VAR_2, VAR_8;

  while (VAR_7 - VAR_6 > 1) {
    VAR_8 = ((VAR_6 + VAR_7) >> 1);
    if (VAR_0[VAR_8].word <= VAR_5) { VAR_6 = VAR_8; } else { VAR_7 = VAR_8; }
  }

  if (VAR_6 < 0 || VAR_0[VAR_6].word != VAR_5) {
    return 0;
  }

  VAR_4->sword = VAR_0 + VAR_6;
  FUNC_0 (VAR_3, VAR_4, VAR_1, VAR_4->sword->len, &VAR_4->sword->file_offset, FUNC_1 (VAR_5));
  return 1;
}
