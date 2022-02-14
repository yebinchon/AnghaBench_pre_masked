
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned long VAR_0, unsigned int VAR_1,
       unsigned int *VAR_2, unsigned int *VAR_3)
{
 unsigned int VAR_4 = VAR_0 / VAR_1;
 unsigned int VAR_5;

 if (VAR_4 > (16*16))
  VAR_5 = 512;
 else
  VAR_5 = 16;

 VAR_4 += VAR_5-1;
 VAR_4 /= VAR_5;

 if (VAR_4 == 0)
  VAR_4 = 1;
 if (VAR_4 > 17)
  VAR_4 = 17;

 *VAR_3 = VAR_4;
 *VAR_2 = VAR_5;

 return VAR_0 / (VAR_4 * VAR_5);
}
