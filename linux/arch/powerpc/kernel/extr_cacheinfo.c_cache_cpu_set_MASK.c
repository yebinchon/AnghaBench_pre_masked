
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {struct cache* next_local; int shared_cpu_map; int ofnode; } ;


 int FUNC_0 (int ,char*,int,int ,int ) ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct cache *VAR_0, int VAR_1)
{
 struct cache *VAR_2 = VAR_0;

 while (VAR_2) {
  FUNC_0(FUNC_3(VAR_1, &VAR_2->shared_cpu_map),
     "CPU %i already accounted in %pOF(%s)\n",
     VAR_1, VAR_2->ofnode,
     FUNC_1(VAR_2));
  FUNC_2(VAR_1, &VAR_2->shared_cpu_map);
  VAR_2 = VAR_2->next_local;
 }
}
