
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_info {unsigned long* begin; unsigned long* end; unsigned long* next_sp; int type; } ;
struct pt_regs {scalar_t__ sp; } ;
struct estack_pages {int type; scalar_t__ size; scalar_t__ offs; } ;
struct cea_exception_stacks {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 struct estack_pages* VAR_3 ;

__attribute__((used)) static bool FUNC_2(unsigned long *VAR_4, struct stack_info *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8 = (unsigned long)VAR_4;
 const struct estack_pages *VAR_9;
 struct pt_regs *VAR_10;
 unsigned int VAR_11;

 FUNC_0(VAR_0 != 6);

 VAR_6 = (unsigned long)FUNC_1(VAR_2);




 if (!VAR_6)
  return 0;

 VAR_7 = VAR_6 + sizeof(struct cea_exception_stacks);

 if (VAR_8 < VAR_6 || VAR_8 >= VAR_7)
  return 0;


 VAR_11 = (VAR_8 - VAR_6) >> VAR_1;

 VAR_9 = &VAR_3[VAR_11];

 if (!VAR_9->size)
  return 0;

 VAR_6 += (unsigned long)VAR_9->offs;
 VAR_7 = VAR_6 + (unsigned long)VAR_9->size;
 VAR_10 = (struct pt_regs *)VAR_7 - 1;

 VAR_5->type = VAR_9->type;
 VAR_5->begin = (unsigned long *)VAR_6;
 VAR_5->end = (unsigned long *)VAR_7;
 VAR_5->next_sp = (unsigned long *)VAR_10->sp;
 return 1;
}
