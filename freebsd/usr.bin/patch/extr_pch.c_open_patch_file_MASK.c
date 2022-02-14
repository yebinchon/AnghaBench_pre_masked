
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,int,int ,int ) ;
 scalar_t__ FUNC_5 (int ,struct stat*) ;
 int FUNC_6 (int ,int,int,int *) ;
 int FUNC_7 (int ,long) ;
 int VAR_3 ;
 int FUNC_8 (char*,char const*) ;
 int * VAR_4 ;
 int FUNC_9 () ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (char const*,char*) ;

void
FUNC_11(const char *VAR_6)
{
 struct stat VAR_7;
 int VAR_8, VAR_9;

 if (VAR_6 == ((void*)0) || *VAR_6 == '\0' || FUNC_10(VAR_6, "-")) {
  VAR_4 = FUNC_3(VAR_0, "w");
  if (VAR_4 == ((void*)0))
   FUNC_8("can't create %s", VAR_0);
  while ((VAR_8 = FUNC_4(VAR_1, 1, VAR_2, VAR_5)) > 0) {
   VAR_9 = FUNC_6(VAR_1, 1, VAR_8, VAR_4);
   if (VAR_8 != VAR_9)
    FUNC_8("write error to %s", VAR_0);
  }
  if (FUNC_1(VAR_4) || FUNC_0(VAR_4))
   FUNC_8("can't write %s", VAR_0);
  VAR_6 = VAR_0;
 }
 VAR_4 = FUNC_3(VAR_6, "r");
 if (VAR_4 == ((void*)0))
  FUNC_8("patch file %s not found", VAR_6);
 if (FUNC_5(FUNC_2(VAR_4), &VAR_7))
  FUNC_8("can't stat %s", VAR_6);
 VAR_3 = VAR_7.st_size;
 FUNC_7(0, 1L);
 FUNC_9();
}
