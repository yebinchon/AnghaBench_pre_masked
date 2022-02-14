
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s_flist {int fname; struct s_flist* next; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct s_flist* VAR_1 ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int
FUNC_4(void)
{
 struct s_flist *VAR_2;
 FILE *VAR_3;
 int VAR_4;

 VAR_2 = VAR_1;
 while ((VAR_2 = VAR_2->next) != ((void*)0)) {
  if ((VAR_3 = FUNC_1(VAR_2->fname, "r")) == ((void*)0))
   continue;

  if ((VAR_4 = FUNC_2(VAR_3)) != VAR_0) {




   FUNC_3(VAR_4, VAR_3);
   FUNC_0(VAR_3);
   return (1);
  }

  FUNC_0(VAR_3);
 }

 return (0);
}
