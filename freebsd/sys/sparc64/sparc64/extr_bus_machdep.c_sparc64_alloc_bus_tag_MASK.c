
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bus_space_tag {int dummy; } ;
typedef TYPE_1__* bus_space_tag_t ;
struct TYPE_4__ {int bst_type; void* bst_cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ,int ) ;

bus_space_tag_t
FUNC_1(void *VAR_2, int VAR_3)
{
 bus_space_tag_t VAR_4;

 VAR_4 = FUNC_0(sizeof(struct bus_space_tag), VAR_0, VAR_1);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_4->bst_cookie = VAR_2;
 VAR_4->bst_type = VAR_3;
 return (VAR_4);
}
