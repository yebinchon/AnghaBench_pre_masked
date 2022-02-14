
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_oid ;
typedef int git_buf ;
typedef int git_array_oid_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 (int *,char) ;
 scalar_t__ FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,char*,int const*) ;
 int FUNC_8 (int *,char*,int const*) ;

__attribute__((used)) static int FUNC_9(
 git_buf *VAR_0,
 const git_signature *VAR_1,
 const git_signature *VAR_2,
 const char *VAR_3,
 const char *VAR_4,
 const git_oid *VAR_5,
 git_array_oid_t *VAR_6)
{
 size_t VAR_7 = 0;
 const git_oid *VAR_8;

 FUNC_0(VAR_0 && VAR_5);

 FUNC_7(VAR_0, "tree ", VAR_5);

 for (VAR_7 = 0; VAR_7 < FUNC_2(*VAR_6); VAR_7++) {
  VAR_8 = FUNC_1(*VAR_6, VAR_7);
  FUNC_7(VAR_0, "parent ", VAR_8);
 }

 FUNC_8(VAR_0, "author ", VAR_1);
 FUNC_8(VAR_0, "committer ", VAR_2);

 if (VAR_3 != ((void*)0))
  FUNC_4(VAR_0, "encoding %s\n", VAR_3);

 FUNC_5(VAR_0, '\n');

 if (FUNC_6(VAR_0, VAR_4) < 0)
  goto on_error;

 return 0;

on_error:
 FUNC_3(VAR_0);
 return -1;
}
