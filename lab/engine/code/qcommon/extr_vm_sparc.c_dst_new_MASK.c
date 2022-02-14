
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jump_insn {int dummy; } ;
struct func_info {size_t saved_icount; struct dst_insn** dst_by_i_count; int dst_count; } ;
struct dst_insn {unsigned int length; size_t i_count; int * next; scalar_t__ count; struct jump_insn* jump; } ;


 size_t VAR_0 ;
 struct dst_insn* FUNC_0 (int) ;

__attribute__((used)) static struct dst_insn *FUNC_1(struct func_info * const VAR_1, unsigned int VAR_2,
    struct jump_insn *VAR_3, int VAR_4)
{
 struct dst_insn *VAR_5 = FUNC_0(sizeof(struct dst_insn) + VAR_4);

 VAR_5->length = VAR_2;
 VAR_5->jump = VAR_3;
 VAR_5->count = VAR_1->dst_count++;
 VAR_5->i_count = VAR_1->saved_icount;
 VAR_5->next = ((void*)0);
 if (VAR_1->saved_icount != VAR_0)
  VAR_1->dst_by_i_count[VAR_1->saved_icount] = VAR_5;

 return VAR_5;
}
