
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pathspec {TYPE_1__* items; } ;
struct TYPE_2__ {int match; } ;


 unsigned long FUNC_0 (struct pathspec const*) ;
 char* FUNC_1 (int ,unsigned long) ;

char *FUNC_2(const struct pathspec *VAR_0)
{
 unsigned long VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? FUNC_1(VAR_0->items[0].match, VAR_1) : ((void*)0);
}
