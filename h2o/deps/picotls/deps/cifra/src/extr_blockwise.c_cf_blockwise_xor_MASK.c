
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int (* cf_blockwise_out_fn ) (void*,int *) ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,int *,size_t) ;

void FUNC_3(uint8_t *VAR_0, size_t *VAR_1, size_t VAR_2,
                      const void *VAR_3, void *VAR_4, size_t VAR_5,
                      cf_blockwise_out_fn VAR_6, void *VAR_7)
{
  const uint8_t *VAR_8 = VAR_3;
  uint8_t *VAR_9 = VAR_4;

  FUNC_1(VAR_0 && *VAR_1 < VAR_2);
  FUNC_1(VAR_3 || !VAR_5);
  FUNC_1(VAR_6 && VAR_7);

  while (VAR_5)
  {

    if (*VAR_1 == 0)
    {
      VAR_6(VAR_7, VAR_0);
      *VAR_1 = VAR_2;
    }

    size_t VAR_10 = VAR_2 - *VAR_1;
    size_t VAR_11 = FUNC_0(*VAR_1, VAR_5);
    FUNC_2(VAR_9, VAR_8, VAR_0 + VAR_10, VAR_11);
    *VAR_1 -= VAR_11;
    VAR_5 -= VAR_11;
    VAR_9 += VAR_11;
    VAR_8 += VAR_11;
  }
}
