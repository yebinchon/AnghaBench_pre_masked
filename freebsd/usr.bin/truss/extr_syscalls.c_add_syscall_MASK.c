
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct syscall {int dummy; } ;
struct procabi {int extra_syscalls; struct syscall** syscalls; } ;
struct extra_syscall {size_t number; struct syscall* sc; } ;


 int FUNC_0 (int *,struct extra_syscall*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct extra_syscall* FUNC_2 (int) ;
 size_t FUNC_3 (struct syscall**) ;

__attribute__((used)) static void
FUNC_4(struct procabi *VAR_1, u_int VAR_2, struct syscall *VAR_3)
{
 struct extra_syscall *VAR_4;

 if (VAR_2 < FUNC_3(VAR_1->syscalls)) {
  FUNC_1(VAR_1->syscalls[VAR_2] == ((void*)0));
  VAR_1->syscalls[VAR_2] = VAR_3;
 } else {
  VAR_4 = FUNC_2(sizeof(*VAR_4));
  VAR_4->sc = VAR_3;
  VAR_4->number = VAR_2;
  FUNC_0(&VAR_1->extra_syscalls, VAR_4, VAR_0);
 }
}
