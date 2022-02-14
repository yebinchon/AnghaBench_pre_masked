
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int teammatename ;
typedef int bot_state_t ;
struct TYPE_2__ {int preference; int name; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 TYPE_1__* VAR_1 ;

int FUNC_2(bot_state_t *VAR_2, int VAR_3) {
 char VAR_4[VAR_0];

 if (!VAR_1[VAR_3].preference) return 0;
 FUNC_0(VAR_3, VAR_4, sizeof(VAR_4));
 if (FUNC_1(VAR_4, VAR_1[VAR_3].name)) return 0;
 return VAR_1[VAR_3].preference;
}
