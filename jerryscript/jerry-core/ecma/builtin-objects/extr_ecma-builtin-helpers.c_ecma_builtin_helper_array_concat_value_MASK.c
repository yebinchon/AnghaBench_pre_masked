
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int ecma_value_t ;
typedef int ecma_object_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,int ,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,scalar_t__) ;

ecma_value_t
FUNC_11 (ecma_object_t *VAR_3,
                                        uint32_t *VAR_4,
                                        ecma_value_t VAR_5)
{

  if (FUNC_8 (VAR_5))
  {
    ecma_object_t *VAR_6 = FUNC_5 (VAR_5);

    if (FUNC_6 (VAR_6) == VAR_0)
    {

      uint32_t VAR_7 = FUNC_2 (VAR_6);


      for (uint32_t VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
      {

        ecma_value_t VAR_9 = FUNC_10 (VAR_6, VAR_8);

        if (FUNC_0 (VAR_9))
        {
          return VAR_9;
        }

        if (!FUNC_7 (VAR_9))
        {
          continue;
        }



        ecma_value_t VAR_10 = FUNC_3 (VAR_3,
                                                                       *VAR_4 + VAR_8,
                                                                       VAR_9,
                                                                       VAR_1);

        FUNC_1 (FUNC_9 (VAR_10));
        FUNC_4 (VAR_9);
      }

      *VAR_4 += VAR_7;
      return VAR_2;
    }
  }



  ecma_value_t VAR_11 = FUNC_3 (VAR_3,
                                                                 (*VAR_4)++,
                                                                 VAR_5,
                                                                 VAR_1);
  FUNC_1 (FUNC_9 (VAR_11));

  return VAR_2;
}
