
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int (* get_halt_ctrl ) (struct dpu_hw_vbif*,int ) ;} ;
struct dpu_hw_vbif {scalar_t__ idx; TYPE_2__ ops; TYPE_1__* cap; } ;
typedef int ktime_t ;
struct TYPE_3__ {int xin_halt_timeout; } ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct dpu_hw_vbif*,int ) ;
 int FUNC_6 (struct dpu_hw_vbif*,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct dpu_hw_vbif *VAR_3, u32 VAR_4)
{
 ktime_t VAR_5;
 bool VAR_6;
 int VAR_7;

 if (!VAR_3 || !VAR_3->cap || !VAR_3->ops.get_halt_ctrl) {
  FUNC_1("invalid arguments vbif %d\n", VAR_3 != 0);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(FUNC_4(), VAR_3->cap->xin_halt_timeout);
 for (;;) {
  VAR_6 = VAR_3->ops.get_halt_ctrl(VAR_3, VAR_4);
  if (VAR_6)
   break;
  if (FUNC_3(FUNC_4(), VAR_5) > 0) {
   VAR_6 = VAR_3->ops.get_halt_ctrl(VAR_3, VAR_4);
   break;
  }
  FUNC_7(501, 1000);
 }

 if (!VAR_6) {
  VAR_7 = -VAR_1;
  FUNC_1("VBIF %d client %d not halting. TIMEDOUT.\n",
    VAR_3->idx - VAR_2, VAR_4);
 } else {
  VAR_7 = 0;
  FUNC_0("VBIF %d client %d is halted\n",
    VAR_3->idx - VAR_2, VAR_4);
 }

 return VAR_7;
}
