
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int last_jump; int start; unsigned long last_jump_jiffies; int abort; TYPE_1__* ctx; } ;
typedef TYPE_2__ atom_exec_context ;
struct TYPE_4__ {int cs_above; int cs_equal; } ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 void* VAR_0 ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_5(atom_exec_context *VAR_1, int *VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5 = FUNC_2(*VAR_2);
 unsigned long VAR_6;

 (*VAR_2) += 2;
 switch (VAR_3) {
 case 134:
  VAR_4 = VAR_1->ctx->cs_above;
  break;
 case 133:
  VAR_4 = VAR_1->ctx->cs_above || VAR_1->ctx->cs_equal;
  break;
 case 132:
  VAR_4 = 1;
  break;
 case 131:
  VAR_4 = !(VAR_1->ctx->cs_above || VAR_1->ctx->cs_equal);
  break;
 case 130:
  VAR_4 = !VAR_1->ctx->cs_above;
  break;
 case 129:
  VAR_4 = VAR_1->ctx->cs_equal;
  break;
 case 128:
  VAR_4 = !VAR_1->ctx->cs_equal;
  break;
 }
 if (VAR_3 != 132)
  FUNC_1("   taken: %s\n", VAR_4 ? "yes" : "no");
 FUNC_1("   target: 0x%04X\n", VAR_5);
 if (VAR_4) {
  if (VAR_1->last_jump == (VAR_1->start + VAR_5)) {
   VAR_6 = VAR_0;
   if (FUNC_4(VAR_6, VAR_1->last_jump_jiffies)) {
    VAR_6 -= VAR_1->last_jump_jiffies;
    if ((FUNC_3(VAR_6) > 5000)) {
     FUNC_0("atombios stuck in loop for more than 5secs aborting\n");
     VAR_1->abort = 1;
    }
   } else {

    VAR_1->last_jump_jiffies = VAR_0;
   }
  } else {
   VAR_1->last_jump = VAR_1->start + VAR_5;
   VAR_1->last_jump_jiffies = VAR_0;
  }
  *VAR_2 = VAR_1->start + VAR_5;
 }
}
