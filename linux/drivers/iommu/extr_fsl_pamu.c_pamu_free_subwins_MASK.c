
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct paace {size_t fspi; int addr_bitfields; int impl_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long,int) ;
 int FUNC_1 (int ,int ) ;
 struct paace* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_2 ;
 int * VAR_3 ;

void FUNC_5(int VAR_4)
{
 struct paace *VAR_5;
 u32 VAR_6, VAR_7;

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5) {
  FUNC_3("Invalid liodn entry\n");
  return;
 }

 if (FUNC_1(VAR_5->addr_bitfields, VAR_1)) {
  VAR_6 = 1UL << (FUNC_1(VAR_5->impl_attr, VAR_0) + 1);
  VAR_7 = (VAR_6 - 1) * sizeof(struct paace);
  FUNC_0(VAR_2, (unsigned long)&VAR_3[VAR_5->fspi], VAR_7);
  FUNC_4(VAR_5->addr_bitfields, VAR_1, 0);
 }
}
