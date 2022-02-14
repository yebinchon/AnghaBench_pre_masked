
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* bytecode_header_p; } ;
struct TYPE_3__ {int status_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_1 ;

bool
FUNC_2 (void)
{
  FUNC_0 (FUNC_1 (VAR_1) != ((void*)0));

  return FUNC_1 (VAR_1)->bytecode_header_p->status_flags & VAR_0;
}
