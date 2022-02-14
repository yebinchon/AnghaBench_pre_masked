
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int lit_utf8_size_t ;
typedef int lit_utf8_byte_t ;
typedef scalar_t__ lit_magic_string_ex_id_t ;
struct TYPE_15__ {int size; } ;
typedef TYPE_2__ ecma_utf8_string_t ;
struct TYPE_14__ {scalar_t__ magic_string_ex_id; } ;
struct TYPE_16__ {scalar_t__ refs_and_container; TYPE_1__ u; } ;
typedef TYPE_3__ ecma_string_t ;
struct TYPE_17__ {int size; } ;
typedef TYPE_4__ ecma_long_utf8_string_t ;
struct TYPE_18__ {int size; } ;
typedef TYPE_5__ ecma_ascii_string_t ;


 int const* FUNC_0 (TYPE_3__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (TYPE_3__ const*) ;
 scalar_t__ FUNC_3 (TYPE_3__ const*) ;
 int const* FUNC_4 (TYPE_3__ const*) ;



 int VAR_1 ;
 int FUNC_5 (TYPE_3__ const*) ;
 scalar_t__ VAR_2 ;
 int const* FUNC_6 (TYPE_3__ const*) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (scalar_t__) ;
 int const* FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int const* FUNC_11 (scalar_t__) ;

__attribute__((used)) static const lit_utf8_byte_t *
FUNC_12 (const ecma_string_t *VAR_4,
                            lit_utf8_size_t *VAR_5)
{
  if (FUNC_3 (VAR_4))
  {
    if (FUNC_1 (VAR_4) == VAR_0)
    {
      uint32_t VAR_6 = (uint32_t) FUNC_2 (VAR_4);

      if (VAR_6 >= VAR_3)
      {
        VAR_6 -= VAR_3;

        *VAR_5 = FUNC_8 (VAR_6);
        return FUNC_9 (VAR_6);
      }

      *VAR_5 = FUNC_10 (VAR_6);
      return FUNC_11 (VAR_6);
    }
  }

  FUNC_7 (VAR_4->refs_and_container >= VAR_2);

  switch (FUNC_5 (VAR_4))
  {
    case 128:
    {
      *VAR_5 = ((ecma_utf8_string_t *) VAR_4)->size;
      return FUNC_6 (VAR_4);
    }
    case 129:
    {
      *VAR_5 = ((ecma_long_utf8_string_t *) VAR_4)->size;
      return FUNC_4 (VAR_4);
    }
    case 130:
    {
      *VAR_5 = ((ecma_ascii_string_t *) VAR_4)->size;
      return FUNC_0 (VAR_4);
    }
    default:
    {
      FUNC_7 (FUNC_5 (VAR_4) == VAR_1);

      lit_magic_string_ex_id_t VAR_7 = VAR_3 - VAR_4->u.magic_string_ex_id;
      *VAR_5 = FUNC_8 (VAR_7);
      return FUNC_9 (VAR_7);
    }
  }
}
