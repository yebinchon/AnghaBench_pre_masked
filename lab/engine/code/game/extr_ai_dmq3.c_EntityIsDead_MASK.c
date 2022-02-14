
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {scalar_t__ pm_type; } ;
typedef TYPE_1__ playerState_t ;
struct TYPE_6__ {scalar_t__ number; } ;
typedef TYPE_2__ aas_entityinfo_t ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_1(aas_entityinfo_t *VAR_4) {
 playerState_t VAR_5;

 if (VAR_4->number >= 0 && VAR_4->number < VAR_0) {

  if (!FUNC_0(VAR_4->number, &VAR_5)) {
   return VAR_2;
  }

  if (VAR_5.pm_type != VAR_1) return VAR_3;
 }
 return VAR_2;
}
