
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct attr_stack {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct attr_stack*,char*,char const*,int,int) ;
 char* FUNC_2 (struct index_state const*,char const*,int *) ;
 char* FUNC_3 (char*,char) ;
 struct attr_stack* FUNC_4 (int,int) ;

__attribute__((used)) static struct attr_stack *FUNC_5(const struct index_state *VAR_0,
            const char *VAR_1,
            int VAR_2)
{
 struct attr_stack *VAR_3;
 char *VAR_4, *VAR_5;
 int VAR_6 = 0;

 if (!VAR_0)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_0, VAR_1, ((void*)0));
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_4(1, sizeof(*VAR_3));
 for (VAR_5 = VAR_4; *VAR_5; ) {
  char *VAR_7;
  int VAR_8;

  VAR_7 = FUNC_3(VAR_5, '\n');
  VAR_8 = (*VAR_7 == '\n');
  *VAR_7 = '\0';
  FUNC_1(VAR_3, VAR_5, VAR_1, ++VAR_6, VAR_2);
  VAR_5 = VAR_7 + VAR_8;
 }
 FUNC_0(VAR_4);
 return VAR_3;
}
