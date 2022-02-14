
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {char const* name; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(u_int VAR_1)
{
  if (VAR_1 == 0 || VAR_1 > sizeof VAR_0 / sizeof VAR_0[0])
    return "Unknown";
  return VAR_0[VAR_1-1].name;
}
