
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct intel_plane {int (* get_hw_state ) (struct intel_plane*,int*) ;TYPE_1__ base; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct intel_plane*,int*) ;

__attribute__((used)) static void FUNC_3(struct intel_plane *VAR_0, bool VAR_1)
{
 enum pipe VAR_2;
 bool VAR_3;

 VAR_3 = VAR_0->get_hw_state(VAR_0, &VAR_2);

 FUNC_0(VAR_3 != VAR_1,
   "%s assertion failure (expected %s, current %s)\n",
   VAR_0->base.name, FUNC_1(VAR_1), FUNC_1(VAR_3));
}
