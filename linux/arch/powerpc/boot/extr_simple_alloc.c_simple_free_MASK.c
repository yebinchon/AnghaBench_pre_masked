
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_info {int flags; } ;


 int VAR_0 ;
 struct alloc_info* FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct alloc_info *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 != ((void*)0))
  VAR_2->flags &= ~VAR_0;
}
