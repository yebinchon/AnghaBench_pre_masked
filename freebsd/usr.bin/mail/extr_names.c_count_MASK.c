
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct name {int n_type; struct name* n_flink; } ;


 int VAR_0 ;

int
FUNC_0(struct name *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_1 != ((void*)0); VAR_1 = VAR_1->n_flink)
  if ((VAR_1->n_type & VAR_0) == 0)
   VAR_2++;
 return (VAR_2);
}
