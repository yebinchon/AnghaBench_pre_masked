
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {unsigned long cmd_line_ptr; } ;
struct TYPE_4__ {scalar_t__ ext_cmd_line_ptr; TYPE_1__ hdr; } ;


 TYPE_2__* VAR_0 ;

unsigned long FUNC_0(void)
{
 unsigned long VAR_1 = VAR_0->hdr.cmd_line_ptr;

 VAR_1 |= (u64)VAR_0->ext_cmd_line_ptr << 32;

 return VAR_1;
}
