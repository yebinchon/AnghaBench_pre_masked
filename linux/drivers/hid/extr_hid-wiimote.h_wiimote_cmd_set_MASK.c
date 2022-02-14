
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; int opt; int ready; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef int __u32 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct wiimote_data *VAR_0, int VAR_1,
        __u32 VAR_2)
{
 FUNC_0(&VAR_0->state.ready);
 VAR_0->state.cmd = VAR_1;
 VAR_0->state.opt = VAR_2;
}
