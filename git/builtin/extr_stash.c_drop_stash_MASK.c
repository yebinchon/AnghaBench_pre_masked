
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stash_info {int dummy; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int*,int ) ;
 int FUNC_3 (struct stash_info*) ;
 int FUNC_4 (struct stash_info*,int) ;
 int FUNC_5 (struct stash_info*) ;
 scalar_t__ FUNC_6 (struct stash_info*,int,char const**) ;
 int VAR_0 ;
 int FUNC_7 (int,char const**,char const*,struct option*,int ,int ) ;

__attribute__((used)) static int FUNC_8(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 struct stash_info VAR_6;
 struct option VAR_7[] = {
  FUNC_2(&VAR_5, FUNC_0("be quiet, only report errors")),
  FUNC_1()
 };

 VAR_1 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_7,
        VAR_0, 0);

 if (FUNC_6(&VAR_6, VAR_1, VAR_2))
  return -1;

 FUNC_3(&VAR_6);

 VAR_4 = FUNC_4(&VAR_6, VAR_5);
 FUNC_5(&VAR_6);
 return VAR_4;
}
