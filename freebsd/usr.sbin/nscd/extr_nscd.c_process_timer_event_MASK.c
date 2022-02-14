
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct runtime_env {int dummy; } ;
struct query_state {int dummy; } ;
struct kevent {int ident; scalar_t__ udata; } ;
struct configuration {int dummy; } ;


 int FUNC_0 (void (*) (struct kevent*,struct runtime_env*,struct configuration*)) ;
 int FUNC_1 (void (*) (struct kevent*,struct runtime_env*,struct configuration*)) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct query_state*) ;

__attribute__((used)) static void
FUNC_4(struct kevent *VAR_0, struct runtime_env *VAR_1,
 struct configuration *VAR_2)
{
 struct query_state *VAR_3;

 FUNC_0(FUNC_4);
 VAR_3 = (struct query_state *)VAR_0->udata;
 FUNC_3(VAR_3);
 FUNC_2(VAR_0->ident);
 FUNC_1(FUNC_4);
}
