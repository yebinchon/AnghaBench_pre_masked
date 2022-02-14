
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ hash; scalar_t__ size; } ;
typedef TYPE_1__ git_pobject ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const git_pobject *VAR_2 = (git_pobject *)VAR_0;
 const git_pobject *VAR_3 = (git_pobject *)VAR_1;

 if (VAR_2->type > VAR_3->type)
  return -1;
 if (VAR_2->type < VAR_3->type)
  return 1;
 if (VAR_2->hash > VAR_3->hash)
  return -1;
 if (VAR_2->hash < VAR_3->hash)
  return 1;
 if (VAR_2->size > VAR_3->size)
  return -1;
 if (VAR_2->size < VAR_3->size)
  return 1;
 return VAR_2 < VAR_3 ? -1 : (VAR_2 > VAR_3);
}
