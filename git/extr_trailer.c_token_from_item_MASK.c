
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* key; char const* name; } ;
struct arg_item {TYPE_1__ conf; } ;



__attribute__((used)) static const char *FUNC_0(struct arg_item *VAR_0, char *VAR_1)
{
 if (VAR_0->conf.key)
  return VAR_0->conf.key;
 if (VAR_1)
  return VAR_1;
 return VAR_0->conf.name;
}
