
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mc_request {int regs; TYPE_1__* cmd; } ;
struct mconsole_entry {int list; struct mc_request request; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int regs; } ;
struct TYPE_3__ {scalar_t__ context; int (* handler ) (struct mc_request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 () ;
 struct mconsole_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (long,struct mc_request*) ;
 int FUNC_5 (struct mc_request*,char*,int,int ) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mc_request*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_5, void *VAR_6)
{

 long VAR_7;
 struct mconsole_entry *VAR_8;
 static struct mc_request VAR_9;

 VAR_7 = (long) VAR_6;
 while (FUNC_4(VAR_7, &VAR_9)) {
  if (VAR_9.cmd->context == VAR_2)
   (*VAR_9.cmd->handler)(&VAR_9);
  else {
   VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0);
   if (VAR_8 == ((void*)0))
    FUNC_5(&VAR_9, "Out of memory", 1, 0);
   else {
    VAR_8->request = VAR_9;
    VAR_8->request.regs = FUNC_0()->regs;
    FUNC_2(&VAR_8->list, &VAR_3);
   }
  }
 }
 if (!FUNC_3(&VAR_3))
  FUNC_6(&VAR_4);
 return VAR_1;
}
