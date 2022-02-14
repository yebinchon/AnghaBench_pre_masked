
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptocap {int* cc_kalg; } ;
struct cryptkop {size_t krp_op; } ;


 int VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(const struct cryptocap *VAR_1, const struct cryptkop *VAR_2)
{
 return (VAR_1->cc_kalg[VAR_2->krp_op] & VAR_0) != 0;
}
