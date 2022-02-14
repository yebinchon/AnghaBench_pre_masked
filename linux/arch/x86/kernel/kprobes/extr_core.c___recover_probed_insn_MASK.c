
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {int opcode; } ;
typedef int kprobe_opcode_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long) ;
 struct kprobe* FUNC_2 (void*) ;
 int * VAR_2 ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int *,void*,int) ;

__attribute__((used)) static unsigned long
FUNC_5(kprobe_opcode_t *VAR_3, unsigned long VAR_4)
{
 struct kprobe *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_2((void *)VAR_4);
 VAR_6 = FUNC_1(VAR_4);





 if (FUNC_0(VAR_6 && VAR_6 != VAR_4))
  return 0UL;




 if (!VAR_5 && !VAR_6)
  return VAR_4;
 if (FUNC_4(VAR_3, (void *)VAR_4,
  VAR_0 * sizeof(kprobe_opcode_t)))
  return 0UL;

 if (VAR_6)
  FUNC_3(VAR_3, VAR_2[VAR_1], 5);
 else
  VAR_3[0] = VAR_5->opcode;
 return (unsigned long)VAR_3;
}
