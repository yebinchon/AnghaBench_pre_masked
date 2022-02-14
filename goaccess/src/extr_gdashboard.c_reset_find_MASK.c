
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* pattern; scalar_t__ next_sub_idx; scalar_t__ next_parent_idx; scalar_t__ next_idx; scalar_t__ module; scalar_t__ look_in_sub; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;

void
FUNC_1 (void)
{
  if (VAR_0.pattern != ((void*)0) && *VAR_0.pattern != '\0')
    FUNC_0 (VAR_0.pattern);

  VAR_0.look_in_sub = 0;
  VAR_0.module = 0;
  VAR_0.next_idx = 0;
  VAR_0.next_parent_idx = 0;
  VAR_0.next_sub_idx = 0;
  VAR_0.pattern = ((void*)0);
}
