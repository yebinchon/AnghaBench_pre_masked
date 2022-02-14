
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_long ;
struct trapframe {int tf_tpc; int * tf_out; int tf_pil; int tf_level; int * tf_global; int tf_tar; int tf_sfsr; int tf_sfar; int tf_type; } ;
struct thread {struct proc* td_proc; } ;
struct proc {TYPE_2__* p_sysent; } ;
typedef int db_expr_t ;
typedef void* db_addr_t ;
typedef int c_db_sym_t ;
struct TYPE_4__ {size_t sv_size; int sv_name; TYPE_1__* sv_table; } ;
struct TYPE_3__ {scalar_t__ sy_call; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 size_t VAR_4 ;


 void* FUNC_0 (void*,int,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ,int *) ;
 int FUNC_4 (int ,char const**,int *) ;
 int FUNC_5 (struct thread*,struct trapframe*,int) ;
 int * VAR_5 ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_6, struct trapframe *VAR_7, int VAR_8)
{
 struct proc *VAR_9;
 const char *VAR_10;
 c_db_sym_t VAR_11;
 db_expr_t VAR_12;
 db_addr_t VAR_13;
 db_addr_t VAR_14;
 u_long VAR_15;
 u_long VAR_16;
 u_long VAR_17;
 u_long VAR_18;
 u_long VAR_19;
 u_long VAR_20;
 u_long VAR_21;
 u_long VAR_22;
 int VAR_23;

 VAR_9 = VAR_6->td_proc;
 VAR_15 = FUNC_0((db_addr_t)&VAR_7->tf_type,
     sizeof(VAR_7->tf_type), VAR_3);
 FUNC_1("-- %s", VAR_5[VAR_15 & ~VAR_4]);
 switch (VAR_15 & ~VAR_4) {
 case 133:
  VAR_18 = (u_long)FUNC_0((db_addr_t)&VAR_7->tf_tar,
      sizeof(VAR_7->tf_tar), VAR_3);
  FUNC_1(" tar=%#lx", VAR_18);

 case 135:
 case 132:
 case 129:
  VAR_16 = (u_long)FUNC_0((db_addr_t)&VAR_7->tf_sfar,
      sizeof(VAR_7->tf_sfar), VAR_3);
  VAR_17 = (u_long)FUNC_0((db_addr_t)&VAR_7->tf_sfsr,
      sizeof(VAR_7->tf_sfsr), VAR_3);
  FUNC_1(" sfar=%#lx sfsr=%#lx", VAR_16, VAR_17);
  break;
 case 134:
 case 131:
  VAR_18 = (u_long)FUNC_0((db_addr_t)&VAR_7->tf_tar,
      sizeof(VAR_7->tf_tar), VAR_3);
  FUNC_1(" tar=%#lx", VAR_18);
  break;
 case 128:
  VAR_21 = FUNC_0((db_addr_t)&VAR_7->tf_global[1],
      sizeof(VAR_7->tf_global[1]), VAR_3);
  FUNC_1(" (%ld", VAR_21);
  if (VAR_21 >= 0 && VAR_21 < VAR_9->p_sysent->sv_size) {
   VAR_13 = (db_addr_t)VAR_9->p_sysent->sv_table[VAR_21].sy_call;
   VAR_11 = FUNC_3(VAR_13, VAR_0, &VAR_12);
   if (VAR_11 != VAR_2 && VAR_12 == 0) {
    FUNC_4(VAR_11, &VAR_10, ((void*)0));
    FUNC_1(", %s, %s", VAR_9->p_sysent->sv_name,
        VAR_10);
   }
   FUNC_1(")");
  }
  break;
 case 130:
  VAR_19 = (u_long)FUNC_0((db_addr_t)&VAR_7->tf_level,
      sizeof(VAR_7->tf_level), VAR_3);
  VAR_20 = (u_long)FUNC_0((db_addr_t)&VAR_7->tf_pil,
      sizeof(VAR_7->tf_pil), VAR_3);
  FUNC_1(" level=%#lx pil=%#lx", VAR_19, VAR_20);
  break;
 default:
  break;
 }
 VAR_22 = (u_long)FUNC_0((db_addr_t)&VAR_7->tf_out[7],
     sizeof(VAR_7->tf_out[7]), VAR_3);
 FUNC_1(" %%o7=%#lx --\n", VAR_22);
 VAR_23 = (VAR_15 & VAR_4) == 0;
 if (VAR_23) {
  VAR_14 = FUNC_0((db_addr_t)&VAR_7->tf_tpc,
      sizeof(VAR_7->tf_tpc), VAR_3);
  FUNC_1("userland() at ");
  FUNC_2(VAR_14, VAR_1);
  FUNC_1("\n");
  FUNC_5(VAR_6, VAR_7, VAR_8);
 }
 return (VAR_23);
}
