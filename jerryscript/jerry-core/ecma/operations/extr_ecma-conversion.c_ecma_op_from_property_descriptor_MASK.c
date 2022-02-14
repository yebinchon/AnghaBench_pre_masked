
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ecma_value_t ;
struct TYPE_5__ {int flags; void* value; int * set_p; int * get_p; } ;
typedef TYPE_1__ ecma_property_descriptor_t ;
typedef int ecma_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 TYPE_1__ FUNC_4 () ;
 void* FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;

ecma_object_t *
FUNC_8 (const ecma_property_descriptor_t *VAR_16)
{

  ecma_object_t *VAR_17 = FUNC_6 ();

  ecma_value_t VAR_18;
  ecma_property_descriptor_t VAR_19 = FUNC_4 ();
  {
    VAR_19.flags = (VAR_6
                       | VAR_8
                       | VAR_7
                       | VAR_3
                       | VAR_2
                       | VAR_1
                       | VAR_0);
  }


  if (VAR_16->flags & (VAR_6 | VAR_8))
  {
    FUNC_0 ((VAR_19.flags & (VAR_6 | VAR_8))
                   == (VAR_6 | VAR_8));


    VAR_19.value = VAR_16->value;

    VAR_18 = FUNC_7 (VAR_17,
                                                     FUNC_1 (VAR_14),
                                                     &VAR_19);
    FUNC_0 (FUNC_2 (VAR_18));


    VAR_19.value = FUNC_3 (VAR_16->flags & VAR_7);

    VAR_18 = FUNC_7 (VAR_17,
                                                     FUNC_1 (VAR_15),
                                                     &VAR_19);
    FUNC_0 (FUNC_2 (VAR_18));
  }
  else
  {

    FUNC_0 (VAR_16->flags & (VAR_4 | VAR_5));


    if (VAR_16->get_p == ((void*)0))
    {
      VAR_19.value = VAR_9;
    }
    else
    {
      VAR_19.value = FUNC_5 (VAR_16->get_p);
    }

    VAR_18 = FUNC_7 (VAR_17,
                                                     FUNC_1 (VAR_12),
                                                     &VAR_19);
    FUNC_0 (FUNC_2 (VAR_18));


    if (VAR_16->set_p == ((void*)0))
    {
      VAR_19.value = VAR_9;
    }
    else
    {
      VAR_19.value = FUNC_5 (VAR_16->set_p);
    }

    VAR_18 = FUNC_7 (VAR_17,
                                                     FUNC_1 (VAR_13),
                                                     &VAR_19);
    FUNC_0 (FUNC_2 (VAR_18));
  }

  VAR_19.value = FUNC_3 (VAR_16->flags & VAR_2);

  VAR_18 = FUNC_7 (VAR_17,
                                                   FUNC_1 (VAR_11),
                                                   &VAR_19);
  FUNC_0 (FUNC_2 (VAR_18));

  VAR_19.value = FUNC_3 (VAR_16->flags & VAR_0);

  VAR_18 = FUNC_7 (VAR_17,
                                                   FUNC_1 (VAR_10),
                                                   &VAR_19);
  FUNC_0 (FUNC_2 (VAR_18));

  return VAR_17;
}
