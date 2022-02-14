
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int private; } ;
struct intel_opregion {int vbt_size; scalar_t__ vbt; } ;
struct TYPE_2__ {struct intel_opregion opregion; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct intel_opregion *VAR_2 = &FUNC_0(VAR_0->private)->opregion;

 if (VAR_2->vbt)
  FUNC_1(VAR_0, VAR_2->vbt, VAR_2->vbt_size);

 return 0;
}
