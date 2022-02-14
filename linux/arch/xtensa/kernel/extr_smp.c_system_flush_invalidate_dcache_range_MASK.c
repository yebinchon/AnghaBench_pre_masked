
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flush_data {unsigned long addr1; unsigned long addr2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct flush_data*,int) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1,
  unsigned long VAR_2)
{
 struct flush_data VAR_3 = {
  .addr1 = VAR_1,
  .addr2 = VAR_2,
 };
 FUNC_0(VAR_0, &VAR_3, 1);
}
