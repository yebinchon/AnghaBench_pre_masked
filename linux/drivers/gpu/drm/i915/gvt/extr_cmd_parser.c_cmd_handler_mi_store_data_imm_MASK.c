
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


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct parser_exec_state*,unsigned long,int,int) ;
 int FUNC_4 (struct parser_exec_state*) ;
 int FUNC_5 (struct parser_exec_state*,int) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct parser_exec_state *VAR_0)
{
 int VAR_1 = VAR_0->vgpu->gvt->device_info.gmadr_bytes_in_cmd;
 int VAR_2 = (FUNC_4(VAR_0) - 3) * sizeof(u32);
 int VAR_3 = (FUNC_5(VAR_0, 2) & (1 << 0)) ? 1 : 0;
 unsigned long VAR_4, VAR_5, VAR_6;
 u32 VAR_7 = FUNC_0(2);
 int VAR_8 = 0;


 if (!(FUNC_5(VAR_0, 0) & (1 << 22)))
  return 0;


 if (FUNC_1(0, 21, 21))
  VAR_7++;
 VAR_8 = FUNC_6(FUNC_4(VAR_0),
   VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_4 = FUNC_5(VAR_0, 2) & FUNC_2(31, 2);

 if (VAR_1 == 8) {
  VAR_5 = FUNC_5(VAR_0, 1) & FUNC_2(31, 2);
  VAR_6 = FUNC_5(VAR_0, 2) & FUNC_2(15, 0);
  VAR_4 = (VAR_6 << 32) | VAR_5;
  VAR_3 = (FUNC_5(VAR_0, 1) & (1 << 0)) ? 1 : 0;
 }
 VAR_8 = FUNC_3(VAR_0, VAR_4 + VAR_2 * VAR_3, VAR_2, 0);
 return VAR_8;
}
