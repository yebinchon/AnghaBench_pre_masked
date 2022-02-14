
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ lit_magic_string_ex_id_t ;
struct TYPE_5__ {scalar_t__ magic_string_ex_id; } ;
struct TYPE_6__ {int refs_and_container; TYPE_1__ u; } ;
typedef TYPE_2__ ecma_string_t ;


 scalar_t__ FUNC_0 (int ,uintptr_t) ;
 int VAR_0 ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static ecma_string_t *
FUNC_5 (lit_magic_string_ex_id_t VAR_5)
{
  FUNC_1 (VAR_5 < FUNC_4 ());

  uintptr_t VAR_6 = (uintptr_t) (VAR_5 + VAR_4);

  if (FUNC_2 (VAR_6 <= VAR_1))
  {
    return (ecma_string_t *) FUNC_0 (VAR_0, VAR_6);
  }

  ecma_string_t *VAR_7 = FUNC_3 ();

  VAR_7->refs_and_container = VAR_2 | VAR_3;
  VAR_7->u.magic_string_ex_id = VAR_5 + VAR_4;

  return VAR_7;
}
