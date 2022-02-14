
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2mouse_softc {scalar_t__ delta_y; scalar_t__ delta_x; int mtx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct ps2mouse_softc *VAR_0)
{
 FUNC_0(FUNC_1(&VAR_0->mtx));

 VAR_0->delta_x = 0;
 VAR_0->delta_y = 0;
}
