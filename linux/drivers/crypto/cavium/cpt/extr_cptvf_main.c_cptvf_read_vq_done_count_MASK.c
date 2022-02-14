
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; } ;
union cptx_vqx_done {TYPE_1__ s; int u; } ;
typedef int u32 ;
struct cpt_vf {int reg_base; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct cpt_vf *VAR_0)
{
 union cptx_vqx_done VAR_1;

 VAR_1.u = FUNC_1(VAR_0->reg_base, FUNC_0(0, 0));
 return VAR_1.s.done;
}
