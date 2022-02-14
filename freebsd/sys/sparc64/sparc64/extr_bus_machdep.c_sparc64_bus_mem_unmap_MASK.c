
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef scalar_t__ bus_size_t ;
struct TYPE_3__ {int * bst_cookie; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

int
FUNC_6(bus_space_tag_t VAR_2, bus_space_handle_t VAR_3,
    bus_size_t VAR_4)
{
 vm_offset_t VAR_5;
 vm_offset_t VAR_6;
 vm_offset_t VAR_7;

 if (VAR_2->bst_cookie == ((void*)0) ||
     (VAR_5 = (vm_offset_t)FUNC_2(VAR_2->bst_cookie)) == 0)
  return (0);
 VAR_5 = FUNC_5(VAR_5);
 VAR_7 = VAR_5 + FUNC_3(VAR_4);
 for (VAR_6 = VAR_5; VAR_6 < VAR_7; VAR_6 += VAR_0)
  FUNC_1(VAR_6);
 FUNC_4(VAR_1, VAR_5, VAR_5 + VAR_4 - 1);
 FUNC_0(VAR_5, VAR_4);
 return (0);
}
