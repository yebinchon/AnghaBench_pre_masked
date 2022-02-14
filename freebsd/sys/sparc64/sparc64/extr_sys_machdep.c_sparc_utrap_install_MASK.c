
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uia ;
typedef int ua ;
struct thread {TYPE_2__* td_proc; } ;
struct sparc_utrap_install_args {int num; char* handlers; int type; scalar_t__ new_precise; int * old_precise; int * old_deferred; } ;
struct sparc_utrap_args {int num; char* handlers; int type; scalar_t__ new_precise; int * old_precise; int * old_deferred; } ;
struct md_utrap {scalar_t__* ut_precise; } ;
struct TYPE_3__ {struct md_utrap* md_utrap; } ;
struct TYPE_4__ {TYPE_1__ p_md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct sparc_utrap_install_args*,int) ;
 int FUNC_1 (int *,long) ;
 struct md_utrap* FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(struct thread *VAR_3, char *VAR_4)
{
 struct sparc_utrap_install_args VAR_5;
 struct sparc_utrap_args VAR_6;
 struct md_utrap *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = VAR_3->td_proc->p_md.md_utrap;
 if ((VAR_8 = FUNC_0(VAR_4, &VAR_5, sizeof(VAR_5))) != 0)
  return (VAR_8);
 if (VAR_5.num < 0 || VAR_5.num > VAR_2 ||
     (VAR_5.handlers == ((void*)0) && VAR_5.num > 0))
  return (VAR_0);
 for (VAR_9 = 0; VAR_9 < VAR_5.num; VAR_9++) {
  if ((VAR_8 = FUNC_0(&VAR_5.handlers[VAR_9], &VAR_6, sizeof(VAR_6))) != 0)
   return (VAR_8);
  if (VAR_6.type != VAR_1 &&
      (VAR_6.type < 0 || VAR_6.type >= VAR_2))
   return (VAR_0);
  if (VAR_6.old_deferred != ((void*)0)) {
   if ((VAR_8 = FUNC_1(VAR_6.old_deferred, 0)) != 0)
    return (VAR_8);
  }
  if (VAR_6.old_precise != ((void*)0)) {
   VAR_8 = FUNC_1(VAR_6.old_precise,
       VAR_7 != ((void*)0) ? (long)VAR_7->ut_precise[VAR_6.type] : 0);
   if (VAR_8 != 0)
    return (VAR_8);
  }
  if (VAR_6.type != VAR_1) {
   if (VAR_7 == ((void*)0)) {
    VAR_7 = FUNC_2();
    VAR_3->td_proc->p_md.md_utrap = VAR_7;
   }
   VAR_7->ut_precise[VAR_6.type] = VAR_6.new_precise;
  }
 }
 return (0);
}
