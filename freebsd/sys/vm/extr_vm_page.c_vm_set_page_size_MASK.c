
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_page_size; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;

void
FUNC_1(void)
{
 if (VAR_1.v_page_size == 0)
  VAR_1.v_page_size = VAR_0;
 if (((VAR_1.v_page_size - 1) & VAR_1.v_page_size) != 0)
  FUNC_0("vm_set_page_size: page size not a power of two");
}
