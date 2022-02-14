
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline short int FUNC_0(unsigned char VAR_0)
{
 short VAR_1, VAR_2, VAR_3, VAR_4;
 static short VAR_5[] = {0, 132, 396, 924, 1980, 4092, 8316, 16764};

 VAR_1 = 255 - VAR_0;
 VAR_2 = (VAR_1 & 0x70) / 16;
 VAR_3 = VAR_1 & 0x0f;
 VAR_4 = VAR_3 * (1 << (VAR_2 + 3));
 VAR_4 += VAR_5[VAR_2];
 if (VAR_1 & 0x80)
  VAR_4 = -VAR_4;
 return VAR_4;
}
