
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_name {int exists; int path; } ;


 int FUNC_0 (char*,int *,int ) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct file_name *VAR_1, char *VAR_2)
{
 char *VAR_3, *VAR_4;


 while (FUNC_1((unsigned char)*VAR_2))
  VAR_2++;


 for (VAR_3 = VAR_2, VAR_4 = ((void*)0); *VAR_3 != '\0' && !FUNC_1((unsigned char)*VAR_3); VAR_3++)
  if (*VAR_3 == '#')
   VAR_4 = VAR_3;
 if (VAR_4 != ((void*)0))
  *VAR_4 = '\0';

 VAR_1->path = FUNC_0(VAR_2, &VAR_1->exists, VAR_0);
}
