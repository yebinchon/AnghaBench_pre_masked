
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ignoretab {int i_count; struct ignore** i_head; } ;
struct ignore {struct ignore* i_link; void* i_field; } ;
typedef int field ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ignoretab*,char const*) ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (char*,struct ignoretab*) ;
 int FUNC_5 (void*,char*) ;
 scalar_t__ FUNC_6 (char*) ;

int
FUNC_7(char **VAR_1, struct ignoretab *VAR_2, const char *VAR_3)
{
 char VAR_4[VAR_0];
 char **VAR_5;
 struct ignore *VAR_6;
 int VAR_7;

 if (*VAR_1 == ((void*)0))
  return (FUNC_2(VAR_2, VAR_3));
 for (VAR_5 = VAR_1; *VAR_5 != 0; VAR_5++) {
  FUNC_3(VAR_4, *VAR_5, sizeof(VAR_4));
  if (FUNC_4(VAR_4, VAR_2))
   continue;
  VAR_7 = FUNC_1(VAR_4);
  VAR_6 = FUNC_0(1, sizeof(struct ignore));
  VAR_6->i_field = FUNC_0((unsigned)FUNC_6(VAR_4) + 1,
      sizeof(char));
  FUNC_5(VAR_6->i_field, VAR_4);
  VAR_6->i_link = VAR_2->i_head[VAR_7];
  VAR_2->i_head[VAR_7] = VAR_6;
  VAR_2->i_count++;
 }
 return (0);
}
