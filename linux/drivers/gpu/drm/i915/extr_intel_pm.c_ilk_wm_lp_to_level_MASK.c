
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_pipe_wm {TYPE_1__* wm; } ;
struct TYPE_2__ {scalar_t__ enable; } ;



__attribute__((used)) static int FUNC_0(int VAR_0, const struct intel_pipe_wm *VAR_1)
{

 return VAR_0 + (VAR_0 >= 2 && VAR_1->wm[4].enable);
}
