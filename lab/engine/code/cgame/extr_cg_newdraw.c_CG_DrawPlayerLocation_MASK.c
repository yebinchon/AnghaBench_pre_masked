
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_10__ {scalar_t__ h; scalar_t__ y; int x; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_11__ {scalar_t__ location; } ;
typedef TYPE_4__ clientInfo_t ;
struct TYPE_13__ {TYPE_2__* snap; } ;
struct TYPE_12__ {TYPE_4__* clientinfo; } ;
struct TYPE_8__ {size_t clientNum; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,float,int ,char const*,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_5__ VAR_2 ;

__attribute__((used)) static void FUNC_2( rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5, int VAR_6 ) {
 clientInfo_t *VAR_7 = &VAR_2.clientinfo[VAR_1.snap->ps.clientNum];
  if (VAR_7) {
  const char *VAR_8 = FUNC_0(VAR_0 + VAR_7->location);
  if (!VAR_8 || !*VAR_8) {
   VAR_8 = "unknown";
  }
    FUNC_1(VAR_3->x, VAR_3->y + VAR_3->h, VAR_4, VAR_5, VAR_8, 0, 0, VAR_6);
  }
}
