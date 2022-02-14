
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2mouse_softc {int resolution; int sampling_rate; scalar_t__ delta_y; scalar_t__ delta_x; scalar_t__ cur_y; scalar_t__ cur_x; int status; int mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ps2mouse_softc*) ;
 int FUNC_2 (struct ps2mouse_softc*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ps2mouse_softc *VAR_1)
{
 FUNC_0(FUNC_3(&VAR_1->mtx));
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 VAR_1->status = VAR_0;
 VAR_1->resolution = 4;
 VAR_1->sampling_rate = 100;

 VAR_1->cur_x = 0;
 VAR_1->cur_y = 0;
 VAR_1->delta_x = 0;
 VAR_1->delta_y = 0;
}
