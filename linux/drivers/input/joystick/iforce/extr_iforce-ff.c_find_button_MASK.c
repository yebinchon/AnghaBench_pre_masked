
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iforce {TYPE_1__* type; } ;
struct TYPE_2__ {short* btn; } ;



__attribute__((used)) static unsigned char FUNC_0(struct iforce *VAR_0, signed short VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_0->type->btn[VAR_2] >= 0; VAR_2++)
  if (VAR_0->type->btn[VAR_2] == VAR_1)
   return VAR_2 + 1;
 return 0;
}
