
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_15__ {int * v; } ;
struct TYPE_16__ {TYPE_14__ bn; } ;
struct TYPE_17__ {TYPE_1__ integer; } ;
struct TYPE_18__ {TYPE_2__ u; } ;
typedef TYPE_3__ sl_value ;
typedef int sl_symboltab ;
typedef int sl_iter ;
typedef int cf_chash ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_14__*) ;
 TYPE_3__* FUNC_2 (int const*,TYPE_3__*,TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 () ;
 TYPE_3__* FUNC_5 (int *,int ,int ,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_2 ;

__attribute__((used)) static sl_value * FUNC_7(sl_value *VAR_3, sl_value *VAR_4, sl_symboltab *VAR_5, const cf_chash *VAR_6)
{
  sl_iter VAR_7 = FUNC_6(VAR_4);
  sl_value *VAR_8 = FUNC_5(&VAR_7, VAR_2, VAR_0, VAR_5);
  sl_value *VAR_9 = FUNC_5(&VAR_7, VAR_2, VAR_0, VAR_5);
  sl_value *VAR_10 = FUNC_5(&VAR_7, VAR_2, VAR_1, VAR_5);
  sl_value *VAR_11 = FUNC_5(&VAR_7, VAR_2, VAR_1, VAR_5);

  sl_value *VAR_12;

  if (!VAR_8 || !VAR_9 || !VAR_10 || !VAR_11)
    VAR_12 = FUNC_4();
  else
  {
    FUNC_0(FUNC_1(&VAR_10->u.integer.bn) == 1);
    FUNC_0(FUNC_1(&VAR_11->u.integer.bn) == 1);
    VAR_12 = FUNC_2(VAR_6, VAR_8, VAR_9,
                    VAR_10->u.integer.bn.v[0],
                    VAR_11->u.integer.bn.v[0]);
  }

  FUNC_3(VAR_8);
  FUNC_3(VAR_9);
  FUNC_3(VAR_10);
  FUNC_3(VAR_11);
  return VAR_12;
}
