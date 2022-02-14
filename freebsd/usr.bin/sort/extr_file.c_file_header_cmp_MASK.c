
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_header {scalar_t__ file_pos; int si; int * fr; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(struct file_header *VAR_0, struct file_header *VAR_1)
{

 if (VAR_0 == VAR_1)
  return (0);
 else {
  if (VAR_0->fr == ((void*)0)) {
   return ((VAR_1->fr == ((void*)0)) ? 0 : +1);
  } else if (VAR_1->fr == ((void*)0))
   return (-1);
  else {
   int VAR_2;

   VAR_2 = FUNC_0(&(VAR_0->si), &(VAR_1->si));
   if (!VAR_2)
    return ((VAR_0->file_pos < VAR_1->file_pos) ? -1 : +1);
   return (VAR_2);
  }
 }
}
