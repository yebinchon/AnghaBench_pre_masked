
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser_exec_state {unsigned long ip_gma; scalar_t__ buf_type; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct parser_exec_state*) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct parser_exec_state*) ;

__attribute__((used)) static int FUNC_4(struct parser_exec_state *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4,
  unsigned long VAR_5, unsigned long VAR_6)
{

 unsigned long VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;
 struct intel_vgpu *VAR_11 = VAR_2->vgpu;

 VAR_7 = VAR_5 + VAR_3;
 VAR_8 = VAR_5 + VAR_4;
 VAR_9 = VAR_5 + VAR_6;

 while (VAR_2->ip_gma != VAR_8) {
  if (VAR_2->buf_type == VAR_1) {
   if (!(VAR_2->ip_gma >= VAR_5) ||
    !(VAR_2->ip_gma < VAR_9)) {
    FUNC_2("ip_gma %lx out of ring scope."
     "(base:0x%lx, bottom: 0x%lx)\n",
     VAR_2->ip_gma, VAR_5,
     VAR_9);
    FUNC_3(VAR_2);
    return -VAR_0;
   }
   if (FUNC_1(VAR_2->ip_gma, VAR_7, VAR_8)) {
    FUNC_2("ip_gma %lx out of range."
     "base 0x%lx head 0x%lx tail 0x%lx\n",
     VAR_2->ip_gma, VAR_5,
     VAR_3, VAR_4);
    FUNC_3(VAR_2);
    break;
   }
  }
  VAR_10 = FUNC_0(VAR_2);
  if (VAR_10) {
   FUNC_2("cmd parser error\n");
   FUNC_3(VAR_2);
   break;
  }
 }

 return VAR_10;
}
