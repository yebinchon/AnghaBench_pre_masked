
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct dc_state {size_t stream_count; TYPE_2__** streams; } ;
struct dc {TYPE_3__* res_pool; } ;
struct TYPE_6__ {int hubbub; } ;
struct TYPE_4__ {scalar_t__ timing_3d_format; } ;
struct TYPE_5__ {TYPE_1__ timing; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct dc *VAR_1, struct dc_state *VAR_2)
{
 uint8_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->stream_count; VAR_3++) {
  if (VAR_2->streams[VAR_3]->timing.timing_3d_format
    == VAR_0) {



   FUNC_0(VAR_1->res_pool->hubbub, 0);
   break;
  }
 }
}
