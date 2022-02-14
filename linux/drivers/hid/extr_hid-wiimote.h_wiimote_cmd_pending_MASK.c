
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; scalar_t__ opt; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef scalar_t__ __u32 ;



__attribute__((used)) static inline bool FUNC_0(struct wiimote_data *VAR_0, int VAR_1,
        __u32 VAR_2)
{
 return VAR_0->state.cmd == VAR_1 && VAR_0->state.opt == VAR_2;
}
