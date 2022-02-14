
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {int * c_name; } ;


 struct cmd* VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *) ;

const struct cmd *
FUNC_1(char VAR_1[])
{
 const struct cmd *VAR_2;
 if (*VAR_1 == '#')
     *(VAR_1+1) = '\0';


 for (VAR_2 = &VAR_0[0]; VAR_2->c_name != ((void*)0); VAR_2++)
  if (FUNC_0(VAR_1, VAR_2->c_name))
   return (VAR_2);
 return (((void*)0));
}
