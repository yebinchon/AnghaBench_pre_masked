
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct commit *VAR_1, struct commit **VAR_2, int VAR_3)
{





 int VAR_4, VAR_5, VAR_6;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  if (VAR_2[VAR_4] == VAR_1)
   return 0;
 VAR_5 = VAR_1->object.flags;
 for (VAR_4 = VAR_6 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_5 & (1u << (VAR_4 + VAR_0)))
   VAR_6++;
 }
 if (VAR_6 == 1)
  return 1;
 return 0;
}
