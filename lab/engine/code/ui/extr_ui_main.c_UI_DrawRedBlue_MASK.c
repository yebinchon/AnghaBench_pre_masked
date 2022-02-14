
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_4__ {int y; int x; } ;
typedef TYPE_1__ rectDef_t ;
struct TYPE_5__ {scalar_t__ redBlue; } ;


 int FUNC_0 (int ,int ,float,int ,char*,int ,int ,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_1(rectDef_t *VAR_1, float VAR_2, vec4_t VAR_3, int VAR_4) {
  FUNC_0(VAR_1->x, VAR_1->y, VAR_2, VAR_3, (VAR_0.redBlue == 0) ? "Red" : "Blue", 0, 0, VAR_4);
}
