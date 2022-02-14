
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sdp_attr_p ;
typedef int int32_t ;
struct TYPE_3__ {int vlen; scalar_t__* value; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int32_t
FUNC_0(sdp_attr_p VAR_1)
{
 if (VAR_1->vlen != 2 || VAR_1->value[0] != VAR_0)
  return (-1);

 return (VAR_1->value[1]);
}
