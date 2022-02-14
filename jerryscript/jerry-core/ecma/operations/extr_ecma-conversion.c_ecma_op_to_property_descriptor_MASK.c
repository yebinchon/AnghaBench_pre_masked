
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int ecma_value_t ;
struct TYPE_5__ {int flags; int * set_p; int * get_p; int value; } ;
typedef TYPE_1__ ecma_property_descriptor_t ;
typedef int ecma_object_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 TYPE_1__ FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

ecma_value_t
FUNC_19 (ecma_value_t VAR_23,
                                ecma_property_descriptor_t *VAR_24)


{
  ecma_value_t VAR_25 = VAR_10;


  if (!FUNC_11 (VAR_23))
  {
    VAR_25 = FUNC_17 (FUNC_0 ("Expected an object."));
  }
  else
  {
    ecma_object_t *VAR_26 = FUNC_8 (VAR_23);


    ecma_property_descriptor_t VAR_27 = FUNC_13 ();


    FUNC_3 (VAR_18,
                    FUNC_15 (VAR_26, FUNC_7 (VAR_12)),
                    VAR_25);

    if (FUNC_10 (VAR_18))
    {
      uint32_t VAR_28 = (FUNC_16 (VAR_18) ? VAR_2
                                                                           : VAR_9);

      VAR_27.flags |= (uint16_t) (VAR_3 | VAR_28);
    }

    FUNC_1 (VAR_18);

    if (!FUNC_2 (VAR_25))
    {
      FUNC_4 (FUNC_9 (VAR_25));


      FUNC_3 (VAR_17,
                      FUNC_15 (VAR_26, FUNC_7 (VAR_11)),
                      VAR_25);

      if (FUNC_10 (VAR_17))
      {
        uint32_t VAR_29 = (FUNC_16 (VAR_17) ? VAR_0
                                                                                 : VAR_9);

        VAR_27.flags |= (uint16_t) (VAR_1 | VAR_29);
      }

      FUNC_1 (VAR_17);
    }

    if (!FUNC_2 (VAR_25))
    {
      FUNC_4 (FUNC_9 (VAR_25));


      FUNC_3 (VAR_21,
                      FUNC_15 (VAR_26, FUNC_7 (VAR_15)),
                      VAR_25);

      if (FUNC_10 (VAR_21))
      {
        VAR_27.flags |= VAR_6;
        VAR_27.value = FUNC_5 (VAR_21);
      }

      FUNC_1 (VAR_21);
    }

    if (!FUNC_2 (VAR_25))
    {
      FUNC_4 (FUNC_9 (VAR_25));


      FUNC_3 (VAR_22,
                      FUNC_15 (VAR_26, FUNC_7 (VAR_16)),
                      VAR_25);

      if (FUNC_10 (VAR_22))
      {
        uint32_t VAR_30 = (FUNC_16 (VAR_22) ? VAR_7
                                                                         : VAR_9);

        VAR_27.flags |= (uint16_t) (VAR_8 | VAR_30);
      }

      FUNC_1 (VAR_22);
    }

    if (!FUNC_2 (VAR_25))
    {
      FUNC_4 (FUNC_9 (VAR_25));


      FUNC_3 (VAR_19,
                      FUNC_15 (VAR_26, FUNC_7 (VAR_13)),
                      VAR_25);

      if (FUNC_10 (VAR_19))
      {
        if (!FUNC_14 (VAR_19)
            && !FUNC_12 (VAR_19))
        {
          VAR_25 = FUNC_17 (FUNC_0 ("Expected a function."));
        }
        else
        {
          VAR_27.flags |= VAR_4;

          if (FUNC_12 (VAR_19))
          {
            VAR_27.get_p = ((void*)0);
          }
          else
          {
            FUNC_4 (FUNC_11 (VAR_19));

            ecma_object_t *VAR_31 = FUNC_8 (VAR_19);
            FUNC_18 (VAR_31);

            VAR_27.get_p = VAR_31;
          }
        }
      }

      FUNC_1 (VAR_19);
    }

    if (!FUNC_2 (VAR_25))
    {
      FUNC_4 (FUNC_9 (VAR_25));


      FUNC_3 (VAR_20,
                      FUNC_15 (VAR_26, FUNC_7 (VAR_14)),
                      VAR_25);

      if (FUNC_10 (VAR_20))
      {
        if (!FUNC_14 (VAR_20)
            && !FUNC_12 (VAR_20))
        {
          VAR_25 = FUNC_17 (FUNC_0 ("Expected a function."));
        }
        else
        {
          VAR_27.flags |= VAR_5;

          if (FUNC_12 (VAR_20))
          {
            VAR_27.set_p = ((void*)0);
          }
          else
          {
            FUNC_4 (FUNC_11 (VAR_20));

            ecma_object_t *VAR_32 = FUNC_8 (VAR_20);
            FUNC_18 (VAR_32);

            VAR_27.set_p = VAR_32;
          }
        }
      }

      FUNC_1 (VAR_20);
    }

    if (!FUNC_2 (VAR_25))
    {
      FUNC_4 (FUNC_9 (VAR_25));


      if ((VAR_27.flags & (VAR_6 | VAR_8))
           && (VAR_27.flags & (VAR_4 | VAR_5)))
      {
        VAR_25 = FUNC_17 (FUNC_0 ("Accessors cannot be writable."));
      }
    }

    if (!FUNC_2 (VAR_25))
    {
      FUNC_4 (FUNC_9 (VAR_25));
    }
    else
    {
      FUNC_6 (&VAR_27);
    }

    *VAR_24 = VAR_27;
  }

  return VAR_25;
}
