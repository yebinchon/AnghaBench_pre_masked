
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int instructionCount; } ;
typedef TYPE_1__ vm_t ;
struct jump_insn {int jump_iname; int jump_dest_insn; int * next; struct dst_insn* parent; } ;
struct func_info {int dummy; } ;
struct dst_insn {int dummy; } ;
typedef enum sparc_iname { ____Placeholder_sparc_iname } sparc_iname ;


 int FUNC_0 () ;
 struct jump_insn* FUNC_1 (int) ;
 int FUNC_2 (struct func_info* const,struct dst_insn*) ;
 struct dst_insn* FUNC_3 (struct func_info* const,int,struct jump_insn*,int ) ;
 int FUNC_4 (struct func_info* const,struct jump_insn*) ;

__attribute__((used)) static void FUNC_5(vm_t *VAR_0, struct func_info * const VAR_1, enum sparc_iname VAR_2, int VAR_3)
{
 struct jump_insn *VAR_4 = FUNC_1(sizeof(*VAR_4));
 struct dst_insn *VAR_5;

 if (VAR_3 < 0 || VAR_3 >= VAR_0->instructionCount)
  FUNC_0();

 VAR_5 = FUNC_3(VAR_1, 2, VAR_4, 0);

 VAR_4->jump_iname = VAR_2;
 VAR_4->jump_dest_insn = VAR_3;
 VAR_4->parent = VAR_5;
 VAR_4->next = ((void*)0);

 FUNC_4(VAR_1, VAR_4);
 FUNC_2(VAR_1, VAR_5);
}
