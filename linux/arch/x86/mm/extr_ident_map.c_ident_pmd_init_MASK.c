
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_mapping_info {unsigned long offset; unsigned long page_flag; } ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct x86_mapping_info *VAR_2, pmd_t *VAR_3,
      unsigned long VAR_4, unsigned long VAR_5)
{
 VAR_4 &= VAR_0;
 for (; VAR_4 < VAR_5; VAR_4 += VAR_1) {
  pmd_t *VAR_6 = VAR_3 + FUNC_1(VAR_4);

  if (FUNC_2(*VAR_6))
   continue;

  FUNC_3(VAR_6, FUNC_0((VAR_4 - VAR_2->offset) | VAR_2->page_flag));
 }
}
