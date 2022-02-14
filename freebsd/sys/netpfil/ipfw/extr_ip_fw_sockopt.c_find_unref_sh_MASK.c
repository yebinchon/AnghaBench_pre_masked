
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfw_sopt_handler {int refcnt; int version; int opcode; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 struct ipfw_sopt_handler* FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct ipfw_sopt_handler *VAR_1)
{
 struct ipfw_sopt_handler *VAR_2;

 FUNC_0();
 VAR_2 = FUNC_3(VAR_1->opcode, VAR_1->version, ((void*)0));
 FUNC_2(VAR_2 != ((void*)0), ("ctl3 handler disappeared"));
 VAR_2->refcnt--;
 VAR_0--;
 FUNC_1();
}
