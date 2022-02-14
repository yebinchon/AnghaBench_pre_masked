
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpl ;
struct stat {int st_mode; int st_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_9(const char *VAR_6, const char *VAR_7,
    const struct stat *VAR_8)
{
 char VAR_9[VAR_1];

 if (VAR_4 && VAR_8 != ((void*)0)) {
  (void)FUNC_6(VAR_9, sizeof(VAR_9), "%s.inst.XXXXXX", VAR_7);

  if (FUNC_3(VAR_9) == ((void*)0))
   FUNC_1(VAR_0, "%s: mktemp", VAR_9);

  if (FUNC_7(VAR_6, VAR_9) == -1)
   FUNC_1(VAR_0, "symlink %s -> %s", VAR_6, VAR_9);

  if (VAR_8->st_mode & VAR_3 && FUNC_5(VAR_7) == -1) {
   (void)FUNC_8(VAR_9);
   FUNC_1(VAR_0, "%s", VAR_7);
  }





  if (VAR_5)
   FUNC_2("install: symlink %s -> %s\n",
       VAR_6, VAR_7);
  if (FUNC_4(VAR_9, VAR_7) == -1) {

   (void)FUNC_8(VAR_9);
   FUNC_1(VAR_0, "%s: rename", VAR_7);
  }
 } else {
  if (VAR_5)
   FUNC_2("install: symlink %s -> %s\n",
       VAR_6, VAR_7);
  if (FUNC_7(VAR_6, VAR_7) == -1)
   FUNC_1(VAR_0, "symlink %s -> %s", VAR_6, VAR_7);
 }
}
