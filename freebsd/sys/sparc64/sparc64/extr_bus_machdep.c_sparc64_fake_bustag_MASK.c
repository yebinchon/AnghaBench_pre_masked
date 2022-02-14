
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_space_tag {int bst_type; int * bst_cookie; } ;
typedef int bus_space_handle_t ;
typedef int bus_addr_t ;



bus_space_handle_t
FUNC_0(int VAR_0, bus_addr_t VAR_1, struct bus_space_tag *VAR_2)
{

 VAR_2->bst_cookie = ((void*)0);
 VAR_2->bst_type = VAR_0;
 return (VAR_1);
}
