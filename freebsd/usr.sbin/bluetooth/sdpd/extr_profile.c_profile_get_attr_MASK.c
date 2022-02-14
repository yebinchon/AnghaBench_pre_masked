
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef TYPE_1__* profile_p ;
typedef int * profile_attr_create_p ;
typedef TYPE_2__* attr_p ;
struct TYPE_5__ {scalar_t__ attr; int * create; } ;
struct TYPE_4__ {int attrs; } ;



profile_attr_create_p
FUNC_0(const profile_p VAR_0, uint16_t VAR_1)
{
 attr_p VAR_2 = (attr_p) VAR_0->attrs;

 for (; VAR_2->create != ((void*)0); VAR_2 ++)
  if (VAR_2->attr == VAR_1)
   return (VAR_2->create);

 return (((void*)0));
}
