
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int) ;
 void** VAR_0 ;

const char *FUNC_1 (unsigned char *VAR_1, int VAR_2) {
  static char VAR_3[16384];
  char *VAR_4 = VAR_3, *VAR_5 = VAR_3 + sizeof (VAR_3);
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    FUNC_0 (VAR_4 + 3 <= VAR_5);
    *VAR_4++ = ' ';
    *VAR_4++ = VAR_0[(VAR_1[VAR_6] >> 4) & 15];
    *VAR_4++ = VAR_0[VAR_1[VAR_6] & 15];
  }
  FUNC_0 (VAR_4 < VAR_5);
  *VAR_4 = 0;
  return VAR_3 + 1;
}
