
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int migration_worker; int wq; } ;


 scalar_t__ FUNC_0 (struct cache*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct cache *VAR_0)
{
 if (FUNC_0(VAR_0))
  return;

 FUNC_1(VAR_0->wq, &VAR_0->migration_worker);
}
