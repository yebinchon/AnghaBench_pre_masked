
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ignoretab {int i_count; struct ignore** i_head; } ;
struct ignore {int i_field; struct ignore* i_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char**,int ,int,int ) ;
 scalar_t__ FUNC_2 (int) ;

int
FUNC_3(struct ignoretab *VAR_2, const char *VAR_3)
{
 int VAR_4;
 struct ignore *VAR_5;
 char **VAR_6, **VAR_7;

 if (VAR_2->i_count == 0) {
  FUNC_0("No fields currently being %s.\n", VAR_3);
  return (0);
 }
 VAR_7 = (char **)FUNC_2((VAR_2->i_count + 1) * sizeof(char *));
 VAR_6 = VAR_7;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  for (VAR_5 = VAR_2->i_head[VAR_4]; VAR_5 != ((void*)0); VAR_5 = VAR_5->i_link)
   *VAR_6++ = VAR_5->i_field;
 *VAR_6 = 0;
 FUNC_1(VAR_7, VAR_2->i_count, sizeof(char *), VAR_1);
 for (VAR_6 = VAR_7; *VAR_6 != 0; VAR_6++)
  FUNC_0("%s\n", *VAR_6);
 return (0);
}
