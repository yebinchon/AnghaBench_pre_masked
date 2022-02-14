
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int ptr_arg; int (* ptr_event_cb ) (int ,int,int,int ) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int,int,int ) ;

void
FUNC_1(uint8_t VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_0.ptr_event_cb)
  (*VAR_0.ptr_event_cb)(VAR_1, VAR_2, VAR_3, VAR_0.ptr_arg);
}
