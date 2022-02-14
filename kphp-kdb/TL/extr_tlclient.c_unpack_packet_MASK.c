
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uLongf ;
struct tl_compiler {int dummy; } ;
typedef int Bytef ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int*,int *,int) ;
 int FUNC_2 (struct tl_compiler*,char*,...) ;
 int FUNC_3 (scalar_t__*,int const,char**,int*,int ) ;
 int FUNC_4 (int,char*,int const,int) ;

__attribute__((used)) static int FUNC_5 (struct tl_compiler *VAR_7, int VAR_8, int **VAR_9, int *VAR_10) {
  *VAR_9 = ((void*)0);
  *VAR_10 = 0;
  const int VAR_11 = (VAR_8 / 4) - 6;
  if (VAR_11 <= 0) {
    return -1;
  }
  if (VAR_1[5] != VAR_0) {
    *VAR_9 = &VAR_1[5];
    *VAR_10 = VAR_11;
    return 0;
  }
  char *VAR_12;
  int VAR_13;
  int VAR_14 = FUNC_3 (&VAR_1[6], VAR_11 - 1, &VAR_12, &VAR_13, 0);
  FUNC_4 (4, "ilen: %d, slen: %d\n", VAR_11, VAR_13);
  if (VAR_14 < 0) {
    return FUNC_2 (VAR_7, "tl_fetch_string fail");
  }

  if (VAR_14 != VAR_11 -1) {
    return FUNC_2 (VAR_7, "packet contains extra %d ints", VAR_11 - 1 - VAR_14);
  }

  FUNC_0 ((void *) (VAR_12 + VAR_13) <= (void *) &VAR_1[VAR_8/4]);

  const int VAR_15 = VAR_2 - VAR_8;
  uLongf VAR_16 = VAR_15;
  VAR_14 = FUNC_1 ((Bytef *) &VAR_1[VAR_8 / 4], &VAR_16, (Bytef *) VAR_12, VAR_13);
  if (VAR_6 != VAR_14) {
    return FUNC_2 (VAR_7, "uncompress (%p, %d, %p, %d) returns %s",
      &VAR_1[VAR_8 / 4],
      VAR_15,
      VAR_12,
      VAR_13,
      (VAR_14 == VAR_5) ? "Z_MEM_ERROR" :
      (VAR_14 == VAR_3) ? "Z_BUF_ERROR" :
      (VAR_14 == VAR_4) ? "Z_DATA_ERROR" : "???");
    return -1;
  }

  if (VAR_16 % 4) {
    return FUNC_2 (VAR_7, "destLen(%d) isn't multiple of 4", (int) VAR_16);
  }

  *VAR_9 = &VAR_1[VAR_8 / 4];
  *VAR_10 = VAR_16 / 4;
  return 1;
}
