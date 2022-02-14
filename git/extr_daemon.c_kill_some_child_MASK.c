
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pid; } ;
struct child {TYPE_1__ cld; int address; struct child* next; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct child* VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 const struct child *VAR_2, *VAR_3;

 if (!(VAR_2 = VAR_1))
  return;

 for (; (VAR_3 = VAR_2->next); VAR_2 = VAR_3)
  if (!FUNC_0(&VAR_2->address, &VAR_3->address)) {
   FUNC_1(VAR_2->cld.pid, VAR_0);
   break;
  }
}
