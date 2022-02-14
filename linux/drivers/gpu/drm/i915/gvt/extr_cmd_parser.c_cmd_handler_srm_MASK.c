
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct parser_exec_state {TYPE_3__* vgpu; } ;
struct TYPE_6__ {TYPE_2__* gvt; } ;
struct TYPE_4__ {int gmadr_bytes_in_cmd; } ;
struct TYPE_5__ {TYPE_1__ device_info; } ;


 int FUNC_0 (struct parser_exec_state*,unsigned long,int,int) ;
 unsigned long FUNC_1 (struct parser_exec_state*,int) ;
 int FUNC_2 (struct parser_exec_state*,int) ;
 int FUNC_3 (struct parser_exec_state*) ;
 int FUNC_4 (struct parser_exec_state*,int) ;
 int FUNC_5 (struct parser_exec_state*,int ,int,char*) ;
 int FUNC_6 (struct parser_exec_state*,int ) ;
 scalar_t__ FUNC_7 (struct parser_exec_state*) ;

__attribute__((used)) static int FUNC_8(struct parser_exec_state *VAR_0)
{
 int VAR_1 = VAR_0->vgpu->gvt->device_info.gmadr_bytes_in_cmd;
 unsigned long VAR_2;
 int VAR_3, VAR_4 = 0;
 int VAR_5 = FUNC_3(VAR_0);

 for (VAR_3 = 1; VAR_3 < VAR_5;) {
  VAR_4 |= FUNC_5(VAR_0, FUNC_4(VAR_0, VAR_3), VAR_3, "srm");
  if (VAR_4)
   break;
  if (FUNC_6(VAR_0, 0) & (1 << 22)) {
   VAR_2 = FUNC_1(VAR_0, VAR_3 + 1);
   if (VAR_1 == 8)
    VAR_2 |= (FUNC_2(VAR_0, VAR_3 + 2)) << 32;
   VAR_4 |= FUNC_0(VAR_0, VAR_2, sizeof(u32), 0);
   if (VAR_4)
    break;
  }
  VAR_3 += FUNC_7(VAR_0) + 1;
 }
 return VAR_4;
}
