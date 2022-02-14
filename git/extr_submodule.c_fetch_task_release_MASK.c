
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetch_task {scalar_t__ repo; int * sub; scalar_t__ free_sub; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct fetch_task *VAR_0)
{
 if (VAR_0->free_sub)
  FUNC_1((void*)VAR_0->sub);
 VAR_0->free_sub = 0;
 VAR_0->sub = ((void*)0);

 if (VAR_0->repo)
  FUNC_2(VAR_0->repo);
 FUNC_0(VAR_0->repo);
}
