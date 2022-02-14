
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flush_tlb_info {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct flush_tlb_info* FUNC_0 (int *,unsigned long,unsigned long,int ,int,int ) ;
 int FUNC_1 (int ,struct flush_tlb_info*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned long VAR_4 ;

void FUNC_5(unsigned long VAR_5, unsigned long VAR_6)
{

 if (VAR_6 == VAR_1 ||
     (VAR_6 - VAR_5) > VAR_4 << VAR_0) {
  FUNC_1(VAR_2, ((void*)0), 1);
 } else {
  struct flush_tlb_info *VAR_7;

  FUNC_2();
  VAR_7 = FUNC_0(((void*)0), VAR_5, VAR_6, 0, 0, 0);

  FUNC_1(VAR_3, VAR_7, 1);

  FUNC_4();
  FUNC_3();
 }
}
