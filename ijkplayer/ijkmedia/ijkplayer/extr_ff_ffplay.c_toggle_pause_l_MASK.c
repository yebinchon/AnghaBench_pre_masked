
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int serial; } ;
struct TYPE_7__ {int pause_req; scalar_t__ step; TYPE_5__ audclk; TYPE_5__ vidclk; } ;
typedef TYPE_1__ VideoState ;
struct TYPE_8__ {int auto_resume; TYPE_1__* is; } ;
typedef TYPE_2__ FFPlayer ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(FFPlayer *VAR_0, int VAR_1)
{
    VideoState *VAR_2 = VAR_0->is;
    if (VAR_2->pause_req && !VAR_1) {
        FUNC_1(&VAR_2->vidclk, FUNC_0(&VAR_2->vidclk), VAR_2->vidclk.serial);
        FUNC_1(&VAR_2->audclk, FUNC_0(&VAR_2->audclk), VAR_2->audclk.serial);
    }
    VAR_2->pause_req = VAR_1;
    VAR_0->auto_resume = !VAR_1;
    FUNC_2(VAR_0);
    VAR_2->step = 0;
}
