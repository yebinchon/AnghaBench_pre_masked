
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atp {int* xy_acc; int* smooth; int* smooth_tmp; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct atp *VAR_2, int VAR_3, int VAR_4,
        int VAR_5, int *VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9;





 int *VAR_10 = VAR_2->xy_acc + VAR_3;


 int VAR_11 = 0, VAR_12 = 0;
 int VAR_13 = 0;

 *VAR_7 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_10[VAR_8] < VAR_1) {
   if (VAR_13)
    VAR_13 = 0;
  } else if (VAR_8 < 1 ||
      (!VAR_13 && VAR_10[VAR_8 - 1] < VAR_10[VAR_8])) {
   (*VAR_7)++;
   VAR_13 = 1;
  } else if (VAR_8 > 0 && (VAR_10[VAR_8 - 1] - VAR_10[VAR_8] > VAR_1)) {
   VAR_13 = 0;
  }
 }

 if (*VAR_7 < 1)
  return 0;
 FUNC_1(VAR_2->smooth, 0, 4 * sizeof(VAR_2->smooth[0]));

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_2->smooth[VAR_8 + 4] = VAR_10[VAR_8] << VAR_0;
 FUNC_1(&VAR_2->smooth[VAR_4 + 4], 0, 4 * sizeof(VAR_2->smooth[0]));

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {

  VAR_2->smooth_tmp[0] = (VAR_2->smooth[0] + VAR_2->smooth[1]) / 2;


  for (VAR_8 = 1; VAR_8 < VAR_4 + 7; VAR_8++)
   VAR_2->smooth_tmp[VAR_8] = (VAR_2->smooth[VAR_8 - 1] +
           VAR_2->smooth[VAR_8] * 2 +
           VAR_2->smooth[VAR_8 + 1]) / 4;


  VAR_2->smooth_tmp[VAR_8] = (VAR_2->smooth[VAR_8 - 1] + VAR_2->smooth[VAR_8]) / 2;

  FUNC_0(VAR_2->smooth, VAR_2->smooth_tmp, sizeof(VAR_2->smooth));
 }

 for (VAR_8 = 0; VAR_8 < VAR_4 + 8; VAR_8++) {




  if ((VAR_2->smooth[VAR_8] >> VAR_0) > 0) {
   VAR_11 += VAR_2->smooth[VAR_8] * VAR_8;
   VAR_12 += VAR_2->smooth[VAR_8];
  }
 }

 if (VAR_12 > 0) {
  *VAR_6 = VAR_12 >> VAR_0;
  return VAR_11 * VAR_5 / VAR_12;
 }

 return 0;
}
