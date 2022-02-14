
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grouphead {struct group* g_list; struct grouphead* g_link; void* g_name; } ;
struct group {struct group* ge_link; void* ge_name; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 struct grouphead* FUNC_2 (char*) ;
 struct grouphead** VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char**) ;
 void* FUNC_7 (char*) ;

int
FUNC_8(void *VAR_2)
{
 char **VAR_3 = VAR_2;
 struct grouphead *VAR_4;
 struct group *VAR_5;
 char **VAR_6, *VAR_7, **VAR_8;
 int VAR_9, VAR_10;

 if (*VAR_3 == ((void*)0)) {
  for (VAR_9 = 0, VAR_10 = 1; VAR_9 < VAR_0; VAR_9++)
   for (VAR_4 = VAR_1[VAR_9]; VAR_4 != ((void*)0); VAR_4 = VAR_4->g_link)
    VAR_10++;
  VAR_6 = (char **)FUNC_5(VAR_10 * sizeof(*VAR_6));
  for (VAR_9 = 0, VAR_8 = VAR_6; VAR_9 < VAR_0; VAR_9++)
   for (VAR_4 = VAR_1[VAR_9]; VAR_4 != ((void*)0); VAR_4 = VAR_4->g_link)
    *VAR_8++ = VAR_4->g_name;
  *VAR_8 = ((void*)0);
  FUNC_6(VAR_6);
  for (VAR_8 = VAR_6; *VAR_8 != ((void*)0); VAR_8++)
   FUNC_4(*VAR_8);
  return (0);
 }
 if (VAR_3[1] == ((void*)0)) {
  FUNC_4(*VAR_3);
  return (0);
 }
 VAR_7 = *VAR_3;
 VAR_9 = FUNC_3(VAR_7);
 if ((VAR_4 = FUNC_2(VAR_7)) == ((void*)0)) {
  if ((VAR_4 = FUNC_0(1, sizeof(*VAR_4))) == ((void*)0))
   FUNC_1(1, "Out of memory");
  VAR_4->g_name = FUNC_7(VAR_7);
  VAR_4->g_list = ((void*)0);
  VAR_4->g_link = VAR_1[VAR_9];
  VAR_1[VAR_9] = VAR_4;
 }







 for (VAR_6 = VAR_3+1; *VAR_6 != ((void*)0); VAR_6++) {
  if ((VAR_5 = FUNC_0(1, sizeof(*VAR_5))) == ((void*)0))
   FUNC_1(1, "Out of memory");
  VAR_5->ge_name = FUNC_7(*VAR_6);
  VAR_5->ge_link = VAR_4->g_list;
  VAR_4->g_list = VAR_5;
 }
 return (0);
}
