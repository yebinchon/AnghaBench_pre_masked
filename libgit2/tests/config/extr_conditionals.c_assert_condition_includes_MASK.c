
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_config ;
struct TYPE_9__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,int *,char*) ;
 int FUNC_12 (int **,int ) ;

__attribute__((used)) static void FUNC_13(const char *VAR_3, const char *VAR_4, bool VAR_5)
{
 git_buf VAR_6 = VAR_0;
 git_config *VAR_7;

 FUNC_3(FUNC_8(&VAR_6, "[includeIf \"%s:%s\"]\n", VAR_3, VAR_4));
 FUNC_3(FUNC_9(&VAR_6, "path = other\n"));

 FUNC_2("empty_standard_repo/.git/config", VAR_6.ptr);
 FUNC_2("empty_standard_repo/.git/other", "[foo]\nbar=baz\n");
 VAR_2 = FUNC_4();

 FUNC_3(FUNC_12(&VAR_7, VAR_2));

 if (VAR_5) {
  FUNC_5(&VAR_6);
  FUNC_3(FUNC_11(&VAR_6, VAR_7, "foo.bar"));
  FUNC_0("baz", FUNC_6(&VAR_6));
 } else {
  FUNC_1(VAR_1,
     FUNC_11(&VAR_6, VAR_7, "foo.bar"));
 }

 FUNC_7(&VAR_6);
 FUNC_10(VAR_7);
}
