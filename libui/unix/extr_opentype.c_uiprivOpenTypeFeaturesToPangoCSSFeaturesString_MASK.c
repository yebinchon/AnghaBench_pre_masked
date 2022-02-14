
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uiOpenTypeFeatures ;
struct TYPE_6__ {scalar_t__ len; } ;
typedef TYPE_1__ GString ;


 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int const*,int ,TYPE_1__*) ;

GString *FUNC_3(const uiOpenTypeFeatures *VAR_1)
{
 GString *VAR_2;

 VAR_2 = FUNC_0("");
 FUNC_2(VAR_1, VAR_0, VAR_2);
 if (VAR_2->len != 0)

  FUNC_1(VAR_2, VAR_2->len - 2);
 return VAR_2;
}
