
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ u_long ;
struct trapframe {int tf_tpc; } ;
struct thread {int dummy; } ;
struct frame {int fr_fp; int fr_pc; } ;
typedef scalar_t__ db_expr_t ;
typedef scalar_t__ db_addr_t ;
typedef scalar_t__ c_db_sym_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,int,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct thread*,struct trapframe*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_6 (scalar_t__,char const**,scalar_t__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_10, struct frame *VAR_11, int VAR_12)
{
 struct trapframe *VAR_13;
 const char *VAR_14;
 c_db_sym_t VAR_15;
 db_expr_t VAR_16;
 db_expr_t VAR_17;
 db_addr_t VAR_18;
 db_addr_t VAR_19;
 int VAR_20;
 int VAR_21;

 if (VAR_12 == -1)
  VAR_12 = 1024;

 VAR_20 = 0;
 VAR_21 = 0;
 VAR_18 = 0;
 while (VAR_12-- && !VAR_21 && !VAR_5) {
  VAR_19 = (db_addr_t)FUNC_1((db_addr_t)&VAR_11->fr_pc,
      sizeof(VAR_11->fr_pc), VAR_3);
  if (VAR_20) {
   VAR_19 = VAR_18;
   VAR_20 = 0;
  }
  if (!FUNC_0((vm_offset_t)VAR_19))
   break;
  VAR_15 = FUNC_5(VAR_19, VAR_1, &VAR_16);
  if (VAR_15 == VAR_0) {
   VAR_17 = 0;
   VAR_14 = ((void*)0);
  } else
   FUNC_6(VAR_15, &VAR_14, &VAR_17);
  if (VAR_14 == ((void*)0))
   VAR_14 = "(null)";
  VAR_11 = (struct frame *)(FUNC_1((db_addr_t)&VAR_11->fr_fp,
     sizeof(VAR_11->fr_fp), VAR_3) + VAR_4);
  if ((VAR_17 > (u_long)VAR_8 &&
      VAR_17 < (u_long)VAR_9) ||
      (VAR_17 > (u_long)VAR_6 &&
      VAR_17 < (u_long)VAR_7)) {
   VAR_13 = (struct trapframe *)(VAR_11 + 1);
   VAR_18 = FUNC_1((db_addr_t)&VAR_13->tf_tpc,
       sizeof(VAR_13->tf_tpc), VAR_3);
   VAR_21 = FUNC_2(VAR_10, VAR_13, VAR_12);
   VAR_20 = 1;
  } else {
   FUNC_3("%s() at ", VAR_14);
   FUNC_4(VAR_19, VAR_2);
   FUNC_3("\n");
  }
 }
 return (0);
}
