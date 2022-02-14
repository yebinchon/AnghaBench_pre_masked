
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_i2c {int dev; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct mtk_i2c *VAR_6, unsigned int VAR_7,
       unsigned int VAR_8,
       unsigned int *VAR_9,
       unsigned int *VAR_10)
{
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14 = VAR_4;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;

 if (VAR_8 > VAR_2)
  VAR_8 = VAR_2;

 if (VAR_8 > VAR_1)
  VAR_13 = VAR_3;
 else
  VAR_13 = VAR_5;

 VAR_15 = VAR_13;

 VAR_16 = FUNC_0(VAR_7 >> 1, VAR_8);
 VAR_17 = VAR_4 * VAR_13;







 for (VAR_12 = 1; VAR_12 <= VAR_4; VAR_12++) {
  VAR_11 = FUNC_0(VAR_16, VAR_12);
  VAR_18 = VAR_11 * VAR_12;
  if (VAR_11 > VAR_13)
   continue;

  if (VAR_18 < VAR_17) {
   VAR_17 = VAR_18;
   VAR_14 = VAR_12;
   VAR_15 = VAR_11;
   if (VAR_17 == VAR_16)
    break;
  }
 }

 VAR_12 = VAR_14;
 VAR_11 = VAR_15;

 if ((VAR_7 / (2 * VAR_12 * VAR_11)) > VAR_8) {



  FUNC_1(VAR_6->dev, "Unsupported speed (%uhz)\n", VAR_8);
  return -VAR_0;
 }

 *VAR_9 = VAR_11 - 1;
 *VAR_10 = VAR_12 - 1;

 return 0;
}
