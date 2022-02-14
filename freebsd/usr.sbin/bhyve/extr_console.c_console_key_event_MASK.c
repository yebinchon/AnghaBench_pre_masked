
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int kbd_arg; int (* kbd_event_cb ) (int,int ,int ) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int ,int ) ;

void
FUNC_1(int VAR_1, uint32_t VAR_2)
{
 if (VAR_0.kbd_event_cb)
  (*VAR_0.kbd_event_cb)(VAR_1, VAR_2, VAR_0.kbd_arg);
}
