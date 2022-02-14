
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned long u32 ;
struct parser_exec_state {size_t ring_id; TYPE_4__* workload; TYPE_3__* vgpu; } ;
struct TYPE_10__ {int pipe_control_notify; } ;
struct TYPE_9__ {int pending_events; } ;
struct TYPE_8__ {unsigned long* hws_pga; TYPE_2__* gvt; } ;
struct TYPE_6__ {int gmadr_bytes_in_cmd; } ;
struct TYPE_7__ {TYPE_1__ device_info; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct parser_exec_state*,unsigned long,int,int) ;
 int FUNC_2 (struct parser_exec_state*,int) ;
 TYPE_5__* VAR_4 ;
 int FUNC_3 (struct parser_exec_state*,int) ;
 int FUNC_4 (struct parser_exec_state*,int) ;
 int FUNC_5 (struct parser_exec_state*,int,int,char*) ;
 int FUNC_6 (struct parser_exec_state*,int) ;
 int FUNC_7 (struct parser_exec_state*,int ,unsigned long) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct parser_exec_state *VAR_5)
{
 int VAR_6 = VAR_5->vgpu->gvt->device_info.gmadr_bytes_in_cmd;
 unsigned long VAR_7;
 bool VAR_8 = 0;
 unsigned int VAR_9;
 int VAR_10 = 0;
 u32 VAR_11, VAR_12;

 VAR_9 = (FUNC_6(VAR_5, 1) & VAR_3) >> 14;


 if (FUNC_6(VAR_5, 1) & VAR_1)
  VAR_10 = FUNC_5(VAR_5, FUNC_4(VAR_5, 2), 1, "pipe_ctrl");

 else if (VAR_9) {
  if (VAR_9 == 2)
   VAR_10 = FUNC_5(VAR_5, 0x2350, 1, "pipe_ctrl");
  else if (VAR_9 == 3)
   VAR_10 = FUNC_5(VAR_5, 0x2358, 1, "pipe_ctrl");
  else if (VAR_9 == 1) {

   if ((FUNC_6(VAR_5, 1) & VAR_0)) {
    VAR_7 = FUNC_6(VAR_5, 2) & FUNC_0(31, 3);
    if (VAR_6 == 8)
     VAR_7 |= (FUNC_2(VAR_5, 3)) << 32;

    if (FUNC_6(VAR_5, 1) & (1 << 21))
     VAR_8 = 1;
    VAR_10 |= FUNC_1(VAR_5, VAR_7, sizeof(u64),
      VAR_8);
    if (VAR_10)
     return VAR_10;
    if (VAR_8) {
     VAR_11 = VAR_5->vgpu->hws_pga[VAR_5->ring_id];
     VAR_7 = VAR_11 + VAR_7;
     FUNC_7(VAR_5, FUNC_3(VAR_5, 2), VAR_7);
     VAR_12 = FUNC_6(VAR_5, 1) & (~(1 << 21));
     FUNC_7(VAR_5, FUNC_3(VAR_5, 1), VAR_12);
    }
   }
  }
 }

 if (VAR_10)
  return VAR_10;

 if (FUNC_6(VAR_5, 1) & VAR_2)
  FUNC_8(VAR_4[VAR_5->ring_id].pipe_control_notify,
    VAR_5->workload->pending_events);
 return 0;
}
