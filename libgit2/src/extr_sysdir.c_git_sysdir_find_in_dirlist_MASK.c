
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_sysdir_t ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 char const VAR_2 ;
 char* FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,char const*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__*,char const*,size_t) ;
 int FUNC_6 (int ,char*,char const*,char const*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__ const**,int ) ;

__attribute__((used)) static int FUNC_9(
 git_buf *VAR_3,
 const char *VAR_4,
 git_sysdir_t VAR_5,
 const char *VAR_6)
{
 size_t VAR_7;
 const char *VAR_8, *VAR_9 = ((void*)0);
 const git_buf *VAR_10;

 FUNC_0(FUNC_8(&VAR_10, VAR_5));
 if (!VAR_10 || !FUNC_4(VAR_10))
  goto done;

 for (VAR_8 = FUNC_1(VAR_10); VAR_8; VAR_8 = VAR_9) {

  for (VAR_9 = VAR_8; *VAR_9; ++VAR_9) {
   if (*VAR_9 == VAR_2 &&
    (VAR_9 <= VAR_8 || VAR_9[-1] != '\\'))
    break;
  }

  VAR_7 = (size_t)(VAR_9 - VAR_8);
  VAR_9 = (*VAR_9 ? VAR_9 + 1 : ((void*)0));
  if (!VAR_7)
   continue;

  FUNC_0(FUNC_5(VAR_3, VAR_8, VAR_7));
  if (VAR_4)
   FUNC_0(FUNC_3(VAR_3, VAR_3->ptr, VAR_4));

  if (FUNC_7(VAR_3->ptr))
   return 0;
 }

done:
 FUNC_2(VAR_3);
 FUNC_6(VAR_1, "the %s file '%s' doesn't exist", VAR_6, VAR_4);
 return VAR_0;
}
