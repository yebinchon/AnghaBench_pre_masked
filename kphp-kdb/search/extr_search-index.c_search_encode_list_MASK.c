
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct search_index_word {int len; int len_subseq; scalar_t__ bytes_subseq; scalar_t__ bytes; } ;
typedef int pair_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int,struct search_index_word*,int,int const,int) ;

__attribute__((used)) static int FUNC_3 (pair_t *VAR_0, int VAR_1, struct search_index_word *VAR_2, const int VAR_3[2], int VAR_4) {
  VAR_2->len = VAR_1;


  VAR_2->bytes = VAR_2->bytes_subseq = 0;
  FUNC_0 (VAR_1 > 0);

  int VAR_5 = 0;
  while (VAR_1 > 0) {
    VAR_1--;
    if (FUNC_1 (VAR_0)) {
      VAR_5++;
    }
    VAR_0++;
  }

  VAR_1 = VAR_2->len;
  VAR_0-=VAR_1;
  VAR_2->len_subseq = VAR_5;
  int VAR_6 = 0;
  VAR_6 += FUNC_2 (VAR_0, VAR_1, VAR_1, VAR_2, 0, VAR_3[0], VAR_4);
  VAR_6 += FUNC_2 (VAR_0, VAR_1, VAR_5, VAR_2, 1, VAR_3[1], VAR_4);
  return VAR_6;
}
