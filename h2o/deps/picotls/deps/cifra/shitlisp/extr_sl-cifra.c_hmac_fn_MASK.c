
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {int len; int buf; } ;
struct TYPE_16__ {TYPE_1__ bytes; } ;
struct TYPE_17__ {TYPE_2__ u; } ;
typedef TYPE_3__ sl_value ;
typedef int sl_symboltab ;
typedef int sl_iter ;
struct TYPE_18__ {int hashsz; } ;
typedef TYPE_4__ cf_chash ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int *,TYPE_4__ const*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 () ;
 TYPE_3__* FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static sl_value * FUNC_6(sl_value *VAR_3, sl_value *VAR_4, sl_symboltab *VAR_5, const cf_chash *VAR_6)
{
  sl_iter VAR_7 = FUNC_4(VAR_4);
  sl_value *VAR_8 = FUNC_3(&VAR_7, VAR_2, VAR_1, VAR_5);
  sl_value *VAR_9 = FUNC_3(&VAR_7, VAR_2, VAR_1, VAR_5);

  if (!VAR_8 || !VAR_9)
  {
    FUNC_1(VAR_8);
    FUNC_1(VAR_9);
    return FUNC_2();
  }

  uint8_t VAR_10[VAR_0];
  FUNC_0(VAR_8->u.bytes.buf, VAR_8->u.bytes.len,
          VAR_9->u.bytes.buf, VAR_9->u.bytes.len,
          VAR_10,
          VAR_6);

  FUNC_1(VAR_8);
  FUNC_1(VAR_9);
  return FUNC_5(VAR_10, VAR_6->hashsz);
}
