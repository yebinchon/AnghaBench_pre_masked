
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* name; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline const char *FUNC_1(unsigned int VAR_1)
{
 if (FUNC_0(VAR_1))
  return VAR_0[VAR_1].name;
 else
  return "unknown";
}
