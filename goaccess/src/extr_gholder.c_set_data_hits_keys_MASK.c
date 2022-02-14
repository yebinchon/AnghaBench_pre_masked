
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ivalue; int svalue; } ;
struct TYPE_5__ {TYPE_1__ value; int key; } ;
typedef scalar_t__ GRawDataType ;
typedef TYPE_2__ GRawDataItem ;
typedef int GModule ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (GModule VAR_2, GRawDataItem VAR_3, GRawDataType VAR_4,
                    char **VAR_5, int *VAR_6)
{
  if (VAR_4 == VAR_0) {
    if (!(*VAR_5 = FUNC_0 (VAR_2, VAR_3.key)))
      return 1;
    *VAR_6 = VAR_3.value.ivalue;
  } else if (VAR_4 == VAR_1) {
    if (!(*VAR_6 = FUNC_1 (VAR_2, VAR_3.key)))
      return 1;
    *VAR_5 = FUNC_2 (VAR_3.value.svalue);
  }
  return 0;
}
