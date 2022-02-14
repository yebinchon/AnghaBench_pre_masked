
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_pd {int dummy; } ;
struct rxe_mem {int access; int type; int state; struct rxe_pd* pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct rxe_mem*) ;

int FUNC_1(struct rxe_pd *VAR_2,
       int VAR_3, struct rxe_mem *VAR_4)
{
 FUNC_0(VAR_3, VAR_4);

 VAR_4->pd = VAR_2;
 VAR_4->access = VAR_3;
 VAR_4->state = VAR_0;
 VAR_4->type = VAR_1;

 return 0;
}
