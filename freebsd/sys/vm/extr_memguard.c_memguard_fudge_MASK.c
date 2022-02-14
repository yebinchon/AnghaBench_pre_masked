
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct vm_map {int dummy; } ;
struct TYPE_2__ {int v_page_count; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (struct vm_map const*) ;
 int FUNC_3 (struct vm_map const*) ;
 int VAR_4 ;

unsigned long
FUNC_4(unsigned long VAR_5, const struct vm_map *VAR_6)
{
 u_long VAR_7, VAR_8;

 VAR_4 = 10;

 FUNC_0("vm.memguard.divisor", &VAR_4);

 VAR_8 = FUNC_2(VAR_6) - FUNC_3(VAR_6) +
     VAR_0;

 if ((VAR_4 <= 0) ||
     ((VAR_8 / VAR_4) == 0))
  VAR_4 = 10;







 VAR_7 = VAR_3.v_page_count;
 VAR_2 = (VAR_7 / VAR_4) * VAR_0;






 VAR_1 = FUNC_1(VAR_8 / VAR_4);
 if (VAR_1 / (2 * VAR_0) > VAR_7)
  VAR_1 = VAR_7 * 2 * VAR_0;
 if (VAR_5 + VAR_1 > VAR_8)
  VAR_1 = 0;
 return (VAR_5 + VAR_1);
}
