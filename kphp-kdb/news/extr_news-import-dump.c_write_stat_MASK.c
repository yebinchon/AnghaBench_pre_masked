
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_1 (void) {
  int VAR_6;
  int VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    VAR_2[VAR_1[VAR_6]] ++;
    if (VAR_1[VAR_6] > VAR_7) VAR_7 = VAR_1[VAR_6];
  }
  double VAR_8 = 0;
  int VAR_9 = 0;
  for (VAR_6 = 1; VAR_6 <= VAR_7; VAR_6++) {
    VAR_8 += VAR_6 * VAR_2[VAR_6];
    VAR_9 += VAR_2[VAR_6];
  }
  VAR_8 /= VAR_9;
  FUNC_0 (VAR_5, "mean bookmarks number is %d\n", VAR_8);
  FUNC_0 (VAR_5, "maximal bookmarks number is %d\n", VAR_7);
  FUNC_0 (VAR_5, "total users number is %d\n", VAR_9);

  int VAR_10 = 0;
  for (VAR_6 = 1; VAR_6 <= 100; VAR_6++) {
    VAR_10 += VAR_2[VAR_6];
    FUNC_0 (VAR_5, "number of users with %d bookmarks is %d (with more %d)\n", VAR_6, VAR_2[VAR_6], VAR_9 - VAR_10);
  }

  int VAR_11 = 1000000000;
  VAR_7 = 0;
  VAR_8 = 0;
  int VAR_12 = -1;
  int VAR_13 = -1;
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
    if (VAR_7 < VAR_3[VAR_6]) {
      VAR_7 = VAR_3[VAR_6];
      VAR_12 = VAR_6;
    }
    if (VAR_11 > VAR_3[VAR_6]) {
      VAR_11 = VAR_3[VAR_6];
      VAR_13 = VAR_6;
    }
    VAR_8 += VAR_3[VAR_6];
  }
  VAR_8 /= VAR_4;
  FUNC_0 (VAR_5, "max items in file %d (file %d)\n", VAR_7, VAR_12);
  FUNC_0 (VAR_5, "min items in file %d (file %d)\n", VAR_11, VAR_13);
  FUNC_0 (VAR_5, "mean items in file %d\n", (int)VAR_8);
}
