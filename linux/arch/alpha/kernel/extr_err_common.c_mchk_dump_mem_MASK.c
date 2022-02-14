
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned int,unsigned long,char*) ;

void
FUNC_1(void *VAR_1, size_t VAR_2, char **VAR_3)
{
 unsigned long *VAR_4 = VAR_1;
 size_t VAR_5;

 for (VAR_5 = 0; (VAR_5 * sizeof(*VAR_4)) < VAR_2; VAR_5++) {
  if (VAR_3 && !VAR_3[VAR_5])
   VAR_3 = ((void*)0);
  FUNC_0("%s    %08x: %016lx    %s\n",
         VAR_0,
         (unsigned)(VAR_5 * sizeof(*VAR_4)), VAR_4[VAR_5],
         VAR_3 ? VAR_3[VAR_5] : "");
 }
}
