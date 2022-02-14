
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit {TYPE_1__* parents; } ;
struct TYPE_2__ {scalar_t__ next; } ;



__attribute__((used)) static int FUNC_0(const struct commit *VAR_0)
{
 return !!(VAR_0->parents && VAR_0->parents->next);
}
