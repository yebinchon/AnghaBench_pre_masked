
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int len; int buf; } ;
struct TYPE_12__ {TYPE_2__ bytes; } ;
struct TYPE_14__ {TYPE_1__ u; } ;
typedef TYPE_3__ sl_value ;
struct TYPE_15__ {scalar_t__ start; } ;
typedef TYPE_4__ dstr ;
typedef int cf_chash ;


 int FUNC_0 (int ,int ,int ,int ,int ,int *,int ,int const*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_3__* FUNC_4 (int *,int ) ;

__attribute__((used)) static sl_value * FUNC_5(const cf_chash *VAR_0, sl_value *VAR_1, sl_value *VAR_2,
                            uint32_t VAR_3, uint32_t VAR_4)
{
  dstr VAR_5;
  FUNC_3(&VAR_5);
  if (FUNC_1(&VAR_5, VAR_4))
    return ((void*)0);

  FUNC_0(VAR_1->u.bytes.buf, VAR_1->u.bytes.len,
                 VAR_2->u.bytes.buf, VAR_2->u.bytes.len,
                 VAR_3,
                 (uint8_t *) VAR_5.start, VAR_4,
                 VAR_0);

  sl_value *VAR_6 = FUNC_4((uint8_t *) VAR_5.start, VAR_4);
  FUNC_2(&VAR_5);
  return VAR_6;
}
