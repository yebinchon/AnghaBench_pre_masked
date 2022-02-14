
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char,...) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (char,int ) ;
 int VAR_0 ;

int FUNC_3 (void *VAR_1, void *VAR_2) {
  char *VAR_3 = VAR_1, VAR_4;
  while (VAR_3 < (char *) VAR_2) {
    int VAR_5 = (char *) VAR_2 - VAR_3, VAR_6;
    if (VAR_5 > 16) {
      VAR_5 = 16;
    }
    FUNC_0 (VAR_0, "%08hhx", (int) (VAR_3 - (char *) VAR_1));
    for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
      VAR_4 = ' ';
      if (VAR_6 == 8) {
        FUNC_1 (' ', VAR_0);
      }
      if (VAR_6 < VAR_5) {
        FUNC_0 (VAR_0, "%c%02x", VAR_4, (unsigned char) VAR_3[VAR_6]);
      } else {
        FUNC_0 (VAR_0, "%c  ", VAR_4);
      }
    }
    VAR_4 = ' ';
    FUNC_0 (VAR_0, "%c  ", VAR_4);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
      FUNC_2 ((unsigned char) VAR_3[VAR_6] < ' ' ? '.' : VAR_3[VAR_6], VAR_0);
    }
    FUNC_2 ('\n', VAR_0);
    VAR_3 += 16;
  }
  return VAR_2 - VAR_1;
}
