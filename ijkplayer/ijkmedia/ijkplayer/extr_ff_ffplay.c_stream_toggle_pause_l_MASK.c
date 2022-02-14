
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {double last_updated; int paused; int serial; } ;
struct TYPE_6__ {int paused; scalar_t__ read_pause_return; TYPE_4__ extclk; TYPE_4__ vidclk; TYPE_4__ audclk; scalar_t__ buffering_on; scalar_t__ pause_req; scalar_t__ step; int frame_timer; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_7__ {int aout; TYPE_1__* is; } ;
typedef TYPE_2__ FFPlayer ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 double FUNC_2 () ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void FUNC_5(FFPlayer *VAR_1, int VAR_2)
{
    VideoState *VAR_3 = VAR_1->is;
    if (VAR_3->paused && !VAR_2) {
        VAR_3->frame_timer += FUNC_2() / 1000000.0 - VAR_3->vidclk.last_updated;






        FUNC_4(&VAR_3->vidclk, FUNC_3(&VAR_3->vidclk), VAR_3->vidclk.serial);
        FUNC_4(&VAR_3->audclk, FUNC_3(&VAR_3->audclk), VAR_3->audclk.serial);
    } else {
    }
    FUNC_4(&VAR_3->extclk, FUNC_3(&VAR_3->extclk), VAR_3->extclk.serial);
    if (VAR_3->step && (VAR_3->pause_req || VAR_3->buffering_on)) {
        VAR_3->paused = VAR_3->vidclk.paused = VAR_3->extclk.paused = VAR_2;
    } else {
        VAR_3->paused = VAR_3->audclk.paused = VAR_3->vidclk.paused = VAR_3->extclk.paused = VAR_2;
        FUNC_1(VAR_1->aout, VAR_2);
    }
}
