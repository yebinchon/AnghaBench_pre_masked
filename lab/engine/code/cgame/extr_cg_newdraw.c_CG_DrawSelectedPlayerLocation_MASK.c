
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_5__ {scalar_t__ h; scalar_t__ y; int x; } ;
typedef TYPE_1__ rectDef_t ;
struct TYPE_6__ {scalar_t__ location; } ;
typedef TYPE_2__ clientInfo_t ;
struct TYPE_7__ {TYPE_2__* clientinfo; } ;


 char* FUNC_0 (scalar_t__) ;
 size_t FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__,float,int ,char const*,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_3( rectDef_t *VAR_3, float VAR_4, vec4_t VAR_5, int VAR_6 ) {
 clientInfo_t *VAR_7;
  VAR_7 = VAR_1.clientinfo + VAR_2[FUNC_1()];
  if (VAR_7) {
  const char *VAR_8 = FUNC_0(VAR_0 + VAR_7->location);
  if (!VAR_8 || !*VAR_8) {
   VAR_8 = "unknown";
  }
    FUNC_2(VAR_3->x, VAR_3->y + VAR_3->h, VAR_4, VAR_5, VAR_8, 0, 0, VAR_6);
  }
}
