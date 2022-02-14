
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m; int ptr; } ;
struct list_encoder {TYPE_1__ bw; int (* encode_int ) (struct list_encoder*,int) ;} ;
struct bitwriter {int m; int ptr; int end_ptr; int start_ptr; } ;
struct TYPE_5__ {size_t doc_id; int position; } ;
typedef TYPE_2__ pair_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bitwriter*,int) ;
 scalar_t__ FUNC_2 (struct bitwriter*) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct list_encoder*,int,int,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (struct list_encoder*,int) ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_5 (struct bitwriter *VAR_4, pair_t *VAR_5, int VAR_6) {
  int VAR_7;
  FUNC_0 (VAR_5->doc_id >= 0 && VAR_5->doc_id < VAR_3);
  VAR_0 -= FUNC_2 (VAR_4);
  FUNC_1 (VAR_4, VAR_6);
  struct list_encoder VAR_8;
  const int VAR_9 = VAR_1[VAR_5->doc_id];
  FUNC_0 (VAR_6 > 0 && VAR_6 <= VAR_9);
  FUNC_3 (&VAR_8, VAR_1[VAR_5->doc_id], VAR_6, VAR_4->start_ptr, VAR_4->end_ptr, VAR_2, FUNC_2 (VAR_4));

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {

    FUNC_0 (VAR_5[VAR_7].position >= 1 && VAR_5[VAR_7].position <= VAR_9);
    FUNC_0 (!VAR_7 || VAR_5[VAR_7-1].position < VAR_5[VAR_7].position);
    VAR_8.encode_int (&VAR_8, VAR_5[VAR_7].position - 1);
  }


  VAR_4->ptr = VAR_8.bw.ptr;
  VAR_4->m = VAR_8.bw.m;
  VAR_0 += FUNC_2 (VAR_4);
}
