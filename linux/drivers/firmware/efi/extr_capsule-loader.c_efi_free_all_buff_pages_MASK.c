
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct capsule_info {size_t index; int * pages; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct capsule_info *VAR_1)
{
 while (VAR_1->index > 0)
  FUNC_0(VAR_1->pages[--VAR_1->index]);

 VAR_1->index = VAR_0;
}
