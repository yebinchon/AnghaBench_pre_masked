
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct unwind_state {int fp; int sp; int pc; } ;
typedef scalar_t__ db_expr_t ;
typedef scalar_t__ c_db_sym_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__,char const**,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct unwind_state*) ;

__attribute__((used)) static void
FUNC_5(struct unwind_state *VAR_3)
{
 const char *VAR_4;
 db_expr_t VAR_5;
 db_expr_t VAR_6;
 c_db_sym_t VAR_7;
 uint64_t VAR_8;

 while (1) {
  VAR_8 = VAR_3->pc;

  if (FUNC_4(VAR_3) < 0)
   break;

  VAR_7 = FUNC_2(VAR_8, VAR_1, &VAR_5);
  if (VAR_7 == VAR_0) {
   VAR_6 = 0;
   VAR_4 = "(null)";
  } else
   FUNC_3(VAR_7, &VAR_4, &VAR_6);

  FUNC_0("%s() at ", VAR_4);
  FUNC_1(VAR_3->pc, VAR_2);
  FUNC_0("\n");

  FUNC_0("\t pc = 0x%016lx ra = 0x%016lx\n",
      VAR_8, VAR_3->pc);
  FUNC_0("\t sp = 0x%016lx fp = 0x%016lx\n",
      VAR_3->sp, VAR_3->fp);
  FUNC_0("\n");
 }
}
