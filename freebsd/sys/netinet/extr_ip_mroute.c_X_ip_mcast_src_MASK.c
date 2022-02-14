
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int in_addr_t ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ v_lcl_addr; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static u_long
FUNC_2(int VAR_3)
{
 in_addr_t VAR_4;

 VAR_4 = VAR_0;
 if (VAR_3 < 0)
  return (VAR_4);

 FUNC_0();
 if (VAR_3 < VAR_1)
  VAR_4 = VAR_2[VAR_3].v_lcl_addr.s_addr;
 FUNC_1();

 return (VAR_4);
}
