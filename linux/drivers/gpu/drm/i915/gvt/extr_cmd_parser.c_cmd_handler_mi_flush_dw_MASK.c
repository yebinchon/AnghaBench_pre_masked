
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
struct TYPE_10__ {int mi_flush_dw; } ;
struct TYPE_9__ {int pending_events; } ;
struct TYPE_8__ {unsigned long* hws_pga; TYPE_2__* gvt; } ;
struct TYPE_6__ {int gmadr_bytes_in_cmd; } ;
struct TYPE_7__ {TYPE_1__ device_info; } ;


 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct parser_exec_state*,unsigned long,int,int) ;
 TYPE_5__* VAR_0 ;
 int FUNC_3 (struct parser_exec_state*) ;
 int FUNC_4 (struct parser_exec_state*,int) ;
 int FUNC_5 (struct parser_exec_state*,int) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (struct parser_exec_state*,int ,unsigned long) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct parser_exec_state *VAR_1)
{
 int VAR_2 = VAR_1->vgpu->gvt->device_info.gmadr_bytes_in_cmd;
 unsigned long VAR_3;
 bool VAR_4 = 0;
 int VAR_5 = 0;
 u32 VAR_6, VAR_7;
 u32 VAR_8 = FUNC_0(2);

 VAR_5 = FUNC_6(FUNC_3(VAR_1),
   VAR_8);
 if (VAR_5) {

  VAR_5 = FUNC_6(FUNC_3(VAR_1),
   ++VAR_8);
  return VAR_5;
 }


 if (((FUNC_5(VAR_1, 0) >> 14) & 0x3) && (FUNC_5(VAR_1, 1) & (1 << 2))) {
  VAR_3 = FUNC_5(VAR_1, 1) & FUNC_1(31, 3);
  if (VAR_2 == 8)
   VAR_3 |= (FUNC_5(VAR_1, 2) & FUNC_1(15, 0)) << 32;

  if (FUNC_5(VAR_1, 0) & (1 << 21))
   VAR_4 = 1;
  VAR_5 = FUNC_2(VAR_1, VAR_3, sizeof(u64), VAR_4);
  if (VAR_5)
   return VAR_5;
  if (VAR_4) {
   VAR_6 = VAR_1->vgpu->hws_pga[VAR_1->ring_id];
   VAR_3 = VAR_6 + VAR_3;
   FUNC_7(VAR_1, FUNC_4(VAR_1, 1), VAR_3);
   VAR_7 = FUNC_5(VAR_1, 0) & (~(1 << 21));
   FUNC_7(VAR_1, FUNC_4(VAR_1, 0), VAR_7);
  }
 }

 if ((FUNC_5(VAR_1, 0) & (1 << 8)))
  FUNC_8(VAR_0[VAR_1->ring_id].mi_flush_dw,
    VAR_1->workload->pending_events);
 return VAR_5;
}
