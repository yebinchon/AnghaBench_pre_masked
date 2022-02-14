
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifolog_file {scalar_t__ fd; int * recbuf; int * zs; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct fifolog_file **VAR_0)
{
 struct fifolog_file *VAR_1;

 VAR_1 = *VAR_0;
 *VAR_0 = ((void*)0);
 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->fd >= 0)
  (void)FUNC_0(VAR_1->fd);
 if (VAR_1->zs != ((void*)0))
  FUNC_1(VAR_1->zs);
 if (VAR_1->recbuf != ((void*)0))
  FUNC_1(VAR_1->recbuf);
}
