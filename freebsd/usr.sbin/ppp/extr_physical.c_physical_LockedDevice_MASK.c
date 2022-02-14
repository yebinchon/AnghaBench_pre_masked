
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* full; char const* base; } ;
struct physical {scalar_t__ fd; scalar_t__ type; TYPE_1__ name; } ;


 scalar_t__ VAR_0 ;

const char *
FUNC_0(struct physical *VAR_1)
{
  if (VAR_1->fd >= 0 && *VAR_1->name.full == '/' && VAR_1->type != VAR_0)
    return VAR_1->name.base;

  return ((void*)0);
}
