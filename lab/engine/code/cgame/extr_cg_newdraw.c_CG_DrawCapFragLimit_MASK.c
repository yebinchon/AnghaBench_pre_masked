
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_4__ {int y; int x; } ;
typedef TYPE_1__ rectDef_t ;
typedef int qhandle_t ;
struct TYPE_5__ {scalar_t__ gametype; int capturelimit; int fraglimit; } ;


 int FUNC_0 (int ,int ,float,int ,int ,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4, qhandle_t VAR_5, int VAR_6) {
 int VAR_7 = (VAR_1.gametype >= VAR_0) ? VAR_1.capturelimit : VAR_1.fraglimit;
 FUNC_0(VAR_2->x, VAR_2->y, VAR_3, VAR_4, FUNC_1("%2i", VAR_7),0, 0, VAR_6);
}
