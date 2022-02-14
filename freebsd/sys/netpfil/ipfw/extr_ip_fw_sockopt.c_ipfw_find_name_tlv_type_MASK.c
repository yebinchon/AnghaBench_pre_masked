
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int length; scalar_t__ type; } ;
struct TYPE_5__ {scalar_t__ idx; int name; TYPE_1__ head; } ;
typedef TYPE_2__ ipfw_obj_ntlv ;


 scalar_t__ FUNC_0 (int ) ;

ipfw_obj_ntlv *
FUNC_1(void *VAR_0, int VAR_1, uint16_t VAR_2, uint32_t VAR_3)
{
 ipfw_obj_ntlv *VAR_4;
 uintptr_t VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = (uintptr_t)VAR_0;
 VAR_6 = VAR_5 + VAR_1;
 VAR_7 = 0;
 for (; VAR_5 < VAR_6; VAR_5 += VAR_7) {
  VAR_4 = (ipfw_obj_ntlv *)VAR_5;
  VAR_7 = VAR_4->head.length;

  if (VAR_7 != sizeof(*VAR_4))
   return (((void*)0));

  if (VAR_4->idx != VAR_2)
   continue;






  if (VAR_4->head.type != 0 &&
      VAR_4->head.type != (uint16_t)VAR_3)
   continue;

  if (FUNC_0(VAR_4->name) != 0)
   return (((void*)0));

  return (VAR_4);
 }

 return (((void*)0));
}
