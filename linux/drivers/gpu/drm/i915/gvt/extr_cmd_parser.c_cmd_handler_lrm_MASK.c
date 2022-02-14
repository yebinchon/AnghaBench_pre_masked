
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct parser_exec_state {TYPE_1__* vgpu; } ;
struct TYPE_4__ {int gmadr_bytes_in_cmd; } ;
struct intel_gvt {int dev_priv; TYPE_2__ device_info; } ;
struct TYPE_3__ {struct intel_gvt* gvt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct parser_exec_state*,unsigned long,int,int) ;
 unsigned long FUNC_2 (struct parser_exec_state*,int) ;
 int FUNC_3 (struct parser_exec_state*,int) ;
 int FUNC_4 (struct parser_exec_state*) ;
 int FUNC_5 (struct parser_exec_state*,int) ;
 int FUNC_6 (struct parser_exec_state*,int ,int,char*) ;
 scalar_t__ FUNC_7 (struct parser_exec_state*,int) ;
 int FUNC_8 (struct parser_exec_state*,int ) ;
 scalar_t__ FUNC_9 (struct parser_exec_state*) ;

__attribute__((used)) static int FUNC_10(struct parser_exec_state *VAR_1)
{
 struct intel_gvt *VAR_2 = VAR_1->vgpu->gvt;
 int VAR_3 = VAR_2->device_info.gmadr_bytes_in_cmd;
 unsigned long VAR_4;
 int VAR_5, VAR_6 = 0;
 int VAR_7 = FUNC_4(VAR_1);

 for (VAR_5 = 1; VAR_5 < VAR_7;) {
  if (FUNC_0(VAR_2->dev_priv))
   VAR_6 |= (FUNC_7(VAR_1, VAR_5)) ? -VAR_0 : 0;
  if (VAR_6)
   break;
  VAR_6 |= FUNC_6(VAR_1, FUNC_5(VAR_1, VAR_5), VAR_5, "lrm");
  if (VAR_6)
   break;
  if (FUNC_8(VAR_1, 0) & (1 << 22)) {
   VAR_4 = FUNC_2(VAR_1, VAR_5 + 1);
   if (VAR_3 == 8)
    VAR_4 |= (FUNC_3(VAR_1, VAR_5 + 2)) << 32;
   VAR_6 |= FUNC_1(VAR_1, VAR_4, sizeof(u32), 0);
   if (VAR_6)
    break;
  }
  VAR_5 += FUNC_9(VAR_1) + 1;
 }
 return VAR_6;
}
