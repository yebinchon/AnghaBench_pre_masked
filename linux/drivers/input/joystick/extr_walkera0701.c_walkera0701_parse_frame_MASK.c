
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walkera_dev {int* buf; int input_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static inline void FUNC_3(struct walkera_dev *VAR_7)
{
 int VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;
 int VAR_19, VAR_20;

 for (VAR_19 = VAR_20 = VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  VAR_19 += VAR_7->buf[VAR_8] & 7;
  VAR_20 += (VAR_7->buf[VAR_8] & 8) >> 3;
 }
 if ((VAR_7->buf[10] & 7) != (VAR_19 & 7))
  return;
 if (((VAR_7->buf[10] & 8) >> 3) != (((VAR_19 >> 3) + VAR_20) & 1))
  return;
 for (VAR_19 = VAR_20 = 0, VAR_8 = 11; VAR_8 < 23; VAR_8++) {
  VAR_19 += VAR_7->buf[VAR_8] & 7;
  VAR_20 += (VAR_7->buf[VAR_8] & 8) >> 3;
 }
 if ((VAR_7->buf[23] & 7) != (VAR_19 & 7))
  return;
 if (((VAR_7->buf[23] & 8) >> 3) != (((VAR_19 >> 3) + VAR_20) & 1))
  return;
 VAR_9 = ((VAR_7->buf[0] & 7) * 256 + VAR_7->buf[1] * 16 + VAR_7->buf[2]) >> 2;
 VAR_9 *= ((VAR_7->buf[0] >> 2) & 2) - 1;
 VAR_10 = (VAR_7->buf[2] & 1) << 8 | (VAR_7->buf[3] << 4) | VAR_7->buf[4];
 VAR_10 *= (VAR_7->buf[2] & 2) - 1;
 VAR_11 = ((VAR_7->buf[5] & 7) * 256 + VAR_7->buf[6] * 16 + VAR_7->buf[7]) >> 2;
 VAR_11 *= ((VAR_7->buf[5] >> 2) & 2) - 1;
 VAR_12 = (VAR_7->buf[7] & 1) << 8 | (VAR_7->buf[8] << 4) | VAR_7->buf[9];
 VAR_12 *= (VAR_7->buf[7] & 2) - 1;
 VAR_13 = ((VAR_7->buf[11] & 7) * 256 + VAR_7->buf[12] * 16 + VAR_7->buf[13]) >> 2;
 VAR_13 *= ((VAR_7->buf[11] >> 2) & 2) - 1;
 VAR_14 = (VAR_7->buf[13] & 1) << 8 | (VAR_7->buf[14] << 4) | VAR_7->buf[15];
 VAR_14 *= (VAR_7->buf[13] & 2) - 1;
 VAR_15 = ((VAR_7->buf[16] & 7) * 256 + VAR_7->buf[17] * 16 + VAR_7->buf[18]) >> 2;
 VAR_15 *= ((VAR_7->buf[16] >> 2) & 2) - 1;
 VAR_16 = (VAR_7->buf[18] & 1) << 8 | (VAR_7->buf[19] << 4) | VAR_7->buf[20];
 VAR_16 *= (VAR_7->buf[18] & 2) - 1;

 VAR_17 = (VAR_7->buf[21] << 4) | VAR_7->buf[22];
 VAR_18 = (VAR_7->buf[24] & 8) >> 3;
 FUNC_2("%4d %4d %4d %4d  %4d %4d %4d %4d (magic %2x %d)\n",
   VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
   VAR_17, VAR_18);

 FUNC_0(VAR_7->input_dev, VAR_3, VAR_10);
 FUNC_0(VAR_7->input_dev, VAR_4, VAR_9);
 FUNC_0(VAR_7->input_dev, VAR_5, VAR_14);
 FUNC_0(VAR_7->input_dev, VAR_2, VAR_11);
 FUNC_0(VAR_7->input_dev, VAR_1, VAR_12);
 FUNC_0(VAR_7->input_dev, VAR_0, VAR_15);
 FUNC_1(VAR_7->input_dev, VAR_6, VAR_13 > 0);
}
