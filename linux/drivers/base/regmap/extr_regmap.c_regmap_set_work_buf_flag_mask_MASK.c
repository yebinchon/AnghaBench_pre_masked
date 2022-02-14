
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct regmap {unsigned long* work_buf; } ;



__attribute__((used)) static void FUNC_0(struct regmap *VAR_0, int VAR_1,
       unsigned long VAR_2)
{
 u8 *VAR_3;
 int VAR_4;

 if (!VAR_2 || !VAR_0->work_buf)
  return;

 VAR_3 = VAR_0->work_buf;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3[VAR_4] |= (VAR_2 >> (8 * VAR_4)) & 0xff;
}
