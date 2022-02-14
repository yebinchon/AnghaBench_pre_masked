
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_shared_regs {int core_id; TYPE_1__* regs; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct intel_shared_regs* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct intel_shared_regs *FUNC_3(int VAR_2)
{
 struct intel_shared_regs *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(sizeof(struct intel_shared_regs),
       VAR_1, FUNC_0(VAR_2));
 if (VAR_3) {



  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_2(&VAR_3->regs[VAR_4].lock);

  VAR_3->core_id = -1;
 }
 return VAR_3;
}
