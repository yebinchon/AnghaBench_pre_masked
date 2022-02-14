
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct char_dictionary {int dict_size; int* code_len; int max_bits; unsigned long long* first_codes; int** code_ptr; int* chars; int used_codes; } ;


 int FUNC_0 (int) ;
 struct char_dictionary* FUNC_1 (struct char_dictionary*,long long,int,int ) ;

struct char_dictionary *FUNC_2 (struct char_dictionary *VAR_0, long long VAR_1) {
  int VAR_2, VAR_3, VAR_4;
  unsigned long long VAR_5;
  VAR_0 = FUNC_1 (VAR_0, VAR_1, 4+256, 0);
  if (!VAR_0) {
    return 0;
  }
  FUNC_0 (VAR_0->dict_size == 256);
  VAR_5 = 0;
  VAR_4 = 0;
  for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
    FUNC_0 ((unsigned) VAR_0->code_len[VAR_2] <= 32);
  }
  VAR_0->max_bits = 0;
  for (VAR_3 = 1; VAR_3 <= 32; VAR_3++) {
    if (VAR_5 < (1LL << 32)) {
      VAR_0->max_bits = VAR_3;
    }
    VAR_0->first_codes[VAR_3-1] = VAR_5;
    VAR_0->code_ptr[VAR_3-1] = VAR_0->chars + VAR_4 - (VAR_5 >> (32 - VAR_3));
    for (VAR_2 = 0; VAR_2 < 256; VAR_2++) {
      if (VAR_0->code_len[VAR_2] == VAR_3) {
        VAR_0->chars[VAR_4++] = VAR_2;
        VAR_5 += (1U << (32 - VAR_3));
        FUNC_0 (VAR_5 <= (1LL << 32));
      }
    }
  }
  VAR_0->used_codes = VAR_4;
  FUNC_0 ((VAR_5 == (1LL << 32) && VAR_4 <= 256) || (!VAR_5 && !VAR_4));
  return VAR_0;
}
