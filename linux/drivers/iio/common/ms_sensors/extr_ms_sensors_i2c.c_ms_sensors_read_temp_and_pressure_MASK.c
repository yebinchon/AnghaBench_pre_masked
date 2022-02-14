
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int u16 ;
struct ms_tp_dev {int* prom; size_t res_index; int lock; int client; } ;
typedef int s64 ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ,int,unsigned int*) ;
 int* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ms_tp_dev *VAR_4,
          int *VAR_5,
          unsigned int *VAR_6)
{
 int VAR_7;
 u32 VAR_8, VAR_9;
 s32 VAR_10, VAR_11;
 s64 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u16 *VAR_17 = VAR_4->prom, VAR_18;

 FUNC_1(&VAR_4->lock);
 VAR_18 = VAR_3[VAR_4->res_index];

 VAR_7 = FUNC_0(
     VAR_4->client,
     VAR_2 +
      VAR_4->res_index * 2,
     VAR_0,
     VAR_18, &VAR_8);
 if (VAR_7) {
  FUNC_2(&VAR_4->lock);
  return VAR_7;
 }

 VAR_7 = FUNC_0(
     VAR_4->client,
     VAR_1 +
      VAR_4->res_index * 2,
     VAR_0,
     VAR_18, &VAR_9);
 FUNC_2(&VAR_4->lock);
 if (VAR_7)
  return VAR_7;

 VAR_10 = (s32)VAR_8 - (VAR_17[5] << 8);


 VAR_11 = 2000 + (((s64)VAR_10 * VAR_17[6]) >> 23);


 if (VAR_11 < 2000) {
  s64 VAR_19 = (s64)VAR_11 - 2000;

  VAR_14 = (3 * ((s64)VAR_10 * (s64)VAR_10)) >> 33;
  VAR_15 = (61 * VAR_19 * VAR_19) >> 4;
  VAR_16 = (29 * VAR_19 * VAR_19) >> 4;

  if (VAR_11 < -1500) {
   s64 VAR_20 = (s64)VAR_11 + 1500;

   VAR_15 += 17 * VAR_20 * VAR_20;
   VAR_16 += 9 * VAR_20 * VAR_20;
  }
 } else {
  VAR_14 = (5 * ((s64)VAR_10 * (s64)VAR_10)) >> 38;
  VAR_15 = 0;
  VAR_16 = 0;
 }


 VAR_12 = (((s64)VAR_17[2]) << 17) + ((((s64)VAR_17[4]) * (s64)VAR_10) >> 6);
 VAR_12 -= VAR_15;


 VAR_13 = (((s64)VAR_17[1]) << 16) + (((s64)VAR_17[3] * VAR_10) >> 7);
 VAR_13 -= VAR_16;


 *VAR_5 = (VAR_11 - VAR_14) * 10;
 *VAR_6 = (u32)(((((s64)VAR_9 * VAR_13) >> 21) - VAR_12) >> 15);

 return 0;
}
