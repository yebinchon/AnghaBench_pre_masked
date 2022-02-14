
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_4__ {int ksi_signo; int ksi_code; void* ksi_addr; } ;
typedef TYPE_1__ ksiginfo_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct thread*,TYPE_1__*) ;

__attribute__((used)) static __inline void
FUNC_2(struct thread *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
 ksiginfo_t VAR_4;

 FUNC_0(&VAR_4);
 VAR_4.ksi_signo = VAR_1;
 VAR_4.ksi_code = VAR_2;
 VAR_4.ksi_addr = VAR_3;
 FUNC_1(VAR_0, &VAR_4);
}
