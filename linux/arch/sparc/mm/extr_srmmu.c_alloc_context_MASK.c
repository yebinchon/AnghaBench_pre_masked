
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int context; } ;
struct ctx_list {int ctx_number; struct mm_struct* ctx_mm; struct ctx_list* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct ctx_list*) ;
 struct ctx_list VAR_1 ;
 struct ctx_list VAR_2 ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ctx_list*) ;

__attribute__((used)) static inline void FUNC_5(struct mm_struct *VAR_3, struct mm_struct *VAR_4)
{
 struct ctx_list *VAR_5;

 VAR_5 = VAR_1.next;
 if (VAR_5 != &VAR_1) {
  FUNC_4(VAR_5);
  FUNC_0(VAR_5);
  VAR_4->context = VAR_5->ctx_number;
  VAR_5->ctx_mm = VAR_4;
  return;
 }
 VAR_5 = VAR_2.next;
 if (VAR_5->ctx_mm == VAR_3)
  VAR_5 = VAR_5->next;
 if (VAR_5 == &VAR_2)
  FUNC_3("out of mmu contexts");
 FUNC_1(VAR_5->ctx_mm);
 FUNC_2(VAR_5->ctx_mm);
 FUNC_4(VAR_5);
 FUNC_0(VAR_5);
 VAR_5->ctx_mm->context = VAR_0;
 VAR_5->ctx_mm = VAR_4;
 VAR_4->context = VAR_5->ctx_number;
}
