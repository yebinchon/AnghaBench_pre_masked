
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct regmap {unsigned int* work_buf; } ;



__attribute__((used)) static void FUNC_0(struct regmap *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2)
{
 u8 *VAR_3 = VAR_0->work_buf;

 VAR_3[2] = VAR_2;
 VAR_3[1] = (VAR_2 >> 8) | (VAR_1 << 6);
 VAR_3[0] = VAR_1 >> 2;
}
