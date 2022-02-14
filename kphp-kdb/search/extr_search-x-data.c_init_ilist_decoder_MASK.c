
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct list_encoder {int bw; int (* encode_int ) (struct list_encoder*,int) ;} ;
struct TYPE_5__ {int doc_id; TYPE_3__* sword; int dec; int extra; } ;
typedef TYPE_1__ ilist_decoder_t ;
typedef scalar_t__ hash_t ;
struct TYPE_7__ {scalar_t__ word; unsigned int doc_id_and_priority; } ;
struct TYPE_6__ {scalar_t__ word; int file_offset; int bytes; int len; } ;


 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_2 (struct list_encoder*) ;
 int FUNC_3 (struct list_encoder*,int ,int,void*,void*,int ,int ) ;
 int FUNC_4 (struct list_encoder*,int) ;

int FUNC_5 (ilist_decoder_t *VAR_6, hash_t VAR_7) {



  VAR_6->doc_id = -1;

  int VAR_8 = -1, VAR_9 = VAR_4, VAR_10;

  while (VAR_9 - VAR_8 > 1) {
    VAR_10 = ((VAR_8 + VAR_9) >> 1);
    if (VAR_1[VAR_10].word <= VAR_7) { VAR_8 = VAR_10; } else { VAR_9 = VAR_10; }
  }

  if (VAR_8 < 0 || VAR_1[VAR_8].word != VAR_7) {
    VAR_8 = -1;
    VAR_9 = VAR_2;
    while (VAR_9 - VAR_8 > 1) {
      VAR_10 = ((VAR_8 + VAR_9) >> 1);
      if (VAR_0[VAR_10].word <= VAR_7) { VAR_8 = VAR_10; } else { VAR_9 = VAR_10; }
    }
    if (VAR_8 >= 0 && VAR_0[VAR_8].word == VAR_7) {
      unsigned int VAR_11 = VAR_0[VAR_8].doc_id_and_priority;
      int VAR_12 = VAR_11 & 0x7fffffff;
      unsigned VAR_13, VAR_14;
      if (VAR_11 & 0x80000000) {

        VAR_13 = 2;
        VAR_14 = 1;
      } else {

        VAR_13 = 1;
        VAR_14 = 1;
      }
      void *VAR_15 = &VAR_6->extra, *VAR_16 = VAR_15 + 8;

      struct list_encoder VAR_17;
      FUNC_3 (&VAR_17, VAR_3, 1, VAR_15, VAR_16, VAR_5, 0);
      VAR_17.encode_int (&VAR_17, VAR_12);
      FUNC_0 (&VAR_17.bw, VAR_13);
      FUNC_0 (&VAR_17.bw, VAR_14);
      FUNC_2 (&VAR_17);
      return 1;
    }
    return 0;
  }
  VAR_6->sword = VAR_1 + VAR_8;
  FUNC_1 (&VAR_6->dec, VAR_3, VAR_6->sword->len, VAR_6->sword->bytes, &VAR_6->sword->file_offset);
  return 1;
}
