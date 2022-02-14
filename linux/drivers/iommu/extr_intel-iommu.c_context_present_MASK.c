
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_entry {int dummy; } ;


 int FUNC_0 (struct context_entry*) ;
 int FUNC_1 (struct context_entry*) ;
 scalar_t__ FUNC_2 (struct context_entry*) ;

bool FUNC_3(struct context_entry *VAR_0)
{
 return FUNC_2(VAR_0) ?
      FUNC_0(VAR_0) :
      FUNC_0(VAR_0) && !FUNC_1(VAR_0);
}
