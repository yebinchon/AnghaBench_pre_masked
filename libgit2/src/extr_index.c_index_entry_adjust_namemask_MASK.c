
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t flags; } ;
typedef TYPE_1__ git_index_entry ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(
  git_index_entry *VAR_1,
  size_t VAR_2)
{
 VAR_1->flags &= ~VAR_0;

 if (VAR_2 < VAR_0)
  VAR_1->flags |= VAR_2 & VAR_0;
 else
  VAR_1->flags |= VAR_0;
}
