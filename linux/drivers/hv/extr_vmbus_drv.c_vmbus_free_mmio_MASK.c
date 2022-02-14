
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; struct resource* sibling; } ;
typedef scalar_t__ resource_size_t ;


 int FUNC_0 (struct resource*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 struct resource* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;

void FUNC_4(resource_size_t VAR_2, resource_size_t VAR_3)
{
 struct resource *VAR_4;

 FUNC_1(&VAR_1);
 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->sibling) {
  if ((VAR_4->start >= VAR_2 + VAR_3) || (VAR_4->end <= VAR_2))
   continue;

  FUNC_0(VAR_4, VAR_2, VAR_3);
 }
 FUNC_2(VAR_2, VAR_3);
 FUNC_3(&VAR_1);

}
