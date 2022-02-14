
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_2__ {scalar_t__ b_bytes; scalar_t__ b_packets; } ;
struct bw_meter {int bm_flags; int bm_time_hash; struct bw_meter* bm_time_next; TYPE_1__ bm_measured; struct timeval bm_start_time; } ;


 int VAR_0 ;
 int FUNC_0 (struct bw_meter*,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 struct bw_meter** VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct bw_meter *VAR_3, struct timeval *VAR_4)
{
    int VAR_5;

    FUNC_1();

    if (!(VAR_3->bm_flags & VAR_0))
 return;




    VAR_3->bm_start_time = *VAR_4;
    VAR_3->bm_measured.b_packets = 0;
    VAR_3->bm_measured.b_bytes = 0;
    VAR_3->bm_flags &= ~VAR_1;




    FUNC_0(VAR_3, VAR_5);
    VAR_3->bm_time_next = VAR_2[VAR_5];
    VAR_2[VAR_5] = VAR_3;
    VAR_3->bm_time_hash = VAR_5;
}
