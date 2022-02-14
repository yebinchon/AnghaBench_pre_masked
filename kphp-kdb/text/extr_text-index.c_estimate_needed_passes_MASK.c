
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
 int FUNC_0 (int) ;
 int FUNC_1 (double) ;
 double VAR_5 ;
 double VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 double VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

int FUNC_2 (void) {
  double VAR_13 = 0, VAR_14, VAR_15, VAR_16 = VAR_9 ? (double) VAR_12 / VAR_9 : 1;
  double VAR_17 = (VAR_6 - VAR_5) * (VAR_11 ? 0.5 : 0.8);
  int VAR_18 = 0, VAR_19 = 0;
  while (VAR_18 <= VAR_8) {
    VAR_19++;
    VAR_14 = 0;
    for (VAR_15 = 0; VAR_18 <= VAR_8 && VAR_15 + VAR_14 < VAR_17; VAR_18++) {
      if (VAR_14 < VAR_4[VAR_18] * 16.0) {
        VAR_14 = VAR_4[VAR_18] * 16.0;
      }
      VAR_15 += VAR_1[VAR_18] * (sizeof (message_t) + 4 * VAR_7 + 2.2) +
       VAR_0[VAR_18] * VAR_16 + VAR_2[VAR_18] * sizeof (struct message_short) +
       VAR_3[VAR_18] * 4;
    }
    VAR_13 += VAR_15 + VAR_14;
  }
  VAR_10 = (VAR_19 ? VAR_13 / VAR_19 : VAR_17);

  FUNC_0 (FUNC_1 (VAR_17) <= VAR_19);

  while (FUNC_1 (VAR_10) > VAR_19) {
    VAR_10 *= 1.01;
    FUNC_0 (VAR_10 <= VAR_17 * 1.1);
  }

  return FUNC_1 (VAR_10);
}
