
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int disposition; int time_base; } ;
struct TYPE_5__ {int nb_packets; double duration; scalar_t__ abort_request; } ;
typedef TYPE_1__ PacketQueue ;
typedef TYPE_2__ AVStream ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVStream *VAR_2, int VAR_3, PacketQueue *VAR_4, int VAR_5) {
    return VAR_3 < 0 ||
           VAR_4->abort_request ||
           (VAR_2->disposition & VAR_0) ||



           VAR_4->nb_packets > VAR_5;
}
