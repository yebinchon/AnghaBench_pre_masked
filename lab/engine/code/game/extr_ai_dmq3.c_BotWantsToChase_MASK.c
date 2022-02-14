
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ enemy; scalar_t__ ltgtype; } ;
typedef TYPE_1__ bot_state_t ;
typedef int aas_entityinfo_t ;
struct TYPE_11__ {scalar_t__ entitynum; } ;
struct TYPE_10__ {scalar_t__ entitynum; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;

int FUNC_7(bot_state_t *VAR_11) {
 aas_entityinfo_t VAR_12;

 if (VAR_7 == VAR_1) {

  if (FUNC_2(VAR_11))
   return VAR_8;

  FUNC_3(VAR_11->enemy, &VAR_12);
  if (FUNC_6(&VAR_12))
   return VAR_9;
 }
 if (VAR_11->ltgtype == VAR_5)
  return VAR_8;

 if (FUNC_1(VAR_11) > 50)
  return VAR_9;
 return VAR_8;
}
