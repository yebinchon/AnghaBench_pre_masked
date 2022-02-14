
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct unwind_state {unsigned long ip; unsigned long sp; int signal; int error; unsigned long bp; int full_regs; TYPE_1__ stack_info; struct pt_regs* regs; int graph_idx; int task; } ;
struct pt_regs {unsigned long r10; unsigned long r13; unsigned long di; unsigned long dx; unsigned long bp; } ;
struct orc_entry {int sp_reg; unsigned long sp_offset; int type; int bp_reg; unsigned long bp_offset; int end; } ;
typedef enum stack_type { ____Placeholder_stack_type } stack_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct unwind_state*,unsigned long,unsigned long*,unsigned long*) ;
 int FUNC_1 (struct unwind_state*,unsigned long,unsigned long*) ;
 int FUNC_2 (struct unwind_state*,unsigned long,unsigned long*,unsigned long*) ;
 unsigned long FUNC_3 (int ,int *,unsigned long,void*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,void*,int) ;
 struct orc_entry* FUNC_5 (int) ;
 struct orc_entry VAR_2 ;
 int FUNC_6 (char*,void*,...) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct unwind_state*) ;
 scalar_t__ FUNC_10 (struct pt_regs*) ;

bool FUNC_11(struct unwind_state *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6 = VAR_3->ip, VAR_7 = VAR_3->sp;
 enum stack_type VAR_8 = VAR_3->stack_info.type;
 struct orc_entry *VAR_9;
 bool VAR_10 = 0;

 if (FUNC_9(VAR_3))
  return 0;


 FUNC_7();


 if (VAR_3->regs && FUNC_10(VAR_3->regs))
  goto the_end;







 VAR_9 = FUNC_5(VAR_3->signal ? VAR_3->ip : VAR_3->ip - 1);
 if (!VAR_9) {






  VAR_9 = &VAR_2;
  VAR_3->error = 1;
 }


 if (VAR_9->sp_reg == 131) {
  if (!VAR_9->end)
   goto err;

  goto the_end;
 }


 switch (VAR_9->sp_reg) {
 case 133:
  VAR_5 = VAR_3->sp + VAR_9->sp_offset;
  break;

 case 140:
  VAR_5 = VAR_3->bp + VAR_9->sp_offset;
  break;

 case 132:
  VAR_5 = VAR_3->sp + VAR_9->sp_offset;
  VAR_10 = 1;
  break;

 case 139:
  VAR_5 = VAR_3->bp + VAR_9->sp_offset;
  VAR_10 = 1;
  break;

 case 135:
  if (!VAR_3->regs || !VAR_3->full_regs) {
   FUNC_6("missing regs for base reg R10 at ip %pB\n",
     (void *)VAR_3->ip);
   goto err;
  }
  VAR_5 = VAR_3->regs->r10;
  break;

 case 134:
  if (!VAR_3->regs || !VAR_3->full_regs) {
   FUNC_6("missing regs for base reg R13 at ip %pB\n",
     (void *)VAR_3->ip);
   goto err;
  }
  VAR_5 = VAR_3->regs->r13;
  break;

 case 138:
  if (!VAR_3->regs || !VAR_3->full_regs) {
   FUNC_6("missing regs for base reg DI at ip %pB\n",
     (void *)VAR_3->ip);
   goto err;
  }
  VAR_5 = VAR_3->regs->di;
  break;

 case 137:
  if (!VAR_3->regs || !VAR_3->full_regs) {
   FUNC_6("missing regs for base reg DX at ip %pB\n",
     (void *)VAR_3->ip);
   goto err;
  }
  VAR_5 = VAR_3->regs->dx;
  break;

 default:
  FUNC_6("unknown SP base reg %d for ip %pB\n",
    VAR_9->sp_reg, (void *)VAR_3->ip);
  goto err;
 }

 if (VAR_10) {
  if (!FUNC_1(VAR_3, VAR_5, &VAR_5))
   goto err;
 }


 switch (VAR_9->type) {
 case 130:
  VAR_4 = VAR_5 - sizeof(long);

  if (!FUNC_1(VAR_3, VAR_4, &VAR_3->ip))
   goto err;

  VAR_3->ip = FUNC_3(VAR_3->task, &VAR_3->graph_idx,
        VAR_3->ip, (void *)VAR_4);

  VAR_3->sp = VAR_5;
  VAR_3->regs = ((void*)0);
  VAR_3->signal = 0;
  break;

 case 129:
  if (!FUNC_2(VAR_3, VAR_5, &VAR_3->ip, &VAR_3->sp)) {
   FUNC_6("can't dereference registers at %p for ip %pB\n",
     (void *)VAR_5, (void *)VAR_6);
   goto err;
  }

  VAR_3->regs = (struct pt_regs *)VAR_5;
  VAR_3->full_regs = 1;
  VAR_3->signal = 1;
  break;

 case 128:
  if (!FUNC_0(VAR_3, VAR_5, &VAR_3->ip, &VAR_3->sp)) {
   FUNC_6("can't dereference iret registers at %p for ip %pB\n",
     (void *)VAR_5, (void *)VAR_6);
   goto err;
  }

  VAR_3->regs = (void *)VAR_5 - VAR_0;
  VAR_3->full_regs = 0;
  VAR_3->signal = 1;
  break;

 default:
  FUNC_6("unknown .orc_unwind entry type %d for ip %pB\n",
    VAR_9->type, (void *)VAR_6);
  break;
 }


 switch (VAR_9->bp_reg) {
 case 131:
  if (VAR_3->regs && VAR_3->full_regs)
   VAR_3->bp = VAR_3->regs->bp;
  break;

 case 136:
  if (!FUNC_1(VAR_3, VAR_5 + VAR_9->bp_offset, &VAR_3->bp))
   goto err;
  break;

 case 140:
  if (!FUNC_1(VAR_3, VAR_3->bp + VAR_9->bp_offset, &VAR_3->bp))
   goto err;
  break;

 default:
  FUNC_6("unknown BP base reg %d for ip %pB\n",
    VAR_9->bp_reg, (void *)VAR_6);
  goto err;
 }


 if (VAR_3->stack_info.type == VAR_8 &&
     FUNC_4(&VAR_3->stack_info, (void *)VAR_3->sp, sizeof(long)) &&
     VAR_3->sp <= VAR_7) {
  FUNC_6("stack going in the wrong direction? ip=%pB\n",
    (void *)VAR_6);
  goto err;
 }

 FUNC_8();
 return 1;

err:
 VAR_3->error = 1;

the_end:
 FUNC_8();
 VAR_3->stack_info.type = VAR_1;
 return 0;
}
