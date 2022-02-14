
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash_t ;


 int* VAR_0 ;
 unsigned char** VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_0 (int VAR_4, int VAR_5) {
  if (VAR_4 >= VAR_5) {
    return;
  }
  int VAR_6 = VAR_4, VAR_7 = VAR_5, VAR_8 = VAR_0[(VAR_4+VAR_5)>>1];
  do {
    while (VAR_0[VAR_6] < VAR_8) { VAR_6++; }
    while (VAR_0[VAR_7] > VAR_8) { VAR_7--; }
    if (VAR_6 <= VAR_7) {
      int VAR_9 = VAR_0[VAR_6];
      VAR_0[VAR_6] = VAR_0[VAR_7];
      VAR_0[VAR_7] = VAR_9;
      VAR_9 = VAR_2[VAR_6];
      VAR_2[VAR_6] = VAR_2[VAR_7];
      VAR_2[VAR_7] = VAR_9;
      unsigned char *VAR_10 = VAR_1[VAR_6];
      VAR_1[VAR_6] = VAR_1[VAR_7];
      VAR_1[VAR_7] = VAR_10;
      hash_t VAR_11;
      VAR_11 = VAR_3[VAR_6];
      VAR_3[VAR_6] = VAR_3[VAR_7];
      VAR_3[VAR_7] = VAR_11;
      VAR_6++;
      VAR_7--;
    }
  } while (VAR_6 <= VAR_7);
  FUNC_0 (VAR_4, VAR_7);
  FUNC_0 (VAR_6, VAR_5);
}
