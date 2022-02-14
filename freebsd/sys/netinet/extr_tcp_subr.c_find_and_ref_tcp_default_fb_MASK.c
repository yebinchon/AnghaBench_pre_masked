
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_function_block {int tfb_refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tcp_function_block* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct tcp_function_block *
FUNC_3(void)
{
 struct tcp_function_block *VAR_2;

 FUNC_1(&VAR_1);
 VAR_2 = VAR_0;
 FUNC_0(&VAR_2->tfb_refcnt);
 FUNC_2(&VAR_1);
 return (VAR_2);
}
