
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_function_set {int dummy; } ;
struct tcp_function_block {int tfb_refcnt; } ;


 struct tcp_function_block* FUNC_0 (struct tcp_function_set*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

struct tcp_function_block *
FUNC_4(struct tcp_function_set *VAR_1)
{
 struct tcp_function_block *VAR_2;

 FUNC_2(&VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_1(&VAR_2->tfb_refcnt);
 FUNC_3(&VAR_0);
 return(VAR_2);
}
