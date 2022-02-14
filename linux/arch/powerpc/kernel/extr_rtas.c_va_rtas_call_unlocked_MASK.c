
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct rtas_args {void** rets; void** args; void* nret; void* nargs; void* token; } ;


 int FUNC_0 (struct rtas_args*) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct rtas_args *VAR_1, int VAR_2, int VAR_3, int VAR_4,
        va_list VAR_5)
{
 int VAR_6;

 VAR_1->token = FUNC_1(VAR_2);
 VAR_1->nargs = FUNC_1(VAR_3);
 VAR_1->nret = FUNC_1(VAR_4);
 VAR_1->rets = &(VAR_1->args[VAR_3]);

 for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6)
  VAR_1->args[VAR_6] = FUNC_1(FUNC_3(VAR_5, VAR_0));

 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
  VAR_1->rets[VAR_6] = 0;

 FUNC_2(FUNC_0(VAR_1));
}
