
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct char_dictionary {long long* code_len; long long* freq; int* chars; unsigned int* first_codes; int** code_ptr; unsigned int* code; int max_bits; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,char,...) ;
 int VAR_0 ;
 int VAR_1 ;

long long FUNC_3 (struct char_dictionary *VAR_2, long long *VAR_3, long long *VAR_4) {
  long long VAR_5 = 0;
  static int VAR_6[32];
  int VAR_7, VAR_8;
  for (VAR_7 = 0; VAR_7 < 32; VAR_7++) {
    VAR_6[VAR_7] = 0;
  }
  for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
    if ((unsigned long long) VAR_3[VAR_7] > 32) {
      FUNC_2 (VAR_0, "fatal: character %02x encoded with %hhd > 32 bits\n", VAR_7, VAR_3[VAR_7]);
      FUNC_1 (3);
    }
    FUNC_0 (VAR_4[VAR_7] >= 0);
    VAR_5 += (long long) VAR_3[VAR_7] * VAR_4[VAR_7];
    VAR_6[VAR_3[VAR_7]]++;
    VAR_2->code_len[VAR_7] = VAR_3[VAR_7];
    VAR_2->freq[VAR_7] = VAR_4[VAR_7];
  }
  unsigned VAR_9 = 0, VAR_10 = (1 << 31);
  int *VAR_11 = VAR_2->chars;
  for (VAR_7 = 1; VAR_7 <= 32; VAR_7++) {
    VAR_2->first_codes[VAR_7-1] = VAR_9;
    VAR_2->code_ptr[VAR_7-1] = VAR_11 - (VAR_9 >> (32 - VAR_7));
    for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
      if (VAR_3[VAR_8] == VAR_7) {
        *VAR_11++ = VAR_8;
        VAR_2->code[VAR_8] = VAR_9;
        VAR_9 += VAR_10;
        FUNC_0 (VAR_9 >= VAR_10 || !VAR_9);
      }

    }
    VAR_10 >>= 1;
  }
  FUNC_0 (!VAR_9);

  VAR_7 = 32;
  while (VAR_7 && !VAR_2->first_codes[VAR_7-1]) {
    VAR_7--;
  }
  VAR_2->max_bits = VAR_7;

  if (VAR_1 > 1) {
    for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
      FUNC_2 (VAR_0, "character %02x ('%c'): %08x:%lld\n", VAR_7, (VAR_7 < 32 ? '.' : VAR_7), VAR_2->code[VAR_7], VAR_2->code_len[VAR_7]);
    }
  }

  return VAR_5;
}
