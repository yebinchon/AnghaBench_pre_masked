
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,long) ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,char*,long,int ,int,int,int) ;

int FUNC_3 (void) {
  long VAR_8, VAR_9;
  FUNC_2 (2, "preprocess_aux_userlist: size=%d tag=%d A=%d %d %d...\n", VAR_3, VAR_4, VAR_2[0], VAR_2[1], VAR_2[2]);
  if (!VAR_3 || !VAR_4) {
    return VAR_3 = 0;
  }
  FUNC_0 ((unsigned) VAR_3 <= VAR_0);
  for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_3; VAR_8++) {
    int VAR_10 = VAR_2[VAR_8];
    if (VAR_10 <= 0 || VAR_10 % VAR_6 != VAR_5) {
      continue;
    }
    int VAR_11 = VAR_10 / VAR_6;
    if (VAR_11 > VAR_7 || !VAR_1[VAR_11]) {
      continue;
    }
    VAR_2[VAR_9++] = VAR_11;
  }
  if (!VAR_9) {
    return VAR_3 = 0;
  }
  for (VAR_8 = 1; VAR_8 < VAR_9; VAR_8++) {
    if (VAR_2[VAR_8] > VAR_2[VAR_8-1]) {
      break;
    }
  }
  if (VAR_8 < VAR_9) {
    FUNC_1 (0, VAR_9 - 1);
  }
  VAR_3 = VAR_9;
  for (VAR_8 = 1, VAR_9 = 1; VAR_8 < VAR_3; VAR_8++) {
    if (VAR_2[VAR_8] > VAR_2[VAR_8-1]) {
      VAR_2[VAR_9++] = VAR_2[VAR_8];
    }
  }
  FUNC_2 (2, "AFTER preprocess_aux_userlist: size=%ld tag=%d A=%d %d %d...\n", VAR_9, VAR_4, VAR_2[0], VAR_2[1], VAR_2[2]);
  return VAR_3 = VAR_9;
}
