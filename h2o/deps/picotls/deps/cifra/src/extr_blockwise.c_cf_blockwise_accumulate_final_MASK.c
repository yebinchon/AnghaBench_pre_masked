
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int (* cf_blockwise_in_fn ) (void*,int const*) ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const*,int const*,size_t) ;

void FUNC_3(uint8_t *VAR_0, size_t *VAR_1, size_t VAR_2,
                                   const void *VAR_3, size_t VAR_4,
                                   cf_blockwise_in_fn VAR_5,
                                   cf_blockwise_in_fn VAR_6,
                                   void *VAR_7)
{
  const uint8_t *VAR_8 = VAR_3;
  FUNC_1(VAR_0 && *VAR_1 < VAR_2);
  FUNC_1(VAR_3 || !VAR_4);
  FUNC_1(VAR_5 && VAR_7);


  if (*VAR_1 && VAR_4)
  {
    size_t VAR_9 = VAR_2 - *VAR_1;
    size_t VAR_10 = FUNC_0(VAR_9, VAR_4);

    FUNC_2(VAR_0 + *VAR_1, VAR_8, VAR_10);

    VAR_8 += VAR_10;
    VAR_4 -= VAR_10;
    *VAR_1 += VAR_10;


    if (*VAR_1 == VAR_2)
    {
      if (VAR_4 == 0)
        VAR_6(VAR_7, VAR_0);
      else
        VAR_5(VAR_7, VAR_0);
      *VAR_1 = 0;
    }
  }




  while (VAR_4 >= VAR_2)
  {

    FUNC_1(*VAR_1 == 0);

    if (VAR_4 == VAR_2)
      VAR_6(VAR_7, VAR_8);
    else
      VAR_5(VAR_7, VAR_8);
    VAR_8 += VAR_2;
    VAR_4 -= VAR_2;
  }


  while (VAR_4)
  {
    size_t VAR_11 = VAR_2 - *VAR_1;
    size_t VAR_12 = FUNC_0(VAR_11, VAR_4);

    FUNC_2(VAR_0 + *VAR_1, VAR_8, VAR_12);

    VAR_8 += VAR_12;
    VAR_4 -= VAR_12;
    *VAR_1 += VAR_12;



    FUNC_1(*VAR_1 < VAR_2);
  }
}
