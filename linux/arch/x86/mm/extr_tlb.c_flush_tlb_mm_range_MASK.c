
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mm_struct {int dummy; } ;
struct flush_tlb_info {int dummy; } ;
struct TYPE_2__ {int loaded_mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (struct flush_tlb_info*,int ) ;
 int FUNC_2 (int ,struct flush_tlb_info*) ;
 int FUNC_3 () ;
 struct flush_tlb_info* FUNC_4 (struct mm_struct*,unsigned long,unsigned long,unsigned int,int,int ) ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct mm_struct*) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 struct mm_struct* FUNC_12 (int ) ;
 unsigned long VAR_4 ;

void FUNC_13(struct mm_struct *VAR_5, unsigned long VAR_6,
    unsigned long VAR_7, unsigned int VAR_8,
    bool VAR_9)
{
 struct flush_tlb_info *VAR_10;
 u64 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_3();


 if ((VAR_7 == VAR_0) ||
     ((VAR_7 - VAR_6) >> VAR_8) > VAR_4) {
  VAR_6 = 0;
  VAR_7 = VAR_0;
 }


 VAR_11 = FUNC_5(VAR_5);

 VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
      VAR_11);

 if (VAR_5 == FUNC_12(VAR_2.loaded_mm)) {
  FUNC_8();
  FUNC_6();
  FUNC_1(VAR_10, VAR_1);
  FUNC_7();
 }

 if (FUNC_0(FUNC_9(VAR_5), VAR_12) < VAR_3)
  FUNC_2(FUNC_9(VAR_5), VAR_10);

 FUNC_11();
 FUNC_10();
}
