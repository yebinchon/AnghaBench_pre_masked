
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am_state {int author_date; int author_email; int author_name; } ;


 char* FUNC_0 (struct am_state*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int *,int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct am_state *VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0, "author-script");

 FUNC_1(!VAR_0->author_name);
 FUNC_1(!VAR_0->author_email);
 FUNC_1(!VAR_0->author_date);

 return FUNC_2(VAR_1, &VAR_0->author_name,
      &VAR_0->author_email, &VAR_0->author_date, 1);
}
