
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message_short {int dummy; } ;
typedef int message_t ;


 double* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 double* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

int FUNC_0 (int VAR_9, double VAR_10) {
  double VAR_11 = 0, VAR_12 = 0, VAR_13 = VAR_7 ? (double) VAR_8 / VAR_7 : 1;
  int VAR_14;
  for (VAR_14 = VAR_9; VAR_14 <= VAR_6 && VAR_11 + VAR_12 <= VAR_10; VAR_14++) {
    if (VAR_12 < VAR_4[VAR_14] * 16.0) {
      VAR_12 = VAR_4[VAR_14] * 16.0;
    }
    VAR_11 += VAR_1[VAR_14] * (sizeof (message_t) + 4 * VAR_5 + 2.2) +
      VAR_0[VAR_14] * VAR_13 + VAR_2[VAR_14] * sizeof (struct message_short) +
      VAR_3[VAR_14] * 4;
  }
  return VAR_14;
}
