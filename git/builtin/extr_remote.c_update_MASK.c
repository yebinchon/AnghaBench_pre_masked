
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;
struct argv_array {int argc; int * argv; } ;


 struct argv_array VAR_0 ;
 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,char*,int*,int ) ;
 struct option FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct argv_array*) ;
 int FUNC_4 (struct argv_array*) ;
 int FUNC_5 (struct argv_array*,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 (int,char const**,int *,struct option*,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int ,char*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_10(int VAR_6, const char **VAR_7)
{
 int VAR_8, VAR_9 = -1;
 struct option VAR_10[] = {
  FUNC_1('p', "prune", &VAR_9,
    FUNC_0("prune remotes after fetching")),
  FUNC_2()
 };
 struct argv_array VAR_11 = VAR_0;
 int VAR_12 = 0;
 int VAR_13;

 VAR_6 = FUNC_7(VAR_6, VAR_7, ((void*)0), VAR_10, VAR_3,
        VAR_1);

 FUNC_5(&VAR_11, "fetch");

 if (VAR_9 != -1)
  FUNC_5(&VAR_11, VAR_9 ? "--prune" : "--no-prune");
 if (VAR_5)
  FUNC_5(&VAR_11, "-v");
 FUNC_5(&VAR_11, "--multiple");
 if (VAR_6 < 2)
  FUNC_5(&VAR_11, "default");
 for (VAR_8 = 1; VAR_8 < VAR_6; VAR_8++)
  FUNC_5(&VAR_11, VAR_7[VAR_8]);

 if (FUNC_9(VAR_11.argv[VAR_11.argc-1], "default") == 0) {
  FUNC_6(VAR_4, &VAR_12);
  if (!VAR_12) {
   FUNC_4(&VAR_11);
   FUNC_5(&VAR_11, "--all");
  }
 }

 VAR_13 = FUNC_8(VAR_11.argv, VAR_2);
 FUNC_3(&VAR_11);
 return VAR_13;
}
