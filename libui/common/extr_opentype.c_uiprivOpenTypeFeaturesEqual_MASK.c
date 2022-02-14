
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; int data; } ;
typedef TYPE_1__ uiOpenTypeFeatures ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

int FUNC_2(const uiOpenTypeFeatures *VAR_0, const uiOpenTypeFeatures *VAR_1)
{
 if (VAR_0 == VAR_1)
  return 1;
 if (VAR_0->len != VAR_1->len)
  return 0;
 return FUNC_1(VAR_0->data, VAR_1->data, FUNC_0(VAR_0->len)) == 0;
}
