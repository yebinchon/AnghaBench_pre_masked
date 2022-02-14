
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int serio; } ;
struct atkbd {int enabled; TYPE_1__ ps2dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct atkbd *VAR_0)
{
 FUNC_1(VAR_0->ps2dev.serio);
 VAR_0->enabled = 1;
 FUNC_0(VAR_0->ps2dev.serio);
}
