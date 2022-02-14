
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitreader {int dummy; } ;
struct list_decoder {int p; int M; int last; int * decode_int; scalar_t__ data; struct bitreader br; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bitreader*,int*,int,int*) ;
 int FUNC_1 (int*,int,scalar_t__,scalar_t__,int *,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2 (struct list_decoder *VAR_3) {
  struct bitreader *VAR_4 = &VAR_3->br;
  int VAR_5[32], VAR_6, VAR_7;
  FUNC_0 (VAR_4, VAR_5, VAR_3->p, &VAR_7);
  if (VAR_7 <= 1) {

    for (VAR_6 = 0; VAR_6 < VAR_3->p; VAR_6++) {
      if (VAR_5[VAR_6]) {
        VAR_3->M = VAR_6;
        break;
      }
    }
    VAR_3->decode_int = &VAR_2;
  } else {
    VAR_3->M = -1;
    FUNC_1 (VAR_5, VAR_3->p, VAR_0, VAR_3->data, ((void*)0), VAR_3->data + (VAR_0 + 1));
    VAR_3->decode_int = &VAR_1;
  }
  VAR_3->last = -1;
}
