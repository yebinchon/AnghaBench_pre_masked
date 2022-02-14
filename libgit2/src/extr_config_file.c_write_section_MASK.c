
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 char const* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (TYPE_1__*,char const*,int) ;
 int FUNC_8 (TYPE_1__*,char) ;
 int FUNC_9 (TYPE_1__*,char const*) ;
 char* FUNC_10 (char const*,char) ;

__attribute__((used)) static int FUNC_11(git_buf *VAR_1, const char *VAR_2)
{
 int VAR_3;
 const char *VAR_4;
 git_buf VAR_5 = VAR_0;


 VAR_4 = FUNC_10(VAR_2, '.');
 FUNC_8(&VAR_5, '[');
 if (VAR_4 == ((void*)0)) {
  FUNC_9(&VAR_5, VAR_2);
 } else {
  char *VAR_6;
  FUNC_7(&VAR_5, VAR_2, VAR_4 - VAR_2);
  VAR_6 = FUNC_1(VAR_4 + 1);
  FUNC_0(VAR_6);
  FUNC_6(&VAR_5, " \"%s\"", VAR_6);
  FUNC_2(VAR_6);
 }
 FUNC_9(&VAR_5, "]\n");

 if (FUNC_5(&VAR_5))
  return -1;

 VAR_3 = FUNC_7(VAR_1, FUNC_3(&VAR_5), VAR_5.size);
 FUNC_4(&VAR_5);

 return VAR_3;
}
