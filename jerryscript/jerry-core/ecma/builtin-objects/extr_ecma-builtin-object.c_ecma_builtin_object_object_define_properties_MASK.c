
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ecma_value_t ;
typedef int ecma_object_t ;
struct TYPE_10__ {size_t item_count; int * buffer_p; } ;
typedef TYPE_1__ ecma_collection_t ;
struct TYPE_11__ {int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,size_t,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,TYPE_2__*) ;
 int FUNC_11 (int *,int ) ;
 TYPE_1__* FUNC_12 (int *,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_15 (int *) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static ecma_value_t
FUNC_16 (ecma_object_t *VAR_6,
                                              ecma_value_t VAR_7)
{

  ecma_value_t VAR_8 = FUNC_13 (VAR_7);

  if (FUNC_0 (VAR_8))
  {
    return VAR_8;
  }

  ecma_object_t *VAR_9 = FUNC_7 (VAR_8);

  ecma_collection_t *VAR_10 = FUNC_12 (VAR_9, VAR_0
                                                                                | VAR_1);
  ecma_value_t VAR_11 = VAR_3;

  ecma_value_t *VAR_12 = VAR_10->buffer_p;


  FUNC_1 (VAR_5, VAR_10->item_count, VAR_4);
  uint32_t VAR_13 = 0;

  for (uint32_t VAR_14 = 0; VAR_14 < VAR_10->item_count; VAR_14++)
  {

    ecma_value_t VAR_15 = FUNC_11 (VAR_9, FUNC_8 (VAR_12[VAR_14]));

    if (FUNC_0 (VAR_15))
    {
      goto cleanup;
    }


    ecma_value_t VAR_16 = FUNC_14 (VAR_15,
                                                               &VAR_5[VAR_13]);

    VAR_5[VAR_13].flags |= VAR_2;

    FUNC_6 (VAR_15);

    if (FUNC_0 (VAR_16))
    {
      goto cleanup;
    }

    VAR_13++;

    FUNC_6 (VAR_16);
  }


  VAR_12 = VAR_10->buffer_p;

  for (uint32_t VAR_17 = 0; VAR_17 < VAR_10->item_count; VAR_17++)
  {
    ecma_value_t VAR_18 = FUNC_10 (VAR_6,
                                                                            FUNC_8 (VAR_12[VAR_17]),
                                                                            &VAR_5[VAR_17]);
    if (FUNC_0 (VAR_18))
    {
      goto cleanup;
    }

    FUNC_6 (VAR_18);
  }

  FUNC_15 (VAR_6);
  VAR_11 = FUNC_9 (VAR_6);

cleanup:

  for (uint32_t VAR_19 = 0;
       VAR_19 < VAR_13;
       VAR_19++)
  {
    FUNC_5 (&VAR_5[VAR_19]);
  }

  FUNC_2 (VAR_5);

  FUNC_3 (VAR_10);

  FUNC_4 (VAR_9);

  return VAR_11;
}
