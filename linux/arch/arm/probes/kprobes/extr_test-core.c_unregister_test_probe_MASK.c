
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flags; } ;
struct test_probe {int registered; TYPE_1__ kprobe; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct test_probe *VAR_0)
{
 if (VAR_0->registered) {
  FUNC_0(&VAR_0->kprobe);
  VAR_0->kprobe.flags = 0;
 }
 VAR_0->registered = 0;
}
