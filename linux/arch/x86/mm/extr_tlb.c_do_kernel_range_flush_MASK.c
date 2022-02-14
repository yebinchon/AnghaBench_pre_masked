
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flush_tlb_info {unsigned long start; unsigned long end; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct flush_tlb_info *VAR_2 = VAR_1;
 unsigned long VAR_3;


 for (VAR_3 = VAR_2->start; VAR_3 < VAR_2->end; VAR_3 += VAR_0)
  FUNC_0(VAR_3);
}
