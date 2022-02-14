
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_compunit {int type; char* s; struct s_compunit* next; } ;
typedef enum e_cut { ____Placeholder_e_cut } e_cut ;


 struct s_compunit** VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct s_compunit* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(enum e_cut VAR_1, char *VAR_2)
{
 struct s_compunit *VAR_3;

 if ((VAR_3 = FUNC_1(sizeof(struct s_compunit))) == ((void*)0))
  FUNC_0(1, "malloc");
 VAR_3->type = VAR_1;
 VAR_3->s = VAR_2;
 VAR_3->next = ((void*)0);
 *VAR_0 = VAR_3;
 VAR_0 = &VAR_3->next;
}
