
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_flist {char* fname; struct s_flist* next; } ;


 int FUNC_0 (int,char*) ;
 struct s_flist** VAR_0 ;
 struct s_flist* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(char *VAR_1)
{
 struct s_flist *VAR_2;

 if ((VAR_2 = FUNC_1(sizeof(struct s_flist))) == ((void*)0))
  FUNC_0(1, "malloc");
 VAR_2->next = ((void*)0);
 *VAR_0 = VAR_2;
 VAR_2->fname = VAR_1;
 VAR_0 = &VAR_2->next;
}
