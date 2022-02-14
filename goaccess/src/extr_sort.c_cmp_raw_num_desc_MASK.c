
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ivalue; } ;
struct TYPE_4__ {TYPE_1__ value; } ;
typedef TYPE_2__ GRawDataItem ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const GRawDataItem *VAR_2 = VAR_0;
  const GRawDataItem *VAR_3 = VAR_1;

  int VAR_4 = VAR_2->value.ivalue;
  int VAR_5 = VAR_3->value.ivalue;

  return (VAR_4 < VAR_5) - (VAR_4 > VAR_5);
}
