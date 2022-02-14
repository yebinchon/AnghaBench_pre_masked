
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtas_args {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct rtas_args*,scalar_t__,int ,int,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
 static struct rtas_args VAR_2;

 FUNC_2();

 FUNC_0(VAR_1 == VAR_0);

 FUNC_4("cpu %u (hwid %u) Ready to die...\n",
        FUNC_6(), FUNC_1());

 FUNC_5(&VAR_2, VAR_1, 0, 1, ((void*)0));

 FUNC_3("Alas, I survived.\n");
}
