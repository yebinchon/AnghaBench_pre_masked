
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_fileinfo {scalar_t__ line; int * fp; int * name; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,struct mtree_fileinfo*,int ) ;
 struct mtree_fileinfo* FUNC_1 (int) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 (struct mtree_fileinfo*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_3, FILE *VAR_4)
{
 struct mtree_fileinfo *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5));
 if (FUNC_4(VAR_3, "-") == 0)
  VAR_5->name = FUNC_2("(stdin)");
 else
  VAR_5->name = FUNC_2(VAR_3);
 if (VAR_5->name == ((void*)0)) {
  FUNC_3(VAR_5);
  return (VAR_0);
 }

 VAR_5->fp = VAR_4;
 VAR_5->line = 0;

 FUNC_0(&VAR_1, VAR_5, VAR_2);
 return (0);
}
