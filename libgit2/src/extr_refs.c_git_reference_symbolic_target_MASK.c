
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* symbolic; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__ target; } ;
typedef TYPE_2__ git_reference ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__ const*) ;

const char *FUNC_1(const git_reference *VAR_1)
{
 FUNC_0(VAR_1);

 if (VAR_1->type != VAR_0)
  return ((void*)0);

 return VAR_1->target.symbolic;
}
