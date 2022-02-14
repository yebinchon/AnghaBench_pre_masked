
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int len; int buf; } ;
struct TYPE_15__ {TYPE_1__ bytes; } ;
struct TYPE_16__ {TYPE_2__ u; } ;
typedef TYPE_3__ sl_value ;
typedef int sl_symboltab ;
typedef int sl_iter ;
typedef int cf_chash_ctx ;
struct TYPE_17__ {scalar_t__ ctxsz; int hashsz; int (* digest ) (int *,int *) ;int (* update ) (int *,int ,int ) ;int (* init ) (int *) ;} ;
typedef TYPE_4__ cf_chash ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 () ;
 TYPE_3__* FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int *,int) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static sl_value * FUNC_9(sl_value *VAR_4, sl_value *VAR_5, sl_symboltab *VAR_6, const cf_chash *VAR_7)
{
  sl_iter VAR_8 = FUNC_4(VAR_5);
  sl_value *VAR_9 = FUNC_3(&VAR_8, VAR_3, VAR_2, VAR_6);

  if (!VAR_9)
    return FUNC_2();

  cf_chash_ctx VAR_10;
  FUNC_0(VAR_7->ctxsz <= VAR_0);
  VAR_7->init(&VAR_10);
  VAR_7->update(&VAR_10, VAR_9->u.bytes.buf, VAR_9->u.bytes.len);
  FUNC_1(VAR_9);

  uint8_t VAR_11[VAR_1];
  FUNC_0(VAR_7->hashsz <= VAR_1);
  VAR_7->digest(&VAR_10, VAR_11);

  return FUNC_5(VAR_11, VAR_7->hashsz);
}
