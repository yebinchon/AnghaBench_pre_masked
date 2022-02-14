
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct mtree_fileinfo {char* name; int line; } ;


 struct mtree_fileinfo* FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, const char *VAR_3, va_list VAR_4)
{
 struct mtree_fileinfo *VAR_5;

 if (VAR_2 != ((void*)0)) {
  VAR_5 = FUNC_0(&VAR_0);
  if (VAR_5 != ((void*)0))
   FUNC_1(VAR_1, "%s:%u: ", VAR_5->name, VAR_5->line);
  FUNC_1(VAR_1, "%s: ", VAR_2);
 }
 FUNC_2(VAR_1, VAR_3, VAR_4);
}
