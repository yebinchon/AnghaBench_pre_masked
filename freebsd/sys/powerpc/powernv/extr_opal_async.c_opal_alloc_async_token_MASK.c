
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t vmem_addr_t ;
struct TYPE_2__ {int completed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,int,int,size_t*) ;

int
FUNC_1(void)
{
 vmem_addr_t VAR_4;

 FUNC_0(VAR_2, 1, VAR_0 | VAR_1, &VAR_4);
 VAR_3[VAR_4].completed = 0;

 return (VAR_4);
}
