
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct output {int dummy; } ;
struct host1x {TYPE_1__* debug_op; } ;
struct TYPE_2__ {int (* show_mlocks ) (struct host1x*,struct output*) ;} ;


 int FUNC_0 (struct host1x*,struct output*) ;

__attribute__((used)) static inline void FUNC_1(struct host1x *VAR_0, struct output *VAR_1)
{
 VAR_0->debug_op->show_mlocks(VAR_0, VAR_1);
}
