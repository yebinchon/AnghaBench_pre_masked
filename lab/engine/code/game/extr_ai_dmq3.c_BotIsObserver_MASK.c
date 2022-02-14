
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ pm_type; } ;
struct TYPE_5__ {scalar_t__ client; TYPE_1__ cur_ps; } ;
typedef TYPE_2__ bot_state_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,char*,int) ;

qboolean FUNC_3(bot_state_t *VAR_6) {
 char VAR_7[VAR_1];
 if (VAR_6->cur_ps.pm_type == VAR_2) return VAR_5;
 FUNC_2(VAR_0+VAR_6->client, VAR_7, sizeof(VAR_7));
 if (FUNC_1(FUNC_0(VAR_7, "t")) == VAR_3) return VAR_5;
 return VAR_4;
}
