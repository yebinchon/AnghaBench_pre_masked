
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char const*,char const*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int * FUNC_6 (char const*,char*) ;

int FUNC_7(git_buf *VAR_6, const char *VAR_7, const char *VAR_8)
{
 char VAR_9[VAR_4];

 FUNC_0(VAR_7 && VAR_6);


 if (VAR_8 != ((void*)0) && FUNC_5(VAR_7) < 0) {
  if (FUNC_2(VAR_6, VAR_8, VAR_7) < 0)
   return -1;
  VAR_7 = VAR_6->ptr;
 }

 if (FUNC_6(VAR_7, VAR_9) == ((void*)0)) {

  int VAR_10 = (VAR_5 == VAR_0 || VAR_5 == VAR_1) ? VAR_2 : -1;
  FUNC_4(VAR_3, "failed to resolve path '%s'", VAR_7);

  FUNC_1(VAR_6);

  return VAR_10;
 }

 return FUNC_3(VAR_6, VAR_9);
}
