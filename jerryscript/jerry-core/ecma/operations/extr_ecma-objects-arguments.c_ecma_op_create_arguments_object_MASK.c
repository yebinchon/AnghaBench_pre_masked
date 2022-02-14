
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ ecma_value_t ;
typedef int ecma_string_t ;
struct TYPE_23__ {int value; } ;
typedef TYPE_6__ ecma_property_value_t ;
struct TYPE_24__ {int flags; int * get_p; int * set_p; } ;
typedef TYPE_7__ ecma_property_descriptor_t ;
typedef int ecma_object_t ;
typedef scalar_t__ ecma_length_t ;
struct TYPE_21__ {int class_id; } ;
struct TYPE_19__ {scalar_t__ length; } ;
struct TYPE_18__ {int lex_env_cp; } ;
struct TYPE_20__ {TYPE_2__ u1; TYPE_1__ u2; int type; } ;
struct TYPE_22__ {TYPE_4__ class_prop; TYPE_3__ pseudo_array; } ;
struct TYPE_25__ {TYPE_5__ u; } ;
typedef TYPE_8__ ecma_extended_object_t ;
struct TYPE_26__ {int status_flags; scalar_t__ size; } ;
typedef TYPE_9__ ecma_compiled_code_t ;
struct TYPE_16__ {scalar_t__ argument_end; } ;
typedef TYPE_10__ cbc_uint8_arguments_t ;
struct TYPE_17__ {scalar_t__ argument_end; } ;
typedef TYPE_11__ cbc_uint16_arguments_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int ) ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__ const) ;
 TYPE_6__* FUNC_4 (int *,int *,int ,int *) ;
 int * FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int * FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 TYPE_7__ FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__) ;
 int * FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *,int *,int ) ;
 scalar_t__ FUNC_17 (int *,int *,int) ;
 scalar_t__ FUNC_18 (int *,int *,TYPE_7__*) ;
 scalar_t__ FUNC_19 (int *,int *,int ,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (scalar_t__*,int *,size_t) ;

void
FUNC_22 (ecma_object_t *VAR_21,
                                 ecma_object_t *VAR_22,

                                 const ecma_value_t *VAR_23,
                                 ecma_length_t VAR_24,
                                 const ecma_compiled_code_t *VAR_25)
{
  bool VAR_26 = (VAR_25->status_flags & VAR_1) != 0;

  ecma_length_t VAR_27;

  if (VAR_25->status_flags & VAR_2)
  {
    cbc_uint16_arguments_t *VAR_28 = (cbc_uint16_arguments_t *) VAR_25;

    VAR_27 = VAR_28->argument_end;
  }
  else
  {
    cbc_uint8_arguments_t *VAR_29 = (cbc_uint8_arguments_t *) VAR_25;

    VAR_27 = VAR_29->argument_end;
  }

  ecma_object_t *VAR_30 = FUNC_2 (VAR_3);

  ecma_object_t *VAR_31;

  if ((VAR_25->status_flags & VAR_0)
      && VAR_24 > 0
      && VAR_27 > 0)
  {
    size_t VAR_32 = VAR_27 * sizeof (ecma_value_t);

    VAR_31 = FUNC_5 (VAR_30,
                                sizeof (ecma_extended_object_t) + VAR_32,
                                VAR_6);

    ecma_extended_object_t *VAR_33 = (ecma_extended_object_t *) VAR_31;

    VAR_33->u.pseudo_array.type = VAR_13;

    FUNC_0 (VAR_33->u.pseudo_array.u2.lex_env_cp, VAR_22);

    VAR_33->u.pseudo_array.u1.length = (uint16_t) VAR_27;

    ecma_value_t *VAR_34 = (ecma_value_t *) (VAR_33 + 1);

    uint8_t *VAR_35 = (uint8_t *) VAR_25;
    VAR_35 += ((size_t) VAR_25->size) << VAR_15;
    VAR_35 -= VAR_32;

    FUNC_21 (VAR_34, VAR_35, VAR_32);

    for (ecma_length_t VAR_36 = 0; VAR_36 < VAR_27; VAR_36++)
    {
      if (VAR_34[VAR_36] != VAR_14)
      {
        ecma_string_t *VAR_37 = FUNC_9 (VAR_34[VAR_36]);
        FUNC_20 (VAR_37);
      }
    }
  }
  else
  {
    VAR_31 = FUNC_5 (VAR_30, sizeof (ecma_extended_object_t), VAR_5);

    ecma_extended_object_t *VAR_38 = (ecma_extended_object_t *) VAR_31;
    VAR_38->u.class_prop.class_id = VAR_17;
  }

  ecma_property_value_t *VAR_39;


  for (ecma_length_t VAR_40 = 0;
       VAR_40 < VAR_24;
       VAR_40++)
  {
    ecma_string_t *VAR_41 = FUNC_15 (VAR_40);

    VAR_39 = FUNC_4 (VAR_31,
                                                    VAR_41,
                                                    VAR_7,
                                                    ((void*)0));

    VAR_39->value = FUNC_3 (VAR_23[VAR_40]);

    FUNC_6 (VAR_41);
  }


  VAR_39 = FUNC_4 (VAR_31,
                                                  FUNC_8 (VAR_20),
                                                  VAR_8,
                                                  ((void*)0));

  VAR_39->value = FUNC_14 (VAR_24);

  ecma_property_descriptor_t VAR_42 = FUNC_12 ();


  if (!VAR_26)
  {
    VAR_39 = FUNC_4 (VAR_31,
                                                    FUNC_8 (VAR_18),
                                                    VAR_8,
                                                    ((void*)0));

    VAR_39->value = FUNC_13 (VAR_21);
  }
  else
  {
    ecma_object_t *VAR_43 = FUNC_2 (VAR_4);


    VAR_42 = FUNC_12 ();
    {
      VAR_42.flags = (VAR_11
                         | VAR_12
                         | VAR_10
                         | VAR_9);
    }
    VAR_42.set_p = VAR_43;
    VAR_42.get_p = VAR_43;

    ecma_value_t VAR_44 = FUNC_18 (VAR_31,
                                                                  FUNC_8 (VAR_18),
                                                                  &VAR_42);

    FUNC_1 (FUNC_11 (VAR_44));

    VAR_44 = FUNC_18 (VAR_31,
                                                     FUNC_8 (VAR_19),
                                                     &VAR_42);
    FUNC_1 (FUNC_11 (VAR_44));
  }

  ecma_string_t *VAR_45 = FUNC_8 (VAR_16);

  if (VAR_26)
  {
    FUNC_16 (VAR_22,
                                      VAR_45,
                                      FUNC_13 (VAR_31));
  }
  else
  {
    ecma_value_t VAR_46 = FUNC_17 (VAR_22,
                                                              VAR_45,
                                                              0);
    FUNC_1 (FUNC_10 (VAR_46));

    VAR_46 = FUNC_19 (VAR_22,
                                              VAR_45,
                                              FUNC_13 (VAR_31),
                                              0);

    FUNC_1 (FUNC_10 (VAR_46));
  }

  FUNC_7 (VAR_31);
}
