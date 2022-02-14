
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_memory {struct agp_memory* next; } ;
struct agp_controller {struct agp_memory* pool; } ;


 int FUNC_0 (struct agp_memory*) ;

__attribute__((used)) static void FUNC_1(struct agp_controller *VAR_0)
{
 struct agp_memory *VAR_1;
 struct agp_memory *VAR_2;

 VAR_1 = VAR_0->pool;

 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }
}
