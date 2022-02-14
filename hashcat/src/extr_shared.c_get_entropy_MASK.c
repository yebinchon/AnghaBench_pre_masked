
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const*,int const,int const) ;
 float FUNC_1 (float) ;

float FUNC_2 (const u8 *VAR_0, const int VAR_1)
{
  float VAR_2 = 0.0;

  for (int VAR_3 = 0; VAR_3 < 256; VAR_3++)
  {
    const int VAR_4 = FUNC_0 (VAR_0, VAR_1, (const u8) VAR_3);

    if (VAR_4 == 0) continue;

    float VAR_5 = (float) VAR_4 / VAR_1;

    VAR_2 += -VAR_5 * FUNC_1 (VAR_5);
  }

  return VAR_2;
}
