
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_10__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (TYPE_1__*,char const*) ;
 int * FUNC_9 (char const*,char) ;

int FUNC_10(git_buf *VAR_2, git_repository *VAR_3, const char *VAR_4)
{
 int VAR_5 = 0;
 git_buf VAR_6 = VAR_0;

 FUNC_0(VAR_2 && VAR_3 && VAR_4);

 FUNC_3(VAR_2);


 if (FUNC_9(VAR_4, '\\')) {
  if ((VAR_5 = FUNC_8(&VAR_6, VAR_4)) < 0)
   return VAR_5;

  VAR_4 = VAR_6.ptr;
 }


 if (FUNC_7(VAR_4)) {
  if (!(VAR_5 = FUNC_1(VAR_2, VAR_3)))
   VAR_5 = FUNC_6(VAR_2, VAR_4);
 } else if (FUNC_9(VAR_4, ':') != ((void*)0) || VAR_4[0] == '/') {
  VAR_5 = FUNC_4(VAR_2, VAR_4);
 } else {
  FUNC_5(VAR_1, "invalid format for submodule URL");
  VAR_5 = -1;
 }

 FUNC_2(&VAR_6);
 return VAR_5;
}
