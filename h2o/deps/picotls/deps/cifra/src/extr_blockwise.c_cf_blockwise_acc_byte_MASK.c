
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int (* cf_blockwise_in_fn ) (void*,int *) ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *,int ,size_t) ;

void FUNC_2(uint8_t *VAR_0, size_t *VAR_1,
                           size_t VAR_2,
                           uint8_t VAR_3, size_t VAR_4,
                           cf_blockwise_in_fn VAR_5,
                           void *VAR_6)
{

  int VAR_7 = 0;

  while (VAR_4)
  {
    size_t VAR_8 = *VAR_1;
    size_t VAR_9 = FUNC_0(VAR_4, VAR_2 - VAR_8);

    if (!VAR_7)
      FUNC_1(VAR_0 + VAR_8, VAR_3, VAR_9);

    if (VAR_8 == 0 && VAR_9 == VAR_2)
      VAR_7 = 1;

    if (VAR_8 + VAR_9 == VAR_2)
    {
      VAR_5(VAR_6, VAR_0);
      *VAR_1 = 0;
    } else {
      *VAR_1 += VAR_9;
    }

    VAR_4 -= VAR_9;
  }
}
