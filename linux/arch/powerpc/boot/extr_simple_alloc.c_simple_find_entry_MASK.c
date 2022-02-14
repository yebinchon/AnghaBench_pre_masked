
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_info {int flags; unsigned long base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct alloc_info* VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static struct alloc_info *FUNC_0(void *VAR_4)
{
 unsigned long VAR_5;
 struct alloc_info *VAR_6 = VAR_2;

 for (VAR_5=0; VAR_5<VAR_3; VAR_5++,VAR_6++) {
  if (!(VAR_6->flags & VAR_0))
   break;
  if ((VAR_6->flags & VAR_1) &&
      (VAR_6->base == (unsigned long)VAR_4))
   return VAR_6;
 }
 return ((void*)0);
}
