
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 scalar_t__** VAR_6 ;
 int * VAR_7 ;
 int FUNC_2 (int ,char*,scalar_t__,int,int,int) ;
 int FUNC_3 (int*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_5 (int VAR_10, int VAR_11, int *VAR_12) {
  int VAR_13 = VAR_4[VAR_10];

  if (VAR_11 >= VAR_13) {
    FUNC_0 (VAR_11 == VAR_13);
    int VAR_14 = 0;
    while (VAR_13 <= VAR_9 && VAR_14 + VAR_6[VAR_10][VAR_13] <= VAR_0) {
      VAR_14 += VAR_6[VAR_10][VAR_13++];
    }
    if (VAR_6[VAR_10][VAR_13] > VAR_0) {
      FUNC_2 (VAR_8, "BIG USER DETECTED %ld, r = %d, en = %d, id= %d\n", VAR_6[VAR_10][VAR_13], VAR_13, VAR_10, VAR_13 * VAR_1 + VAR_10);
      FUNC_1 (0);
    }
    FUNC_4 (VAR_7[VAR_10], VAR_2[VAR_10], VAR_14 * sizeof (unsigned char));
    VAR_3[VAR_10] = 0;
    VAR_4[VAR_10] = VAR_13;
    VAR_5[VAR_10] = VAR_14;
  }


  FUNC_0 (VAR_3[VAR_10] + VAR_6[VAR_10][VAR_11] <= VAR_0);
  FUNC_3 (VAR_12, VAR_2[VAR_10] + VAR_3[VAR_10], VAR_6[VAR_10][VAR_11]);

  int VAR_15 = VAR_6[VAR_10][VAR_11] / sizeof (int);

  VAR_3[VAR_10] += VAR_6[VAR_10][VAR_11];
  FUNC_0 (VAR_3[VAR_10] <= VAR_5[VAR_10]);
  return VAR_15;
}
