
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uvcb ;
typedef int uint64_t ;
struct TYPE_2__ {int len; int cmd; } ;
struct uv_cb_qui {scalar_t__ inst_calls_list; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

void FUNC_3(void)
{
 struct uv_cb_qui VAR_4 = {
  .header.cmd = VAR_2,
  .header.len = sizeof(VAR_4)
 };

 if (!FUNC_1(158))
  return;

 if (FUNC_2(0, (uint64_t)&VAR_4))
  return;

 if (FUNC_0(VAR_1, (unsigned long *)VAR_4.inst_calls_list) &&
     FUNC_0(VAR_0, (unsigned long *)VAR_4.inst_calls_list))
  VAR_3 = 1;
}
