
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct dc {size_t link_count; int ** links; } ;


 int FUNC_0 (int **) ;

__attribute__((used)) static void FUNC_1(struct dc *VAR_0)
{
 uint32_t VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->link_count; VAR_1++) {
  if (((void*)0) != VAR_0->links[VAR_1])
   FUNC_0(&VAR_0->links[VAR_1]);
 }
}
