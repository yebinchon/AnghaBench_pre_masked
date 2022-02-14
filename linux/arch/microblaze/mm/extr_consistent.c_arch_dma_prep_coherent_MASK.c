
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct page*) ;

void FUNC_2(struct page *VAR_0, size_t VAR_1)
{
 phys_addr_t VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_2 + VAR_1);
}
