
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parser_exec_state {struct intel_vgpu* vgpu; } ;
struct intel_vgpu {TYPE_2__* gvt; } ;
struct TYPE_3__ {int gmadr_bytes_in_cmd; } ;
struct TYPE_4__ {TYPE_1__ device_info; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (struct parser_exec_state*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static unsigned long FUNC_3(struct parser_exec_state *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6, VAR_7;
 struct intel_vgpu *VAR_8 = VAR_3->vgpu;
 int VAR_9 = VAR_8->gvt->device_info.gmadr_bytes_in_cmd;

 if (FUNC_0(VAR_9 != 4 && VAR_9 != 8)) {
  FUNC_2("invalid gma bytes %d\n", VAR_9);
  return VAR_2;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_4) & VAR_1;
 if (VAR_9 == 4) {
  VAR_5 = VAR_7;
 } else {
  VAR_6 = FUNC_1(VAR_3, VAR_4 + 1) & VAR_0;
  VAR_5 = (((unsigned long)VAR_6) << 32) | VAR_7;
 }
 return VAR_5;
}
