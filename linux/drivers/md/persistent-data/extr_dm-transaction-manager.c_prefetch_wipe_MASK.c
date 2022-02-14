
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prefetch_set {int * blocks; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct prefetch_set *VAR_2)
{
 unsigned VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2->blocks[VAR_3] = VAR_0;
}
