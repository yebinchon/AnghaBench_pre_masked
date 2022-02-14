
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bcode_iterator ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned char*,int,int,int) ;

int FUNC_3 (int *VAR_0, int VAR_1, int VAR_2, unsigned char *VAR_3) {


  unsigned char *VAR_4 = VAR_3;

  int VAR_5 = 0;
  int VAR_6 = 1;

  while (VAR_6 <= VAR_2) {
    VAR_6 += VAR_6;
    VAR_5++;
  }
  int VAR_7 = 8, VAR_8;
  *VAR_4 = 0;

  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    int VAR_9 = VAR_0[VAR_8];
    int VAR_10 = VAR_5;

    while (VAR_10 > VAR_7) {
      VAR_10 -= VAR_7;
      *VAR_4 += (unsigned char)((VAR_9 >> VAR_10) << (8 - VAR_7));
      VAR_7 = 8;
      *++VAR_4 = 0;
    }

    *VAR_4 += (unsigned char)((VAR_9 & ((1 << VAR_10) - 1)) << (8 - VAR_7));
    VAR_7 -= VAR_10;
  }


  bcode_iterator VAR_11;
  FUNC_2 (&VAR_11, VAR_3, VAR_2, (VAR_4 - VAR_3) + 1, VAR_2);
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {

    FUNC_0 (FUNC_1 (&VAR_11, VAR_8) == VAR_0[VAR_8]);
  }
  return (VAR_4 - VAR_3) + 1;
}
