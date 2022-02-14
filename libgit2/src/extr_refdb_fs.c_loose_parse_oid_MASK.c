
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char const*) ;
 scalar_t__ FUNC_4 (int *,char const*) ;

__attribute__((used)) static int FUNC_5(
 git_oid *VAR_2, const char *VAR_3, git_buf *VAR_4)
{
 const char *VAR_5 = FUNC_1(VAR_4);

 if (FUNC_2(VAR_4) < VAR_1)
  goto corrupted;


 if (FUNC_4(VAR_2, VAR_5) < 0)
  goto corrupted;


 VAR_5 += VAR_1;
 if (*VAR_5 == '\0' || FUNC_0(*VAR_5))
  return 0;

corrupted:
 FUNC_3(VAR_0, "corrupted loose reference file: %s", VAR_3);
 return -1;
}
