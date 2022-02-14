
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct newsr_gather_extra {int request_tag; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int*,int const) ;
 int FUNC_2 (char*,char*,int,int const) ;

int FUNC_3 (char *VAR_7, const char *VAR_8, int VAR_9, void *VAR_10, int VAR_11) {
  if (!VAR_6[VAR_11]) return 0;
  struct newsr_gather_extra* VAR_12 = VAR_10;
  int VAR_13 = VAR_6[VAR_11];
  int VAR_14, VAR_15 = VAR_5[VAR_11], VAR_16 = VAR_4;
  FUNC_0 (VAR_3[0] == 0x31303030);
  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
    FUNC_0 (VAR_15 >= 0);
    FUNC_0 (VAR_16 + 2 <= VAR_0 + 1);
    VAR_3[VAR_16++] = VAR_1[2 * VAR_15 + 0];
    VAR_3[VAR_16++] = VAR_1[2 * VAR_15 + 1];
    VAR_15 = VAR_2[VAR_15];
  }

  FUNC_0 (VAR_15 == -1 && VAR_13 > 0);
  const int VAR_17 = VAR_16 << 2;
  int VAR_18 = FUNC_2 (VAR_7, "set urlist%d 0 0 %d\r\n", VAR_12->request_tag, VAR_17);
  FUNC_1 (VAR_7 + VAR_18, VAR_3, VAR_17);
  VAR_18 += VAR_17;
  return VAR_18;
}
