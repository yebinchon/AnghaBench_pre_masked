
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long target; int opcode; } ;
union mips_instruction {int word; int* halfword; TYPE_1__ j_format; } ;
struct jump_entry {int code; int target; } ;
typedef enum jump_label_type { ____Placeholder_jump_label_type } jump_label_type ;


 long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_10 ;

void FUNC_8(struct jump_entry *VAR_11,
          enum jump_label_type VAR_12)
{
 union mips_instruction *VAR_13;
 union mips_instruction VAR_14;
 long VAR_15;

 VAR_13 = (union mips_instruction *)FUNC_5(VAR_11->code);


 FUNC_1((VAR_11->target & VAR_2) != VAR_3);

 if (VAR_12 == VAR_1) {
  if (!FUNC_2(VAR_0) && VAR_6 >= 6) {
   VAR_15 = VAR_11->target - ((unsigned long)VAR_13 + 4);
   VAR_15 >>= 2;





   FUNC_3((VAR_15 >= FUNC_0(25)) ||
    (VAR_15 < -(long)FUNC_0(25)));

   VAR_14.j_format.opcode = VAR_7;
   VAR_14.j_format.target = VAR_15;
  } else {




   FUNC_3((VAR_11->target & ~VAR_4) !=
    ((VAR_11->code + 4) & ~VAR_4));

   VAR_14.j_format.opcode = VAR_3 ? VAR_9 : VAR_8;
   VAR_14.j_format.target = VAR_11->target >> VAR_5;
  }
 } else {
  VAR_14.word = 0;
 }

 FUNC_6(&VAR_10);
 if (FUNC_2(VAR_0)) {
  VAR_13->halfword[0] = VAR_14.word >> 16;
  VAR_13->halfword[1] = VAR_14.word;
 } else
  *VAR_13 = VAR_14;

 FUNC_4((unsigned long)VAR_13,
      (unsigned long)VAR_13 + sizeof(*VAR_13));

 FUNC_7(&VAR_10);
}
