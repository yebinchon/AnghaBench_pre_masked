
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gem_object {int * pages; int base; int * sgt; } ;


 int FUNC_0 (int *,int *,int,int) ;
 int FUNC_1 (struct etnaviv_gem_object*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct etnaviv_gem_object *VAR_0)
{
 if (VAR_0->sgt) {
  FUNC_1(VAR_0);
  FUNC_3(VAR_0->sgt);
  FUNC_2(VAR_0->sgt);
  VAR_0->sgt = ((void*)0);
 }
 if (VAR_0->pages) {
  FUNC_0(&VAR_0->base, VAR_0->pages,
      1, 0);

  VAR_0->pages = ((void*)0);
 }
}
