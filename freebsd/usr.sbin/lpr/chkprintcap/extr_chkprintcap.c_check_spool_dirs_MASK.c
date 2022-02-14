
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirlist {int printer; int path; } ;


 struct dirlist* FUNC_0 (int *) ;
 struct dirlist* FUNC_1 (struct dirlist*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct dirlist*,struct dirlist*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int ,int ,...) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct dirlist *VAR_3, *VAR_4;

 for (VAR_3 = FUNC_0(&VAR_0); VAR_3; VAR_3 = VAR_4) {
  VAR_4 = FUNC_1(VAR_3, VAR_1);

  if (VAR_4 != ((void*)0) && FUNC_2(VAR_3, VAR_4)) {
   ++VAR_2;
   if (FUNC_3(VAR_3->path, VAR_4->path) == 0) {
    FUNC_4("%s and %s share the same spool, %s",
          VAR_3->printer, VAR_4->printer, VAR_3->path);
   } else {
    FUNC_4("%s (%s) and %s (%s) are the same "
          "directory", VAR_3->path, VAR_3->printer,
          VAR_4->path, VAR_4->printer);
   }
   continue;
  }

 }
}
