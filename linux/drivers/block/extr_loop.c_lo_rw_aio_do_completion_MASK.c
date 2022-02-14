
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct loop_cmd {int * bvec; int ref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct request*) ;
 struct request* FUNC_2 (struct loop_cmd*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct loop_cmd *VAR_0)
{
 struct request *VAR_1 = FUNC_2(VAR_0);

 if (!FUNC_0(&VAR_0->ref))
  return;
 FUNC_3(VAR_0->bvec);
 VAR_0->bvec = ((void*)0);
 FUNC_1(VAR_1);
}
