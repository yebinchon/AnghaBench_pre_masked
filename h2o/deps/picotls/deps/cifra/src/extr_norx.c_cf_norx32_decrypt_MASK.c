
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int norx32_ctx ;


 int FUNC_0 (int *,int const*,int *,size_t) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int const*,int const*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int const*,int) ;

int FUNC_7(const uint8_t VAR_0[16],
                      const uint8_t VAR_1[8],
                      const uint8_t *VAR_2, size_t VAR_3,
                      const uint8_t *VAR_4, size_t VAR_5,
                      const uint8_t *VAR_6, size_t VAR_7,
                      const uint8_t VAR_8[16],
                      uint8_t *VAR_9)
{
  norx32_ctx VAR_10;
  uint8_t VAR_11[16];

  FUNC_4(&VAR_10, VAR_0, VAR_1);
  FUNC_1(&VAR_10, VAR_2, VAR_3);
  FUNC_0(&VAR_10, VAR_4, VAR_9, VAR_5);
  FUNC_2(&VAR_10, VAR_6, VAR_7);
  FUNC_3(&VAR_10, VAR_11);

  int VAR_12 = 0;

  if (!FUNC_6(VAR_11, VAR_8, sizeof VAR_11))
  {
    VAR_12 = 1;
    FUNC_5(VAR_9, VAR_5);
    FUNC_5(VAR_11, sizeof VAR_11);
  }

  FUNC_5(&VAR_10, sizeof VAR_10);
  return VAR_12;
}
