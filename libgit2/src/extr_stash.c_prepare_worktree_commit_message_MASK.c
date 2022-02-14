
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 char const* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int FUNC_4 (TYPE_1__*,char const*,char const*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 char* FUNC_7 (char const*,char) ;

__attribute__((used)) static int FUNC_8(git_buf *VAR_1, const char *VAR_2)
{
 git_buf VAR_3 = VAR_0;
 int VAR_4 = 0;

 if (!VAR_2) {
  FUNC_3(&VAR_3, "WIP on %s", FUNC_0(VAR_1));
 } else {
  const char *VAR_5;

  if ((VAR_5 = FUNC_7(FUNC_0(VAR_1), ':')) == ((void*)0))
   goto cleanup;

  FUNC_5(&VAR_3, "On ");
  FUNC_4(&VAR_3, FUNC_0(VAR_1), VAR_5 - VAR_1->ptr);
  FUNC_3(&VAR_3, ": %s\n", VAR_2);
 }

 if (FUNC_2(&VAR_3)) {
  VAR_4 = -1;
  goto cleanup;
 }

 FUNC_6(VAR_1, &VAR_3);

cleanup:
 FUNC_1(&VAR_3);
 return VAR_4;
}
