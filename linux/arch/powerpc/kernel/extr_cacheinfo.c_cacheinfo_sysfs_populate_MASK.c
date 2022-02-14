
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_dir {int dummy; } ;
struct cache {struct cache* next_local; } ;


 struct cache_dir* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cache*,int,struct cache_dir*) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_0,
         struct cache *VAR_1)
{
 struct cache_dir *VAR_2;
 struct cache *VAR_3;
 int VAR_4 = 0;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return;

 VAR_3 = VAR_1;
 while (VAR_3) {
  FUNC_1(VAR_3, VAR_4, VAR_2);
  VAR_4++;
  VAR_3 = VAR_3->next_local;
 }
}
