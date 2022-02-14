
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef TYPE_1__* provider_p ;
typedef int int32_t ;
struct TYPE_3__ {int * data; } ;


 int FUNC_0 (int *,int const*,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;

int32_t
FUNC_2(provider_p VAR_0, uint8_t const *VAR_1, uint32_t VAR_2)
{
 uint8_t *VAR_3 = (uint8_t *) FUNC_1(VAR_0->data, VAR_2);

 if (VAR_3 == ((void*)0))
  return (-1);

 FUNC_0(VAR_3, VAR_1, VAR_2);
 VAR_0->data = VAR_3;

 return (0);
}
