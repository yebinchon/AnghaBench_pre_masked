
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pmd_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct page* FUNC_6 (int ) ;
 struct page* FUNC_7 (int ) ;

struct page *FUNC_8(pmd_t VAR_0)
{
 if (FUNC_2(VAR_0)) {
  FUNC_0(!(FUNC_3(VAR_0) || FUNC_1(VAR_0)));
  return FUNC_6(FUNC_5(VAR_0));
 }
 return FUNC_7(FUNC_4(VAR_0));
}
