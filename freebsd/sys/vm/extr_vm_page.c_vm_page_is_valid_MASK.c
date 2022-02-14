
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_page_bits_t ;
struct TYPE_3__ {int valid; } ;


 int FUNC_0 (int,int) ;

int
FUNC_1(vm_page_t VAR_0, int VAR_1, int VAR_2)
{
 vm_page_bits_t VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 return (VAR_0->valid != 0 && (VAR_0->valid & VAR_3) == VAR_3);
}
