
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef int __u8 ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct wiimote_data *VAR_1, __u8 *VAR_2)
{
 if (VAR_1->state.flags & VAR_0)
  *VAR_2 |= 0x01;
}
